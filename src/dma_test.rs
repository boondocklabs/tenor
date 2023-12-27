use litex_pac::DMATEST;

use core::{mem::transmute};
use log::{info};

pub struct DMATest {
    dma: DMATEST
}

impl DMATest {
    pub fn new(dma: DMATEST) -> Self {
        DMATest {
            dma: dma
        }
    }

    pub fn copy(&self, src: &[u8], dst: &[u8], len: usize) {
        //info!("Starting DMA copy src: {:p} dst: {:p} len: {}", src, dst, len);

        unsafe {
            let src: u64 = transmute(src);
            let src = src as u32;

            let dst: u64 = transmute(dst);
            let dst = dst as u32;

            //let x = core::ptr::read_volatile(src as *const u32);
            //info!("CPU read {:08X}", x);

            self.dma.control().write(|w| {
                w.enable().clear_bit()
            });

            self.dma.ev_enable().write(|w| { w.done().set_bit() });
 
            // Write the DMA source address to the src CSR
            self.dma.src().write(|w| {
                w.src().bits(src)
            });

            self.dma.dst().write(|w| {
                w.dst().bits(dst)
            });

            // Write the length to the CSR
            self.dma.length().write(|w| {
                w.length().bits(len as u32)
            });

            // Set the enable bit to start DMA
            self.dma.control().write(|w| {
                w.enable().set_bit()
            });
        }
    }

    pub fn wait(&self) {
        loop {
            if self.dma.status().read().done() == true {
                break;
            }
            //self.dump();
        }

        // This custom instruction flushes the cache on VexRiscv
        // and we need to do this for cache coherency
        unsafe { core::arch::asm!(".word 0x500F"); }
    }

    pub fn dump(&self) {
        info!("DMA status={:#08b} src={:08X} dst={:08X} offset={}",
            self.dma.status().read().bits(),
            self.dma.src().read().bits(),
            self.dma.dst().read().bits(),
            self.dma.offset().read().bits(),
        );
    }

    pub fn interrupt_handler(&self) {
        info!("DMA interrupt handler");

        let pending = self.dma.ev_pending().read().bits();
        self.dma.ev_pending().write(|w| {
            unsafe { w.bits(pending) }
        });
    }
}