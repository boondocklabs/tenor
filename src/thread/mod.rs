
//use core::{arch::asm};

pub mod scheduler;
pub mod context;
pub mod info;

use crate::DriverAccess;

use core::{cell::RefCell, borrow::BorrowMut};

use critical_section::Mutex;
use hashbrown::HashMap;
use alloc::sync::Arc;

lazy_static! {
    static ref IDLE_THREAD_ID: ThreadId = ThreadId(0);
    static ref THREADS: Mutex<RefCell<HashMap<ThreadId, Arc<Thread>>>> = Mutex::new(RefCell::new(HashMap::new()));
    static ref CURRENT_THREAD: Mutex<RefCell<Option<ThreadId>>> = Mutex::new(RefCell::new(None));
}


// Size of the stack in usize words
const THREAD_STACK_SIZE: usize = 8192;

#[derive(Debug, Clone)]
pub enum ThreadState {
    New,
    Idle,
    Pending,
    Running
}

#[derive(Eq, PartialEq, Clone, Copy, Hash, Debug)]
pub struct ThreadId(u64);

impl ThreadId {
    pub fn new() -> ThreadId {
        static mut COUNTER: u64 = 0;

        critical_section::with(|cs| {
            unsafe {
                if COUNTER == u64::MAX {
                    panic!("Thread IDs exhausted")
                }

                let id = COUNTER;
                COUNTER += 1;

                ThreadId(id)
            }
        })
    }

    fn as_u64(&self) -> u64 {
        self.0
    }
}

pub struct Thread {
    pub id: ThreadId,
    //stack: Box<[usize; THREAD_STACK_WORDS]>,
    pub context: context::ThreadContext,
    pub state: ThreadState,
    //entry: fn()
}

impl core::fmt::Debug for Thread {
    fn fmt(&self, f: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {
        //write!(f, "Thread {} [stack={:p} state={:?}]", self.id.as_u64(), self.context.get_stack(), self.state)
        write!(f, "Thread {} [state={:?}]", self.id.as_u64(), self.state)
    }
}

impl Thread {
    pub fn new() -> Self {
        // Initialize the thread context. This provides storage for
        // storing registers during context switches
        let mut context = context::ThreadContext::new(THREAD_STACK_SIZE);

        // Get the raw entry point address as a usize
        //let entry_addr: usize = entry as *mut usize as usize;

        // Set the initial return address of the context to the entry point.
        // On the first context switch, the entry point will be loaded
        // into the return address register, and the ret from the switch asm
        // will start at the entry point of the thread.
        //context.set_return(entry_addr);

        // Initialize the stack pointer in the context
        //context.set_stack_pointer(stack_addr + THREAD_STACK_SIZE);

        let t = Thread {
            id: ThreadId::new(),
            context: context,
            state: ThreadState::New,
            //entry: entry
        };

        return t;
    }

    pub fn set_entry(&mut self) {

    }

    pub fn context(&self) -> &context::ThreadContext {
        &self.context
    }

}

//pub fn spawn(f: fn()) {
pub fn spawn(f: fn())
{
    let t = Thread::new();

    // Set the ret address for the context switch to the internal thread_main function
    // which will wrap the actual entry point of the thread.
    //t.context.set_return(context::_thread_main as *const usize as usize);

    // Add the thread to the global hash map
    let tid = thread_add(t);

    let (a,b) = critical_section::with(|cs| {

        let current_tid = CURRENT_THREAD.borrow(cs).borrow().unwrap();
        let map = THREADS.borrow(cs).borrow();

        let current_thread = map.get(&current_tid).unwrap();
        let target_thread = map.get(&tid).unwrap();

        // Returned cloned atomic references to the threads
        (current_thread.clone(), target_thread.clone())
    });

    unsafe {
        context::start(a.as_ref(), b.as_ref(), f);
    }
}

pub fn current() -> ThreadId
{
    critical_section::with(|cs| {
        let cid = CURRENT_THREAD.borrow(cs).borrow().unwrap();
        cid
    })
}

pub fn set_current(id: ThreadId) {
    critical_section::with(|cs| {
        let mut cid = CURRENT_THREAD.borrow_ref_mut(cs);
        cid.replace(id);
    })
}

pub fn thread_add(thread: Thread) -> ThreadId
{
    let id = thread.id.clone();

    let ptr = &thread as *const _ as u32;

    super::TMU.access(|tmu| {
        tmu.add_thread(id.as_u64() as u32, ptr)
    });

    critical_section::with(|cs| {
        let mut thread_map = THREADS.borrow_ref_mut(cs);
        thread_map.borrow_mut().insert(thread.id, Arc::new(thread));
    });

    id
}

pub fn thread_with(id: &ThreadId, f: impl FnOnce(&Thread))
{
    critical_section::with(|cs| {
        let mut thread_map = THREADS.borrow_ref_mut(cs);
        let t = thread_map.borrow_mut().get(id).unwrap();
        f(t)
    })
}