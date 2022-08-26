
use litex_pac::UART;
use core::fmt::{Write};

pub struct Uart {
    uart: UART
}

impl Uart {
    pub fn new(uart: UART) -> Self {
        Uart { uart: uart }
    }

    pub fn write_byte(&mut self, byte: u8) {
        if self.uart.txfull.read().bits() == 0 {
            self.uart.rxtx.write(|w| {
                unsafe {w.bits(byte as u32)}
            });
        }
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
        if self.uart.ev_status.read().rx().bit_is_set() == true {

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
        }

        if self.uart.ev_status.read().tx().bit_is_set() == true {
            // Handle TX events..
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