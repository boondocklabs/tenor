#![no_std]
#![no_main]

#![feature(default_alloc_error_handler)]

mod uart;
mod timer;
mod interrupt;
//mod bpu;
mod uart_log;
mod dma_test;
mod driver;
mod time;

//extern crate alloc;
//use alloc::boxed::Box;
use driver::{DriverAccess};

core::arch::global_asm!(include_str!("asm/boot.S"));
core::arch::global_asm!(include_str!("asm/trap.S"));

use core::fmt::{Write};
use core::panic::PanicInfo;
//use core::sync::atomic::AtomicUsize;
use core::ptr::write_volatile;

use interrupt::VexRiscvInterrupt;
use litex_pac::{TIMER0, TIMER1};
use riscv::asm::*;
use uart_log::UartLogger;

use riscv as _;
use critical_section::{Mutex, RawRestoreState};

use ansi_rgb::{ Foreground };
use ansi_rgb::{ cyan_blue, green_cyan };

use log::{LevelFilter, info, error};

use crate::dma_test::DMATest;

use time::timeit;

//use linked_list_allocator::LockedHeap;
use numtoa::NumToA;


driver_add!(UART, uart::Uart);
driver_add!(TIMER0, timer::Timer<TIMER0>);
driver_add!(TIMER1, timer::Timer<TIMER1>);
driver_add!(DMATEST, dma_test::DMATest);


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

/*
#[global_allocator]
static ALLOCATOR: LockedHeap = LockedHeap::empty();

// These are defined in the linker script (lds/litex-sim.lds)
extern "C" {
    static _heap_start: u8; 
    static _heap_size: usize;
}

pub fn init_heap() {
    unsafe {
        let heap_start = _heap_start;
        let heap_size = _heap_size;
        ALLOCATOR.lock().init(heap_start as *mut u8, heap_size);
    }
}
*/

#[panic_handler]
fn panic(info: &PanicInfo) -> ! {
    error!("PANIC {:#?}", info);
    loop {
        unsafe { wfi() };
    }
}

fn putchar(ch: char) {
    unsafe {
       core::arch::asm!("
            li a1, 0xF0003000
            sb {ch}, 0(a1)
           ", ch = in(reg) ch as u8);
    }
}

#[no_mangle]
#[link_section = ".riscv.trap"]
pub unsafe extern "C" fn machine_trap() {
    putchar('Q');

    let mut cause: usize = 0;
    unsafe {
        core::arch::asm!("csrr {cause}, mcause", cause = out(reg) cause)
    }

    putchar('\n');
    putchar(('0' as u8 + (cause & 0xff) as u8) as char);
    putchar('\n');
    putchar(('0' as u8 + (cause >> 8 & 0xff) as u8) as char);
    putchar('\n');
    putchar(('0' as u8 + (cause >> 16 & 0xff) as u8) as char);
    return;

    let mut buf = [0u8; 20];
    let a = cause.numtoa_str(16, &mut buf);

    for i in a.chars() {
        putchar(i);
    }


    return;
    
    //let mepc = riscv::register::mepc::read();
    //let mtval = riscv::register::mtval::read();
    let mcause = riscv::register::mcause::read();
    //let mhartid = riscv::register::mhartid::read();
    //let mstatus = riscv::register::mstatus::read();

    match mcause.cause() {
        riscv::register::mcause::Trap::Exception(e) => {
            unsafe {core::arch::asm!("
            li t0, 0xF0003000
            li t1, 0x65
            sb t1, 0(t0)
            ")};
            //let code = mcause.code();

            //info!("EXCEPTION {:#?} code={}", e, code);
            //info!("MEPC: 0x{:08X}", mepc);
            //info!("MTVAL: 0x{:08X}", mtval);
            //info!("MCAUSE: 0x{:08X}", mcause.bits());
            //info!("MHARTID: 0x{:08X}", mhartid);

            loop {}
        }

        riscv::register::mcause::Trap::Interrupt(source) => {

            match source {
                riscv::register::mcause::Interrupt::MachineExternal => {
                    // Handle external interrupts from the VexRiscv interrupt controller
                    let pending = VexRiscvInterrupt::pending() as u32;
                    //info!("Pending external interrupt: {}\r\n", pending);

                    if pending & (1u32 << litex_pac::Interrupt::UART as u32) != 0 {
                        UART.access(|d| {
                            d.handle_interrupt();
                        });
                    }
                    if pending & (1u32 << litex_pac::Interrupt::TIMER0 as u32) != 0 {
                        TIMER0.access(|d| {
                            d.handle_interrupt();
                        });
                    }
                    if pending & (1u32 << litex_pac::Interrupt::TIMER1 as u32) != 0 {
                        TIMER1.access(|d| {
                            d.handle_interrupt();
                        });
                    }

                    if pending & (1u32 << litex_pac::Interrupt::DMATEST as u32) != 0 {
                        DMATEST.access(|dma| {
                            dma.interrupt_handler();
                        })
                    }
                }

                _ => {
                    info!("Unhandled CPU interrupt source: {:#?}", source);
                }
            }
        }
    }
}

#[no_mangle]
#[link_section = ".text.start"]
extern "C" fn main() {
    putchar('M');
    //unsafe {crash()};

    let s = "MAIN\r\n";
    for i in s.chars() {
        putchar(i);
    }

    //unsafe {crash()};

    /*
    loop {


    unsafe {core::arch::asm!("
    ;csrrw	t6, mscratch, t6
    li t0, 0xF0003000
	li t1, 0x43
	sb t1, 0(t0)
    ")};
    }
    */
    //let a = core::sync::atomic::AtomicUsize::new(0);

    //let mstatus = riscv::register::mstatus::read();

    unsafe {core::arch::asm!("
    li t0, 0xF0003000
    li t1, 0x58
    sb t1, 0(t0)
    ")};

    riscv::interrupt::free(|cs| {
        unsafe {core::arch::asm!("
        li t0, 0xF0003000
        li t1, 0x57
        sb t1, 0(t0)
        ")};

    });

    let peripherals = litex_pac::Peripherals::take().unwrap();

    unsafe {core::arch::asm!("
    li t0, 0xF0003000
	li t1, 0x44
	sb t1, 0(t0)
    ")};

    // Initialize the UART
    let mut uart = uart::Uart::new(peripherals.UART);
    write!(uart, "\r\n\r\n").unwrap();
    write!(uart, "{}", "Rust RISCV Kernel Booting\r\n".fg(cyan_blue())).unwrap();
    UART.set(uart);

    unsafe {
        log::set_logger_racy(&LOGGER)
            .map(|()| log::set_max_level(LevelFilter::Trace))
            .unwrap();
    }

    info!("Logging initialized");

    //init_heap();

    // Initialize timers
    let timer0 = timer::Timer::new(peripherals.TIMER0, 2e6 as usize);
    let timer1= timer::Timer::new(peripherals.TIMER1, 3e6 as usize);

    //let bpu = bpu::BufferProcessingUnit::new(peripherals.BPU);

    let dma: DMATest = dma_test::DMATest::new(peripherals.DMATEST);

    // Set the driver instances. From this point on, all drivers are accessed using:
    // DEVICE.access(|driver| { driver.method() })
    TIMER0.set(timer0);
    TIMER1.set(timer1);
    DMATEST.set(dma);

    // Enable interrupts
    unsafe {
        riscv::interrupt::enable();
        VexRiscvInterrupt::write_mask(usize::MAX);
    }

    info!("Starting main loop");
    info!("Starting DMA test");

    const NUM: usize = (1024*1024*32);

    //let mut data = Box::new([0; NUM]);
    //let mut dest = Box::new([0; NUM]);


    let mut data = [0 as u8; NUM];
    let mut dest = [0 as u8; NUM];

    let mut count = 0u8;
    loop {
        /*
        info!("CLONE:");
        timeit(|| {
            dest = data.clone();
        });
        */

        for i in 1..NUM+1 {
            data[(i-1) as usize] = count + i as u8 % 8;
        }

        count += 1;

        assert_ne!(data, dest);

        timeit(|| {
            DMATEST.access(|dma| {
                //dma.copy(&*data, &*dest, NUM as usize);
                dma.copy(&data, &dest, NUM as usize);
                dma.wait();
                //dma.dump();
            });
        });

        //info!("Source: {:02X?}", data);
        //info!("Dest: {:02X?}", dest);

        assert_eq!(data, dest);
        info!("{}", "Pass".fg(green_cyan()));

        unsafe { wfi() };
    }
}
