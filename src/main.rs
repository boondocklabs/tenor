#![no_std]
#![no_main]

#![feature(alloc_error_handler)]
//#![feature(box_syntax)]

// This allows us to use LLVM intrinsics to get
// the return address of a Rust function for
// the context switcher
#![feature(link_llvm_intrinsics)]

#![feature(naked_functions)]

// Allow the offset_of! macro to work as a const
// to get the register offset in the Thread context
#![feature(const_ptr_offset_from, const_refs_to_cell)]

// Allow passing consts to inline asm in naked functions
#![feature(asm_const)]


#[macro_use]
extern crate alloc;

#[macro_use]
extern crate lazy_static;

mod trap;
mod uart;
mod timer;
mod interrupt;
mod uart_log;
mod dma_test;
mod driver;
mod time;
mod util;
mod task;
mod thread;
mod tmu;

use alloc::boxed::Box;
use driver::{DriverAccess};
use thread::ThreadId;
use thread::scheduler::LockedThreadScheduler;

core::arch::global_asm!(include_str!("asm/boot.S"));
core::arch::global_asm!(include_str!("asm/trap.S"));

use core::fmt::{Write};
use core::panic::PanicInfo;
use core::ptr::write_volatile;

use interrupt::VexRiscvInterrupt;
use litex_pac::{TIMER0, TIMER1};
use riscv::asm::*;
use uart_log::UartLogger;

use riscv as _;
use critical_section::{Mutex, RawRestoreState};

use ansi_rgb::{ Foreground };
use ansi_rgb::{ cyan_blue, green_cyan, blue_magenta };

use log::{LevelFilter, info, error};

use dma_test::DMATest;

use time::timeit;

use linked_list_allocator::LockedHeap;
use backtrace;

#[alloc_error_handler]
fn allocation_error(_: core::alloc::Layout) -> ! {
    panic!("Memory allocation failed");
}

driver_add!(UART, uart::Uart);
driver_add!(TIMER0, timer::Timer<TIMER0>);
driver_add!(TIMER1, timer::Timer<TIMER1>);
driver_add!(DMATEST, dma_test::DMATest);
driver_add!(TMU, tmu::ThreadManagementUnit);


struct RiscvCriticalSection;

critical_section::set_impl!(RiscvCriticalSection);

unsafe impl critical_section::Impl for RiscvCriticalSection {
    unsafe fn acquire() -> RawRestoreState {
        let was_active = riscv::register::mstatus::read().mie();
        riscv::interrupt::disable();
        was_active
    }

    unsafe fn release(was_active: RawRestoreState) {
        if was_active {
            riscv::interrupt::enable()
        }
    }
}

// Do an unaligned write to test the trap handler
#[allow(dead_code)]
unsafe fn crash() {
    const ptr: *mut u32 = (0xffffffff) as *mut u32;
    write_volatile(ptr, 0xdeadbeef)
}

static LOGGER: UartLogger = UartLogger;
static SCHEDULER: LockedThreadScheduler = LockedThreadScheduler::new();

#[global_allocator]
static ALLOCATOR: LockedHeap = LockedHeap::empty();

// These are defined in the linker script (lds/litex-sim.lds)
extern "C" {
    static _heap_start: usize; 
    static _heap_end: usize;
}

pub fn init_heap() {
    unsafe {
        let heap_start = &_heap_start as *const usize as usize;
        let heap_end = &_heap_end as *const usize as usize;
        let heap_size = heap_end - heap_start;
        info!("Heap start: {:p} end: {:p} size: {} MiB",
            heap_start as *mut u8,
            heap_end as *mut u8,
            heap_size / (1024*1024)
        );
        ALLOCATOR.lock().init(heap_start as *mut u8, heap_size);
    }
}

#[panic_handler]
fn panic(info: &PanicInfo) -> ! {
    unsafe {riscv::interrupt::disable()};

    error!("PANIC {:#?}", info);

    unsafe {
        backtrace::trace_unsynchronized(|frame| {
            backtrace::resolve_frame_unsynchronized(frame, |symbol| {
                info!("[0x{:08X?}] {:?} (0x{:08X?}) {:?}:{:?}",
                    frame.ip(),
                    symbol.name(),
                    frame.symbol_address(),
                    symbol.filename_raw(),
                    symbol.lineno()
                )
            });

            true
        });
    }

    loop {
        unsafe { wfi() };
    }
}

fn putchar(ch: char) {
    const UART_ADDR: *const litex_pac::uart::RegisterBlock = litex_pac::UART::PTR;

    unsafe {
        write_volatile(UART_ADDR as *mut char, ch);
    }
}



#[no_mangle]
extern "C" fn main() {
    let peripherals = litex_pac::Peripherals::take().unwrap();

    let banner = include_str!("banner.txt");

    /*
    let leds = peripherals.LEDS;
    leds.out.write(|w| {
        unsafe { w.bits(1) }
    });
    */

    // Initialize the UART
    let mut uart = uart::Uart::new(peripherals.UART);
    write!(uart, "{}\r\n", banner.fg(blue_magenta())).unwrap();
    write!(uart, "{}", "Rust RISCV Kernel Booting\r\n".fg(cyan_blue())).unwrap();

    /*
    leds.out.write(|w| {
        unsafe { w.bits(0x8) }
    });
    */

    UART.set(uart);

    unsafe {
        log::set_logger_racy(&LOGGER)
            .map(|()| log::set_max_level(LevelFilter::Trace))
            .unwrap();
    }

    info!("Logging initialized");

    init_heap();
    info!("Heap initialized");

    // Initialize timers
    let timer0 = timer::Timer::new(peripherals.TIMER0, 48e6 as usize);
    let timer1= timer::Timer::new(peripherals.TIMER1, 48e6 as usize);
    let dma: DMATest = dma_test::DMATest::new(peripherals.DMATEST);
    let tmu = tmu::ThreadManagementUnit::new(peripherals.TMU);

    tmu.enable();

    // Set the driver instances. From this point on, all drivers are accessed using:
    // DEVICE.access(|driver| { driver.method() })
    TIMER0.set(timer0);
    TIMER1.set(timer1);
    DMATEST.set(dma);
    TMU.set(tmu);

    info!("Peripherals initialized");

    // Enable interrupts
    unsafe {
        let mut mask: usize = 0;
        mask |= (1usize << litex_pac::Interrupt::UART as usize);
        mask |= (1usize << litex_pac::Interrupt::TIMER0 as usize);
        mask |= (1usize << litex_pac::Interrupt::TIMER1 as usize);
        mask |= (1usize << litex_pac::Interrupt::DMATEST as usize);
        mask |= (1usize << litex_pac::Interrupt::TMU as usize);
        VexRiscvInterrupt::write_mask(mask);

        // Enable external interrupts from the VexRiscv interrupt controller
        riscv::register::mie::set_mext();

        // Enable global interrupts
        riscv::interrupt::enable();

    }

    info!("Interrupts enabled");

    thread_test();

    //start_tasks();

    //dmatest();

    // Main loop
    // NOTE: The wfi instruction is not guaranteed to work on all implementations,
    // but in the case of VexRiscv we can use it in an idle loop and drive the task
    // scheduler.
    loop {
        unsafe{ wfi() };
        //TASKMAN.lock().tick();
        SCHEDULER.lock().tick();
    }
}

fn dmatest() {

    const NUM: usize = (256*1024);
    let mut data = Box::new([0 as u8; NUM]);
    let mut dest = Box::new([0 as u8; NUM]);

    info!("Starting DMA test {:p} -> {:p}", data, dest);

    let mut count = 0u8;
    loop {
        timeit("CPU buffer fill", || {
            for i in 1..NUM+1 {
                data[(i-1) as usize] = count + i as u8 % 8;
            }
        });

        count += 1;

        timeit("DMA copy", || {
            DMATEST.access(|dma| {
                dma.copy(&*data, &*dest, NUM as usize);
                dma.wait();
                //dma.dump();
            });
        });

        timeit("CPU buffer compare", || {
            assert_eq!(data, dest);
        });
        info!("{}", "Pass".fg(green_cyan()));
    }
}

fn thread_test() {

    TIMER0.access(|t| {
        t.set_callback(|| {
            // Timer callback..
            log::info!("Tick");
        })
    });

    // Setup the main thread context
    let idle_context = thread::context::ThreadContext::new(0);

    let idle = thread::Thread {
        id: ThreadId::new(),
        context: idle_context,
        state: thread::ThreadState::Idle
    };

    let idle_id = thread::thread_add(idle);
    thread::set_current(idle_id);

    thread::spawn(|| {
        log::info!("Hello from thread1");
    });
    log::info!("Thread spawned! Back in main thread...");

    thread::spawn(|| {
        log::info!("Hello from thread2");
    });
    log::info!("Thread spawned! Back in main thread...");

    thread::spawn(|| {
        dmatest();
    })
}
