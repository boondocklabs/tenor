
OUTPUT_ARCH( "riscv" )

ENTRY( _start )

MEMORY
{
  rom (rx)  : ORIGIN = 0x00000000, LENGTH = 0x80000
  sram (rw) : ORIGIN = 0x10000000, LENGTH = 0x2000
  ram (rwx) : ORIGIN = 0x40000000, LENGTH = 0x10000000
}

MPU_MIN_ALIGN = 1K;

SECTIONS
{

  # Use entire SRAM for kernel stack
  .stack (NOLOAD) : {
    . = ALIGN(4);
    _stack_start = .;
    . = . + LENGTH(sram);
    _stack_end = .;
  } >sram

  .text : {
    . = ALIGN(4);
    _text_start = .;
    *(.text.init) *(.text .text.*)

    . = ALIGN(256);
    KEEP(*(.riscv.trap));
    KEEP(*(.riscv.trap.rust));

    _rodata_start = .;
    *(.rodata .rodata.*)
    _rodata_end = .;
  
    . = ALIGN(4);
    _text_end = .;
  } >ram

 /* 
  . = ALIGN(4);
  _global_pointer = .;
  */

  .data : {
    . = ALIGN(4);
    _data_start = .;
    *(.sdata .sdata.*) *(.data .data.*)
	  . = ALIGN(4);
    _data_end = .;
  } >ram

  .bss (NOLOAD) :
  {
    _bss_start = .;
    *(.sbss .sbss.* .bss .bss.*);
    . = ALIGN(4);
    _bss_end = .;
  } >ram

  PROVIDE(_memory_start = ORIGIN(ram));

  /*
  PROVIDE(_stack_start = _bss_end);
  PROVIDE(_stack_end = _stack_start + 0x80000);
  */

  PROVIDE(_memory_end = ORIGIN(ram) + LENGTH(ram));

  PROVIDE(_heap_start = _bss_end);
  PROVIDE(_heap_size = _memory_end - _heap_start);
}
