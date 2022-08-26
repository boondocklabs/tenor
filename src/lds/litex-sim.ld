
OUTPUT_ARCH( "riscv" )

ENTRY( _start )

MEMORY
{
  rom (rx)  : ORIGIN = 0x00000000, LENGTH = 0x80000
  sram (rw) : ORIGIN = 0x10000000, LENGTH = 0x100000
  ram (rwx) : ORIGIN = 0x40000000, LENGTH = 0x8000000
}

MPU_MIN_ALIGN = 1K;

SECTIONS
{

  # Use entire SRAM for kernel stack
  /*
  .stack (NOLOAD) : {
    . = ALIGN(4);
    _stack_start = .;
    . = . + LENGTH(sram);
    _stack_end = .;
  } >sram
  */

  .text : {
    . = ALIGN(4);
    _text_start = .;
    *(.text.init)

    . = ALIGN(256);
    KEEP(*(.riscv.trap));
    KEEP(*(.riscv.trap.rust));

    *(.text .text.* .gnu.linkonce.t.*)

    . = ALIGN(4);
    _rodata_start = .;
    *(.rodata .rodata.* .gnu.linkonce.r.*)
    _rodata_end = .;

    . = ALIGN(4);
    _text_end = .;
  } >ram

  .relocate :
  {
      . = ALIGN(4);
      _srelocate = .;

      /* The Global Pointer is used by the RISC-V architecture to provide
       * "gp-relative" addressing. The global pointer is set to the gp
       * register once on boot, and the linker can then take advantage of this
       * when emitting instructions by using offsets relative to this known
       * value. Since RISC-V has only 12 bit immediates, this can help reduce
       * code size.
       *
       * The standard is to set the global pointer to 0x800 past the beginning
       * of the data section in RAM. This allows instructions to use 12 bit
       * immediates to access the first 4KB of data memory. In theory the GP
       * can be set to any value, but it should be placed near actual data for
       * the compiler to actually be able to use it.
       *
       * Per convention, the variable _must_ be called __global_pointer$ for
       * the linker to actually take advantage of it.
       */
      PROVIDE(__global_pointer$ = . + 0x800);

      *(.ramfunc .ramfunc.*);
      *(.sdata .sdata.* .gnu.linkonce.r.*)
      *(.data .data.*);

      . = ALIGN(4);
      _erelocate = .;
  } > ram AT> ram

  .bss (NOLOAD) :
  {
    _bss_start = .;
    *(.sbss .sbss.* .bss .bss.*);
    *(COMMON);
    . = ALIGN(4);
    _bss_end = .;
  } >ram

  .stack (NOLOAD) : {
    . = ALIGN(4);
    _stack_start = .;
    . = . + 0x100000;

    // Put the .debug_line data at the end of the stack?
    //*(.debug*)
    _stack_end = .;
  } >ram

  /* Discard RISC-V relevant .eh_frame, we are not doing unwind on panic
     so it is not needed. */
  /DISCARD/ :
  {
    *(.eh_frame);
  }

  PROVIDE(_memory_start = ORIGIN(ram));

  PROVIDE(_memory_end = ORIGIN(ram) + LENGTH(ram));

  PROVIDE(_heap_start = _stack_end);
  PROVIDE(_heap_end = _memory_end);
  PROVIDE(_heap_size = _memory_end - _heap_start);
}
