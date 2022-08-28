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

            let level = match record.level() {
                Level::Error => {
                    record.level().fg(ansi_rgb::red())
                },
                Level::Warn => {
                    record.level().fg(ansi_rgb::yellow())
                }
                _ => {
                    record.level().fg(ansi_rgb::cyan_blue())
                }
            };

            crate::UART.access(|uart| {
                writeln!(uart, "[{}] - {}", level.fg(cyan_blue()), record.args().fg(cyan())).unwrap();
            });
        }
    }

    fn flush(&self) {}
}