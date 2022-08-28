// LiteX Timer

use litex_pac::TIMER0;
use litex_pac::TIMER1;

pub struct Timer<T: TimerPeripheral> {
    timer: T,
    callback: Option<fn()>
}

impl<T: TimerPeripheral> Timer<T> {
    pub fn new(timer: T, reload: usize) -> Self {
        timer.init_periodic(reload);

        Timer {
            timer: timer,
            callback: None
        }
    }

    pub fn handle_interrupt(&self) {
        match self.callback {
            Some(f) => {
                f();
            },
            None => {}
        }
        self.timer.clear_pending();
    }

    pub fn value(&self) -> u32 {
        return self.timer.value();
    }

    pub fn set_callback(&mut self, f: fn()) {
        self.callback = Some(f)
    }
}

// Trait to provide methods for manipulating CSRs of the Timer peripherals
pub trait TimerPeripheral {
    fn init_periodic(&self, reload: usize);
    fn value(&self) -> u32;
    fn clear_pending(&self);
}

// Macro to implement the TimerPeripheral trait for the Timer PAC peripheral
macro_rules! timer_impl {
    ($t:ident) => {
        impl TimerPeripheral for $t {
            fn init_periodic(&self, reload: usize) {
                unsafe {
                    self.en.write(|w| { w.en().clear_bit() });
                    self.reload.write(|w| { w.reload().bits(reload as u32) });
                    self.ev_enable.write(|w| { w.zero().set_bit() });
                    self.en.write(|w| { w.en().set_bit() });
                }
            }

            fn value(&self) -> u32 {
                self.update_value.write(|w| {
                    w.update_value().set_bit()
                });

                return self.value.read().bits()
            }

            fn clear_pending(&self) {
                self.ev_pending.write(|w| {
                    w.zero().set_bit()
                });
            }
        }
    }
}

// Implement the trait on the timer Peripherals
timer_impl!(TIMER0);
timer_impl!(TIMER1);
