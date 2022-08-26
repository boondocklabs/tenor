use log::{Record, Level, Metadata};
use core::fmt::Write;

use ansi_rgb::{ Foreground };
use ansi_rgb::{ cyan, cyan_blue };

pub struct UartLogger;
use crate::driver::DriverAccess;

impl log::Log for UartLogger {
    fn enabled(&self, metadata: &Metadata) -> bool {
        metadata.level() <= Level::Info
    }

    fn log(&self, record: &Record) {
        if self.enabled(record.metadata()) {
            crate::UART.access(|uart| {
                writeln!(uart, "[{}] - {}", record.level().fg(cyan_blue()), record.args().fg(cyan())).unwrap();
            });
        }
    }

    fn flush(&self) {}
}