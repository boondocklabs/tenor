use alloc::{vec::Vec, string::String, boxed::Box};
use log::{info};

extern crate spinning_top;
use spinning_top::{Spinlock, lock_api::MutexGuard, RawSpinlock};

pub struct TaskManager {
    tasks: Vec<Task>
}

impl TaskManager {
    pub const fn new() -> Self {
        TaskManager {
            tasks: vec![]
        }
    }

    pub fn add(&mut self, task: Task) {
        info!("Adding task {} to manager", task.name);
        self.tasks.push(task) 
    }

    pub fn tick(&self) {
        for task in self.tasks.iter() {
            task.worker.run();
        }
    }
}

pub struct LockedTaskManager(pub Spinlock<TaskManager>);

impl LockedTaskManager {
    pub const fn new() -> LockedTaskManager {
        LockedTaskManager(Spinlock::new(TaskManager::new()))
    }

    pub fn lock(&self) -> MutexGuard<'_, RawSpinlock, TaskManager> {
        return self.0.lock();
    }
}

unsafe impl Send for Task {}

pub struct Task {
    pub name: String,
    pub worker: Box<dyn TaskWorker>
}

impl Task {
    pub fn new(name: String, worker: Box<dyn TaskWorker>) -> Self {
        info!("Creating task {}", name);
        let t = Task {
            name: name,
            worker: worker
        };

        t.worker.init();

        return t;
    }
}


pub trait TaskWorker {
    fn run(&self);
    fn init(&self);
}