#!/bin/bash
set -e

./fpga/sim_run.py --svd

cargo build

./image.sh

./fpga/sim_run.py \
	--integrated-sram-size 1048576 \
	--integrated-main-ram-size 134217728 \
	--cpu-type=vexriscv \
	--cpu-variant=imac \
	--ram-init kernel.bin
