rm -rf obj_dir/
make -C . -f /Users/fuzz/litex/litex/litex/build/sim/core/Makefile CC_SRCS="--cc /Users/fuzz/litex/pythondata-cpu-vexriscv/pythondata_cpu_vexriscv/verilog/VexRiscv.v --cc /Users/fuzz/riscv/fpga/build/sim/gateware/sim.v "    OPT_LEVEL=O3 
