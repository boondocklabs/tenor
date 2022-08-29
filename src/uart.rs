
use litex_pac::UART;
use core::fmt::{Write};

pub struct Uart {
    uart: UART
}

impl Uart {
    pub fn new(mut uart: UART) -> Self {

        /*
        Set the baud rate. First check if the BIOS leaves the UART configured at 115200
        uart.tuning_word.write(|w| {
            w.tuning_word().bits(0);
        })
        */

        uart.ev_enable.write(|w| {
            w.tx().clear_bit();
            w.rx().set_bit()
        });

        Uart { uart: uart }
    }

    pub fn write_byte(&mut self, byte: u8) {
        while self.uart.txfull.read().txfull() == true {
            unsafe { riscv::asm::wfi() };
        }
 
        self.uart.rxtx.write(|w| {
            unsafe {w.bits(byte as u32)}
        });
    }

    pub fn read_byte(&self) -> Result<u8, u8> {
        if self.uart.rxempty.read().rxempty() == false {
            let byte = self.uart.rxtx.read().rxtx().bits();
            
            self.uart.ev_pending.write(|w| {
                w.rx().set_bit()
            });

            Ok(byte)

        } else {
            Err(0)
        }
    }

    pub fn handle_interrupt(&mut self) {
        //write!(self, "UART pending {:#b}", self.uart.ev_pending.read().bits()).unwrap();

        if self.uart.ev_pending.read().rx().bit_is_set() == true {

            while self.uart.rxempty.read().rxempty() == false {
                match self.read_byte() {
                    Ok(rx) => {
                        self.write_byte(rx);
                    }
                    Err(_) => {
                        return;
                    }
                }
            }

            self.uart.ev_pending.write(|w| {
                w.rx().set_bit()
            });
        }

        if self.uart.ev_pending.read().tx().bit_is_set() == true {
            // Handle TX events..
            self.uart.ev_pending.write(|w| {
                w.tx().set_bit()
            });
        }
    }
}

impl Write for Uart {
	fn write_str(&mut self, out: &str) -> Result<(), core::fmt::Error> {
		for c in out.bytes() {
			self.write_byte(c);
		}
		Ok(())
	}
}

unsafe impl Sync for Uart {

}