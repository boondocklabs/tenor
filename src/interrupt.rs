// VexRiscv external interrupt controller

// The interrupt controller uses CPU CSRs:
// 0xBC0: IRQ mask register
// 0xFC0: IRQ pending register

use core::arch::asm;

pub struct VexRiscvInterrupt;

#[allow(dead_code)]
impl VexRiscvInterrupt {
    pub fn write_mask(mask: usize) {
        unsafe {
            asm!("csrw 0xBC0, {mask}", mask = in(reg) mask)
        }
    }

    pub fn read_mask() -> usize {
        let mask: usize;
        unsafe {
            asm!("csrr {mask}, 0xBC0", mask = out(reg) mask);
        }
        return mask
    }

    pub fn pending() -> usize {
        let pending: usize;
        unsafe {
            asm!("csrr {pending}, 0xFC0", pending = out(reg) pending);
        }
        return pending;
    }
}