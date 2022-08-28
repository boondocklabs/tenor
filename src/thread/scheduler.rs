use super::ThreadId;
use alloc::{vec::Vec};

extern crate spinning_top;
use spinning_top::{Spinlock, lock_api::MutexGuard, RawSpinlock};
use alloc::sync::Arc;

use super::{Thread, context::ThreadContext};

pub struct ThreadScheduler {
    pending: Vec<Thread>,
}

impl ThreadScheduler {
    pub const fn new() -> Self {
        //let context = ThreadContext::new(1024);

        ThreadScheduler {
            pending: vec![],
        }
    }

    pub fn tick(&mut self) {
        let mut pend: Vec<ThreadId> = vec![];

        critical_section::with(|cs| {
            let map = super::THREADS.borrow(cs).borrow();
            for (id, thread) in map.iter() {
                pend.push(*id)
            }
        });

        //log::info!("{:#?}", pend);

        for id in pend {
            super::context::switch_to(id);
        }
    }

    pub fn add(&mut self, mut thread: Thread) {
        //self.threads.push(thread);
    }
}


pub struct LockedThreadScheduler(pub Spinlock<ThreadScheduler>);

impl LockedThreadScheduler {
    pub const fn new() -> LockedThreadScheduler {
        LockedThreadScheduler(Spinlock::new(ThreadScheduler::new()))
    }

    pub fn lock(&self) -> MutexGuard<'_, RawSpinlock, ThreadScheduler> {
        return self.0.lock();
    }
}