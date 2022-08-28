use core::borrow::BorrowMut;
use core::{ptr::read_volatile, mem::size_of};

use alloc::vec::Vec;
use alloc::sync::Arc;
use memoffset::offset_of;

use super::{Thread, current};

const NUM_SAVE_REGISTERS: usize = 13;

#[repr(C)]
pub struct ThreadContext {
    stack: Option<Vec<usize>>,
    stack_offset: usize,
    regs: [usize; NUM_SAVE_REGISTERS],
}

const CONTEXT_REGS_OFFSET: usize = offset_of!(ThreadContext, regs);

impl ThreadContext {
    pub fn new(stack_size: usize) -> Self {
        let mut stack = None;
        let mut stack_words = 0;
 
        if stack_size > 0 {
            stack_words = stack_size / size_of::<usize>();
            stack = Some(vec![0 as usize; stack_words]);
        }

        let mut ctx = ThreadContext {
            regs: [0 as usize; NUM_SAVE_REGISTERS],
            stack: stack,
            stack_offset: stack_words
        };

        if stack_size > 0 {
            let stack_addr = ctx.stack.as_mut().unwrap().as_mut_ptr_range();

            ctx.set_stack_pointer(stack_addr.end);
        }
 
        ctx
    }

    pub fn set_return(&mut self, addr: usize) {
        self.regs[0] = addr;
    }

    pub fn get_return(&self) -> usize {
        self.regs[0]
    }

    pub fn set_stack_pointer(&mut self, addr: *mut usize) {
        self.regs[1] = addr as usize;
    }

    pub fn get_stack(&self) -> &Vec<usize> {
        &self.stack.as_ref().unwrap()
    }

    pub fn push_stack(&mut self, value: usize) {
        let stack = self.stack.as_mut().unwrap();
        stack[self.stack_offset-1] = value;
        self.stack_offset += 1;

        // This adjusts the stack pointer in the context registers
        self.regs[1] -= size_of::<usize>();

        let stack_addr = self.stack.as_mut().unwrap().as_mut_ptr_range();
        log::info!("Stack range: {:#08X?}", stack_addr);
    }
}

pub fn switch_to(id: super::ThreadId) {
    let (a,b) = critical_section::with(|cs| {
        let current_tid = super::CURRENT_THREAD.borrow(cs).borrow().unwrap();
        let map = super::THREADS.borrow(cs).borrow();

        let current_thread = map.get(&current_tid).unwrap();
        let target_thread = map.get(&id).unwrap();

        // Returned cloned atomic references to the threads
        (current_thread.clone(), target_thread.clone())
    });

    unsafe {
        switch(&a, &b);
    }
}

extern "C" {
    #[link_name = "llvm.returnaddress"]
    fn return_address(level: i32) -> *const u8;
}

/// Yield the current thread back to the main idle thread
fn _yield() {
    let (current_thread, idle_thread) = critical_section::with(|cs| {
        let current_tid = super::CURRENT_THREAD.borrow(cs).borrow().unwrap();
        let map = super::THREADS.borrow(cs).borrow();
        
        let idle_thread = map.get(&super::IDLE_THREAD_ID).unwrap().clone();
        let current_thread = map.get(&current_tid).unwrap().clone();

        (current_thread, idle_thread)
    });

    unsafe {
        switch(&current_thread, &idle_thread);
    }
}

#[no_mangle]
pub extern "C" fn _thread_main(f: extern fn()) {

    /*
    unsafe {
        let mut sp = 0 as usize;
        let mut ra = 0 as usize;

        core::arch::asm!(
            "
            move {ra}, ra
            move {sp}, sp
            ",
            sp = out(reg) sp,
            ra = out(reg) ra
        );

        log::info!("SP: 0x{:08X} RA: 0x{:08X}", sp, ra);
    }
    */

    // Context switch back to the idle thread and let
    // the scheduler take execution from here.
    _yield();

    // Call the thread entry point
    f();

    log::warn!("Thread returned");

    // Yield to the idle thread forever until this thread
    // has been terminated
    loop {
        _yield();
    }
}

pub unsafe fn start(from: &Thread, to: &Thread, f: fn()) {
    super::set_current(to.id);
    _start(&from.context(), &to.context(), f);
}

#[naked]
unsafe extern "C" fn _start(from: &ThreadContext, to: &ThreadContext, f: fn()) {
    // a0 points to the source ThreadContext
    // a1 points to the target ThreadContext
    // a2 points to the thread entry point function

    core::arch::asm!(
        "
        // Apply the offset to the registers of the context struct
        addi a0, a0, {}
        addi a1, a1, {}

        // Store the current thread context into ThreadContext.regs
        sw ra,   0(a0)
        sw sp,   4(a0)
        sw s0,   8(a0)
        sw s1,  12(a0)
        sw s2,  16(a0)
        sw s3,  20(a0)
        sw s4,  24(a0)
        sw s5,  28(a0)
        sw s6,  32(a0)
        sw s7,  36(a0)
        sw s8,  40(a0)
        sw s9,  44(a0)
        sw s10, 48(a0)
        sw s11, 52(a0)

        // Restore context for the destination thread from ThreadContext.regs
        lw ra,   0(a1)
        lw sp,   4(a1)
        lw s0,   8(a1)
        lw s1,  12(a1)
        lw s2,  16(a1)
        lw s3,  20(a1)
        lw s4,  24(a1)
        lw s5,  28(a1)
        lw s6,  32(a1)
        lw s7,  36(a1)
        lw s8,  40(a1)
        lw s9,  44(a1)
        lw s10, 48(a1)
        lw s11, 52(a1)

        move a0, a2
        call _thread_main

        //lw ra,  0(sp)

        // We should never arrive here, return to beginning of ROM and reboot
        li ra, 0 

        ret
        ",
        const CONTEXT_REGS_OFFSET,
        const CONTEXT_REGS_OFFSET,
        options(noreturn)
    );
}

pub unsafe fn switch(from: &Thread, to: &Thread) {

    //log::info!("Ctx switch: {:p} -> {:p} ret={:08X}", from, to, to.context.get_return());
    super::set_current(to.id);
    _context_switch(&from.context(), &to.context());
}

#[naked]
unsafe extern "C" fn _context_switch(from: &ThreadContext, to: &ThreadContext) {
    // a0 points to the source ThreadContext
    // a1 points to the target ThreadContext

    core::arch::asm!(
        "
        // Apply the offset to the registers of the context struct
        addi a0, a0, {}
        addi a1, a1, {}

        // Store the current thread context into ThreadContext.regs
        sw ra,   0(a0)
        sw sp,   4(a0)
        sw s0,   8(a0)
        sw s1,  12(a0)
        sw s2,  16(a0)
        sw s3,  20(a0)
        sw s4,  24(a0)
        sw s5,  28(a0)
        sw s6,  32(a0)
        sw s7,  36(a0)
        sw s8,  40(a0)
        sw s9,  44(a0)
        sw s10, 48(a0)
        sw s11, 52(a0)

        // Restore context for the destination thread from ThreadContext.regs
        lw ra,   0(a1)
        lw sp,   4(a1)
        lw s0,   8(a1)
        lw s1,  12(a1)
        lw s2,  16(a1)
        lw s3,  20(a1)
        lw s4,  24(a1)
        lw s5,  28(a1)
        lw s6,  32(a1)
        lw s7,  36(a1)
        lw s8,  40(a1)
        lw s9,  44(a1)
        lw s10, 48(a1)
        lw s11, 52(a1)

        ret
        ",
        const CONTEXT_REGS_OFFSET,
        const CONTEXT_REGS_OFFSET,
        options(noreturn)
    );
}