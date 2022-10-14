.global  trap_entry
.global machine_trap
.global print_word
.align 4
.section .text.init

trap_entry:
  sw x1,  - 1*4(sp)
  sw x5,  - 2*4(sp)
  sw x6,  - 3*4(sp)
  sw x7,  - 4*4(sp)
  sw x10, - 5*4(sp)
  sw x11, - 6*4(sp)
  sw x12, - 7*4(sp)
  sw x13, - 8*4(sp)
  sw x14, - 9*4(sp)
  sw x15, -10*4(sp)
  sw x16, -11*4(sp)
  sw x17, -12*4(sp)
  sw x28, -13*4(sp)
  sw x29, -14*4(sp)
  sw x30, -15*4(sp)
  sw x31, -16*4(sp)
  addi sp,sp,-16*4

  // Pass the trap frame pointer to the Rust trap handler
  // so we can use it for context switching
  move a0, sp
  call machine_trap

  lw x1 , 15*4(sp)
  lw x5,  14*4(sp)
  lw x6,  13*4(sp)
  lw x7,  12*4(sp)
  lw x10, 11*4(sp)
  lw x11, 10*4(sp)
  lw x12,  9*4(sp)
  lw x13,  8*4(sp)
  lw x14,  7*4(sp)
  lw x15,  6*4(sp)
  lw x16,  5*4(sp)
  lw x17,  4*4(sp)
  lw x28,  3*4(sp)
  lw x29,  2*4(sp)
  lw x30,  1*4(sp)
  lw x31,  0*4(sp)
  addi sp,sp,16*4
  mret
  .text


.section .riscv.trap
// Print word in T1
print_word:
  li t6, 0
  li t5, 7
  li t4, 10 
loop:
  li t3, 0xf0000000
  // Mask nibble
  and t2, t1, t3

  // Shift the nibble right
  srli t2, t2, 28

  // If nibble < 10, add '0', else add 'A'
  bge t2, t4, alpha
  addi t2, t2, '0'
  j print
alpha:
  addi t2, t2, '7'
  
print:
  li a0, 0xF0003000
	sb t2, 0(a0)

  // Shift word left 4 bits
  slli t1, t1, 4

  addi t5, t5, -1

  bge t5, t6, loop

  li t0, 0xF0003000
	li t1, '\r'
	sb t1, 0(t0)
  li t0, 0xF0003000
	li t1, '\n'
	sb t1, 0(t0)
  
  ret