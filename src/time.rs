use log::{info};

#[inline]
#[allow(dead_code)]
pub fn mcycle() -> u32 {
    let mut t: u32 = 0;
    unsafe {core::arch::asm!("rdcycle {t}", t=out(reg) t)};
    return t;
}

pub fn timeit<R>(msg: &str, f: impl FnOnce() -> R) -> R {
    let t1 = riscv::register::mcycle::read64();
    let r = f();
    let t2 = riscv::register::mcycle::read64();
    let elapsed = t2-t1;

    info!("{} took {} cycles", msg, elapsed);
    return r;
}