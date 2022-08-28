use alloc::{vec::Vec, boxed::Box, string::String};
use log::{info};

extern crate spinning_top;
use spinning_top::{Spinlock, lock_api::MutexGuard, RawSpinlock};

use super::context::TaskContext;
use super::Task;

pub struct TaskManager {
    tasks: Vec<TaskContext>,
}

impl TaskManager {
    pub const fn new() -> Self {
        TaskManager {
            tasks: vec![],
        }
    }

    pub fn tick(&self) {
        for context in self.tasks.iter() {
            context.task.run();
        }
    }

    pub fn add(&mut self, name: String, task: Box<dyn Task>) {
        task.start();
        
        let context = TaskContext::new(name, task);
        info!("Adding task {}", context.name);

        self.tasks.push(context);
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
