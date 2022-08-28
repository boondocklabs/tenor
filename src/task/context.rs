use alloc::{string::String, boxed::Box};
use super::Task;

unsafe impl Send for TaskContext {}

pub struct TaskContext {
    pub name: String,
    pub task: Box<dyn Task>
}

impl TaskContext {
    pub fn new(name: String, task: Box<dyn Task>) -> Self {
        let t = Self {
            name: name,
            task: task
        };

        return t;
    }
}
