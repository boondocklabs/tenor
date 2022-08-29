.global main
.global _start
.align 4

.section .text.init

_start:
	j runtime_init

.global runtime_init
.section .text.init
.align 4
runtime_init:

	// Write to UART (address depends on SoC config)
	//li t0, 0xF0003800
	//li t1, 0x41
	//sb t1, 0(t0)

stack_init:
	la gp, __global_pointer$

	la sp, _stack_end
  
	la a0, trap_entry
	csrw mtvec, a0
	//csrw mscratch, 0

bss_init:
	la a0, _bss_start
	la a1, _bss_end
bss_loop:
	beq a0,a1,bss_done
	sw zero,0(a0)
	add a0,a0,4
	j bss_loop

.align 4
bss_done:

	//li a0, 0x880  //880 enable timer + external interrupt sources (until mstatus.MIE is set, they will never trigger an interrupt)
	li a0, 0x0
	csrw mie,a0

	call main

halt_loop:
	wfi
	j halt_loop