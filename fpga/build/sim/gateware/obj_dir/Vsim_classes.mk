# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vsim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --threads/--trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vsim \
	Vsim___024root__DepSet_h6bff881a__0 \
	Vsim___024root__DepSet_hf028e4ce__0 \
	Vsim_sim__DepSet_h5396c21b__0 \
	Vsim_sim__DepSet_h28902acf__0 \
	Vsim_VexRiscv__DepSet_h4a6a140a__0 \
	Vsim_VexRiscv__DepSet_hd0e1d286__0 \
	Vsim_VexRiscv__DepSet_hd0e1d286__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vsim__ConstPool_0 \
	Vsim___024root__Slow \
	Vsim___024root__DepSet_h6bff881a__0__Slow \
	Vsim___024root__DepSet_hf028e4ce__0__Slow \
	Vsim_sim__Slow \
	Vsim_sim__DepSet_h5396c21b__0__Slow \
	Vsim_sim__DepSet_h28902acf__0__Slow \
	Vsim_VexRiscv__Slow \
	Vsim_VexRiscv__DepSet_h4a6a140a__0__Slow \
	Vsim_VexRiscv__DepSet_h4a6a140a__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vsim__Dpi \
	Vsim__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vsim__Syms \
	Vsim__Trace__0__Slow \
	Vsim__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
