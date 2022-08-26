#!/bin/bash
set -e

./fpga/sim_run.py --svd

cargo build

./image.sh

./fpga/sim_run.py \
	--integrated-sram-size 1048576 \
	--integrated-main-ram-size 134217728 \
	--timer-uptime \
	--cpu-type=vexriscv \
	--cpu-variant=imac+debug \
	--ram-init kernel.bin
