#!/bin/bash
set -e

cargo build
./image.sh

litex_term --kernel kernel.bin /dev/tty.usbserial-100

