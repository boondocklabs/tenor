PACKAGES=libc libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata bios
PACKAGE_DIRS=/Users/fuzz/litex/litex/litex/soc/software/libc /Users/fuzz/litex/litex/litex/soc/software/libcompiler_rt /Users/fuzz/litex/litex/litex/soc/software/libbase /Users/fuzz/litex/litex/litex/soc/software/libfatfs /Users/fuzz/litex/litex/litex/soc/software/liblitespi /Users/fuzz/litex/litex/litex/soc/software/liblitedram /Users/fuzz/litex/litex/litex/soc/software/libliteeth /Users/fuzz/litex/litex/litex/soc/software/liblitesdcard /Users/fuzz/litex/litex/litex/soc/software/liblitesata /Users/fuzz/litex/litex/litex/soc/software/bios
LIBS=libc libcompiler_rt libbase libfatfs liblitespi liblitedram libliteeth liblitesdcard liblitesata
TRIPLE=riscv64-unknown-elf
CPU=vexriscv
CPUFAMILY=riscv
CPUFLAGS=-march=rv32i2p0_m     -mabi=ilp32 -D__vexriscv__
CPUENDIANNESS=little
CLANG=0
CPU_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/cores/cpu/vexriscv
SOC_DIRECTORY=/Users/fuzz/litex/litex/litex/soc
PICOLIBC_DIRECTORY=/Users/fuzz/litex/pythondata-software-picolibc/pythondata_software_picolibc/data
COMPILER_RT_DIRECTORY=/Users/fuzz/litex/pythondata-software-compiler_rt/pythondata_software_compiler_rt/data
export BUILDINC_DIRECTORY
BUILDINC_DIRECTORY=/Users/fuzz/riscv/fpga/build/sim/software/include
LIBC_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/libc
LIBCOMPILER_RT_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/libcompiler_rt
LIBBASE_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/libbase
LIBFATFS_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/libfatfs
LIBLITESPI_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/liblitespi
LIBLITEDRAM_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/liblitedram
LIBLITEETH_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/libliteeth
LIBLITESDCARD_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/liblitesdcard
LIBLITESATA_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/liblitesata
BIOS_DIRECTORY=/Users/fuzz/litex/litex/litex/soc/software/bios
LTO=0