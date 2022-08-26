#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    #[doc = "0x00 - BPU Status"]
    pub status: STATUS,
    #[doc = "0x04 - "]
    pub control: CONTROL,
    #[doc = "0x08 - "]
    pub instruction: INSTRUCTION,
    #[doc = "0x0c - "]
    pub src: SRC,
    #[doc = "0x10 - "]
    pub dst: DST,
    #[doc = "0x14 - "]
    pub length: LENGTH,
    #[doc = "0x18 - "]
    pub offset: OFFSET,
    #[doc = "0x1c - "]
    pub data: DATA,
    #[doc = "0x20 - "]
    pub tick: TICK,
}
#[doc = "STATUS (rw) register accessor: an alias for `Reg<STATUS_SPEC>`"]
pub type STATUS = crate::Reg<status::STATUS_SPEC>;
#[doc = "BPU Status"]
pub mod status;
#[doc = "CONTROL (rw) register accessor: an alias for `Reg<CONTROL_SPEC>`"]
pub type CONTROL = crate::Reg<control::CONTROL_SPEC>;
#[doc = ""]
pub mod control;
#[doc = "INSTRUCTION (rw) register accessor: an alias for `Reg<INSTRUCTION_SPEC>`"]
pub type INSTRUCTION = crate::Reg<instruction::INSTRUCTION_SPEC>;
#[doc = ""]
pub mod instruction;
#[doc = "SRC (rw) register accessor: an alias for `Reg<SRC_SPEC>`"]
pub type SRC = crate::Reg<src::SRC_SPEC>;
#[doc = ""]
pub mod src;
#[doc = "DST (rw) register accessor: an alias for `Reg<DST_SPEC>`"]
pub type DST = crate::Reg<dst::DST_SPEC>;
#[doc = ""]
pub mod dst;
#[doc = "LENGTH (rw) register accessor: an alias for `Reg<LENGTH_SPEC>`"]
pub type LENGTH = crate::Reg<length::LENGTH_SPEC>;
#[doc = ""]
pub mod length;
#[doc = "OFFSET (rw) register accessor: an alias for `Reg<OFFSET_SPEC>`"]
pub type OFFSET = crate::Reg<offset::OFFSET_SPEC>;
#[doc = ""]
pub mod offset;
#[doc = "DATA (rw) register accessor: an alias for `Reg<DATA_SPEC>`"]
pub type DATA = crate::Reg<data::DATA_SPEC>;
#[doc = ""]
pub mod data;
#[doc = "TICK (rw) register accessor: an alias for `Reg<TICK_SPEC>`"]
pub type TICK = crate::Reg<tick::TICK_SPEC>;
#[doc = ""]
pub mod tick;
