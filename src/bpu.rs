use litex_pac::BPU;
use log::{info};

pub struct BufferProcessingUnit {
    bpu: BPU
}

impl BufferProcessingUnit {
    pub fn new(bpu: BPU) -> Self {
        BufferProcessingUnit {
            bpu: bpu
        }
    }

    pub fn copy(&self, src: usize, dst: usize, len: usize) {

        unsafe {
            self.bpu.src.write(|w| {
                w.src().bits(src as u32)
            });

            self.bpu.dst.write(|w| {
                w.dst().bits(dst as u32)
            });

            self.bpu.length.write(|w| {
                w.length().bits(len as u32)
            });

            self.bpu.control.write(|w| {
                w.enable().set_bit()
            });
        }
    }

    pub fn dump(&self) {
        let status = self.bpu.status.read().bits();
        let tick = self.bpu.tick.read().tick().bits();

        info!("BPU [{}] status={:#b} src={:08X} dst={:08X} offset={}",
            tick,
            status,
            self.bpu.src.read().bits(),
            self.bpu.dst.read().bits(),
            self.bpu.offset.read().bits(),
        );
    }
}