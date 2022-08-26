#!/bin/sh
set -e

riscv64-unknown-elf-objcopy -O binary target/riscv32imac-unknown-none-elf/debug/kernel kernel.bin
