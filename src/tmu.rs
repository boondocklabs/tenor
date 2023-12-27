use litex_pac::TMU;

use core::{mem::transmute};
use log::{info};

pub struct ThreadManagementUnit {
    // Peripheral Access
    tmu: TMU
}

impl ThreadManagementUnit {
    pub fn new(tmu: TMU) -> Self {


        ThreadManagementUnit {
            tmu: tmu
        }
    }

    pub fn enable(&self) {
        self.tmu.control().write(|w| {
            w.reset().clear_bit();
            w.enable().set_bit()
        });

        self.tmu.ev_enable().write(|w| w.switch().set_bit());

        self.dump();
    }

    pub fn disable(&self) {
        self.tmu.control().write(|w| w.enable().clear_bit());
    }

    pub fn dump(&self) {
        log::info!("---- TMU ----");
        log::info!("Status: {:#b}", self.tmu.status().read().bits());
        log::info!("Used Slots: {}", self.tmu.slot_status().read().used().bits());
    }

    pub fn add_thread(&self, tid: u32, tcb: u32)
    {
        log::info!("Adding thread to TMU tcb {:X?}", tcb);
        unsafe {
            self.tmu.cmd_thread_id().write(|wr| wr.bits(tid));
            self.tmu.cmd_context_pointer().write(|wr| wr.bits(tcb));
            self.tmu.command().write(|wr| wr.add().set_bit());
        }

        log::info!("Waiting for ACK");
        while self.tmu.status().read().ack() == false {
            
        }
       
        // Clear the command
        self.tmu.command().write(|wr| wr.add().clear_bit());

        // Wait for ACK to disassert (back to command FSM IDLE state)
        log::info!("Waiting for !ACK");
        while self.tmu.status().read().ack() == true {
            
        }

        log::info!("Thread added successfully");

        self.dump()
    }

    pub fn interrupt_handler(&self) {

        let pending = self.tmu.ev_pending().read().bits();
        let source = self.tmu.switch_source().read().bits();
        let dest = self.tmu.switch_dest().read().bits();

        unsafe {
            let t1 = &*(source as *const crate::thread::Thread);
            let t2 = &*(dest as *const crate::thread::Thread);

            info!("t1 {} t2 {}", t1.id.as_u64(), t2.id.as_u64());
        }

        info!("TMU IRQ Events: {:#b} Source: {:#010X} Dest: {:#010X}", pending, source, dest);

        unsafe {
            self.tmu.ev_pending().write(|wr| {
                wr.bits(pending)
            });
        }
    }
}