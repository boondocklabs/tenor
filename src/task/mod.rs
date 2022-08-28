
pub mod manager;
pub mod context;

pub trait Task {
    fn start(&self);
    fn stop(&self);
    fn run(&self);
}