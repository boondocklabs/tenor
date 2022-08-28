use core::{cell::RefCell, borrow::BorrowMut};
use super::{Thread, ThreadId};
use critical_section::Mutex;
use hashbrown::HashMap;

lazy_static! {
    static ref THREAD_INFO: Mutex<RefCell<Option<ThreadInfo>>> = Mutex::new(RefCell::new(None));
}

///
/// Information about the current running thread
/// 
/// TODO: hart-local instance, or TLS?
struct ThreadInfo {
    thread: Thread
}

impl ThreadInfo {
    fn with<R, F>(f: F) -> R
    where
        F: FnOnce(&mut ThreadInfo) -> R
    {
        critical_section::with(|cs| {
            let mut x = THREAD_INFO.borrow_ref_mut(cs);
            let a = x.as_mut();
            match a {
                Some(ti) => {
                    f(ti)
                }
                None => {
                    let mut ti = ThreadInfo {
                        thread: Thread::new()
                    };

                    f(&mut ti)
                }
            }
        })
    }
}

pub fn current_thread() -> ThreadId {
    ThreadInfo::with(|thread_info| {
        thread_info.thread.id
    })
}

pub fn set_current_thread(thread: Thread) {
    ThreadInfo::with(|thread_info| {
        //let mut thread_info = thread_info.borrow_mut();
        *thread_info = ThreadInfo { thread };
    })
}