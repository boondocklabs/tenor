use riscv::asm::wfi;
use super::{Thread, ThreadId};
use super::context::ThreadContext;

pub struct IdleThread {
    thread: Thread,
}

impl IdleThread {
    pub fn new() -> Self {
        let mut context = ThreadContext::new(0);

        let t = Thread {
            id: ThreadId::new(),
            context: context,
            state: super::ThreadState::Idle,
            //entry: ||{},
        };

        log::info!("Idle thread created");

        IdleThread {
            thread: t
        }
    }

    pub fn run(&self) {
        log::info!("Idle thread started");
        loop {
            {
                crate::SCHEDULER.lock().tick(&self.thread);
                log::info!("Idle");
            }
            unsafe { wfi() };
        }
    }
}