#!/bin/sh

cargo b
./image.sh
litex_term --kernel kernel.bin --serial-boot $1
