use log::{info};

use crate::VexRiscvInterrupt;

use super::{UART, TIMER0, TIMER1, DMATEST, TMU};
use super::DriverAccess;

#[no_mangle]
#[link_section = ".riscv.trap"]
pub unsafe extern "C" fn machine_trap() {
    
    let mcause = riscv::register::mcause::read();

    match mcause.cause() {
        riscv::register::mcause::Trap::Exception(e) => {
            let mhartid = riscv::register::mhartid::read();
            let mepc = riscv::register::mepc::read();
            let mtval = riscv::register::mtval::read();
            let mstatus = riscv::register::mstatus::read();

            let code = mcause.code();

            info!("EXCEPTION {:#?} code={}", e, code);
            info!("   MEPC: 0x{:08X}", mepc);
            info!("  MTVAL: 0x{:08X}", mtval);
            info!(" MCAUSE: 0x{:08X}", mcause.bits());
            info!("MHARTID: 0x{:08X}", mhartid);

            loop {}
        }

        riscv::register::mcause::Trap::Interrupt(source) => {

            match source {
                riscv::register::mcause::Interrupt::MachineExternal => {
                    // Handle external interrupts from the VexRiscv interrupt controller
                    let pending = VexRiscvInterrupt::pending() as u32;
                    //info!("Pending external interrupt: {:#b}", pending);

                    if pending & (1u32 << litex_pac::Interrupt::UART as u32) != 0 {
                        UART.access(|d| {
                            d.handle_interrupt();
                        });
                    }
                    if pending & (1u32 << litex_pac::Interrupt::TIMER0 as u32) != 0 {
                        TIMER0.access(|d| {
                            d.handle_interrupt();
                        });
                    }
                    if pending & (1u32 << litex_pac::Interrupt::TIMER1 as u32) != 0 {
                        TIMER1.access(|d| {
                            d.handle_interrupt();
                        });
                    }

                    if pending & (1u32 << litex_pac::Interrupt::DMATEST as u32) != 0 {
                        DMATEST.access(|dma| {
                            dma.interrupt_handler();
                        })
                    }

                    if pending & (1u32 << litex_pac::Interrupt::TMU as u32) != 0 {
                        TMU.access(|tmu| {
                            tmu.interrupt_handler();
                        })
                    }
                }

                _ => {
                    info!("Unhandled CPU interrupt source: {:#?}", source);
                }
            }
        }
    }
}