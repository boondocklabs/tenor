#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    #[doc = "0x00 - "]
    pub mux_value: MUX_VALUE,
    #[doc = "0x04 - "]
    pub trigger_enable: TRIGGER_ENABLE,
    #[doc = "0x08 - "]
    pub trigger_done: TRIGGER_DONE,
    #[doc = "0x0c - "]
    pub trigger_mem_write: TRIGGER_MEM_WRITE,
    #[doc = "0x10 - Bits 192-203 of `ANALYZER_TRIGGER_MEM_MASK`."]
    pub trigger_mem_mask6: TRIGGER_MEM_MASK6,
    #[doc = "0x14 - Bits 160-191 of `ANALYZER_TRIGGER_MEM_MASK`."]
    pub trigger_mem_mask5: TRIGGER_MEM_MASK5,
    #[doc = "0x18 - Bits 128-159 of `ANALYZER_TRIGGER_MEM_MASK`."]
    pub trigger_mem_mask4: TRIGGER_MEM_MASK4,
    #[doc = "0x1c - Bits 96-127 of `ANALYZER_TRIGGER_MEM_MASK`."]
    pub trigger_mem_mask3: TRIGGER_MEM_MASK3,
    #[doc = "0x20 - Bits 64-95 of `ANALYZER_TRIGGER_MEM_MASK`."]
    pub trigger_mem_mask2: TRIGGER_MEM_MASK2,
    #[doc = "0x24 - Bits 32-63 of `ANALYZER_TRIGGER_MEM_MASK`."]
    pub trigger_mem_mask1: TRIGGER_MEM_MASK1,
    #[doc = "0x28 - Bits 0-31 of `ANALYZER_TRIGGER_MEM_MASK`."]
    pub trigger_mem_mask0: TRIGGER_MEM_MASK0,
    #[doc = "0x2c - Bits 192-203 of `ANALYZER_TRIGGER_MEM_VALUE`."]
    pub trigger_mem_value6: TRIGGER_MEM_VALUE6,
    #[doc = "0x30 - Bits 160-191 of `ANALYZER_TRIGGER_MEM_VALUE`."]
    pub trigger_mem_value5: TRIGGER_MEM_VALUE5,
    #[doc = "0x34 - Bits 128-159 of `ANALYZER_TRIGGER_MEM_VALUE`."]
    pub trigger_mem_value4: TRIGGER_MEM_VALUE4,
    #[doc = "0x38 - Bits 96-127 of `ANALYZER_TRIGGER_MEM_VALUE`."]
    pub trigger_mem_value3: TRIGGER_MEM_VALUE3,
    #[doc = "0x3c - Bits 64-95 of `ANALYZER_TRIGGER_MEM_VALUE`."]
    pub trigger_mem_value2: TRIGGER_MEM_VALUE2,
    #[doc = "0x40 - Bits 32-63 of `ANALYZER_TRIGGER_MEM_VALUE`."]
    pub trigger_mem_value1: TRIGGER_MEM_VALUE1,
    #[doc = "0x44 - Bits 0-31 of `ANALYZER_TRIGGER_MEM_VALUE`."]
    pub trigger_mem_value0: TRIGGER_MEM_VALUE0,
    #[doc = "0x48 - "]
    pub trigger_mem_full: TRIGGER_MEM_FULL,
    #[doc = "0x4c - "]
    pub subsampler_value: SUBSAMPLER_VALUE,
    #[doc = "0x50 - "]
    pub storage_enable: STORAGE_ENABLE,
    #[doc = "0x54 - "]
    pub storage_done: STORAGE_DONE,
    #[doc = "0x58 - "]
    pub storage_length: STORAGE_LENGTH,
    #[doc = "0x5c - "]
    pub storage_offset: STORAGE_OFFSET,
    #[doc = "0x60 - "]
    pub storage_mem_level: STORAGE_MEM_LEVEL,
    #[doc = "0x64 - "]
    pub storage_mem_data: STORAGE_MEM_DATA,
}
#[doc = "MUX_VALUE (rw) register accessor: an alias for `Reg<MUX_VALUE_SPEC>`"]
pub type MUX_VALUE = crate::Reg<mux_value::MUX_VALUE_SPEC>;
#[doc = ""]
pub mod mux_value;
#[doc = "TRIGGER_ENABLE (rw) register accessor: an alias for `Reg<TRIGGER_ENABLE_SPEC>`"]
pub type TRIGGER_ENABLE = crate::Reg<trigger_enable::TRIGGER_ENABLE_SPEC>;
#[doc = ""]
pub mod trigger_enable;
#[doc = "TRIGGER_DONE (rw) register accessor: an alias for `Reg<TRIGGER_DONE_SPEC>`"]
pub type TRIGGER_DONE = crate::Reg<trigger_done::TRIGGER_DONE_SPEC>;
#[doc = ""]
pub mod trigger_done;
#[doc = "TRIGGER_MEM_WRITE (rw) register accessor: an alias for `Reg<TRIGGER_MEM_WRITE_SPEC>`"]
pub type TRIGGER_MEM_WRITE = crate::Reg<trigger_mem_write::TRIGGER_MEM_WRITE_SPEC>;
#[doc = ""]
pub mod trigger_mem_write;
#[doc = "TRIGGER_MEM_MASK6 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_MASK6_SPEC>`"]
pub type TRIGGER_MEM_MASK6 = crate::Reg<trigger_mem_mask6::TRIGGER_MEM_MASK6_SPEC>;
#[doc = "Bits 192-203 of `ANALYZER_TRIGGER_MEM_MASK`."]
pub mod trigger_mem_mask6;
#[doc = "TRIGGER_MEM_MASK5 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_MASK5_SPEC>`"]
pub type TRIGGER_MEM_MASK5 = crate::Reg<trigger_mem_mask5::TRIGGER_MEM_MASK5_SPEC>;
#[doc = "Bits 160-191 of `ANALYZER_TRIGGER_MEM_MASK`."]
pub mod trigger_mem_mask5;
#[doc = "TRIGGER_MEM_MASK4 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_MASK4_SPEC>`"]
pub type TRIGGER_MEM_MASK4 = crate::Reg<trigger_mem_mask4::TRIGGER_MEM_MASK4_SPEC>;
#[doc = "Bits 128-159 of `ANALYZER_TRIGGER_MEM_MASK`."]
pub mod trigger_mem_mask4;
#[doc = "TRIGGER_MEM_MASK3 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_MASK3_SPEC>`"]
pub type TRIGGER_MEM_MASK3 = crate::Reg<trigger_mem_mask3::TRIGGER_MEM_MASK3_SPEC>;
#[doc = "Bits 96-127 of `ANALYZER_TRIGGER_MEM_MASK`."]
pub mod trigger_mem_mask3;
#[doc = "TRIGGER_MEM_MASK2 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_MASK2_SPEC>`"]
pub type TRIGGER_MEM_MASK2 = crate::Reg<trigger_mem_mask2::TRIGGER_MEM_MASK2_SPEC>;
#[doc = "Bits 64-95 of `ANALYZER_TRIGGER_MEM_MASK`."]
pub mod trigger_mem_mask2;
#[doc = "TRIGGER_MEM_MASK1 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_MASK1_SPEC>`"]
pub type TRIGGER_MEM_MASK1 = crate::Reg<trigger_mem_mask1::TRIGGER_MEM_MASK1_SPEC>;
#[doc = "Bits 32-63 of `ANALYZER_TRIGGER_MEM_MASK`."]
pub mod trigger_mem_mask1;
#[doc = "TRIGGER_MEM_MASK0 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_MASK0_SPEC>`"]
pub type TRIGGER_MEM_MASK0 = crate::Reg<trigger_mem_mask0::TRIGGER_MEM_MASK0_SPEC>;
#[doc = "Bits 0-31 of `ANALYZER_TRIGGER_MEM_MASK`."]
pub mod trigger_mem_mask0;
#[doc = "TRIGGER_MEM_VALUE6 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_VALUE6_SPEC>`"]
pub type TRIGGER_MEM_VALUE6 = crate::Reg<trigger_mem_value6::TRIGGER_MEM_VALUE6_SPEC>;
#[doc = "Bits 192-203 of `ANALYZER_TRIGGER_MEM_VALUE`."]
pub mod trigger_mem_value6;
#[doc = "TRIGGER_MEM_VALUE5 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_VALUE5_SPEC>`"]
pub type TRIGGER_MEM_VALUE5 = crate::Reg<trigger_mem_value5::TRIGGER_MEM_VALUE5_SPEC>;
#[doc = "Bits 160-191 of `ANALYZER_TRIGGER_MEM_VALUE`."]
pub mod trigger_mem_value5;
#[doc = "TRIGGER_MEM_VALUE4 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_VALUE4_SPEC>`"]
pub type TRIGGER_MEM_VALUE4 = crate::Reg<trigger_mem_value4::TRIGGER_MEM_VALUE4_SPEC>;
#[doc = "Bits 128-159 of `ANALYZER_TRIGGER_MEM_VALUE`."]
pub mod trigger_mem_value4;
#[doc = "TRIGGER_MEM_VALUE3 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_VALUE3_SPEC>`"]
pub type TRIGGER_MEM_VALUE3 = crate::Reg<trigger_mem_value3::TRIGGER_MEM_VALUE3_SPEC>;
#[doc = "Bits 96-127 of `ANALYZER_TRIGGER_MEM_VALUE`."]
pub mod trigger_mem_value3;
#[doc = "TRIGGER_MEM_VALUE2 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_VALUE2_SPEC>`"]
pub type TRIGGER_MEM_VALUE2 = crate::Reg<trigger_mem_value2::TRIGGER_MEM_VALUE2_SPEC>;
#[doc = "Bits 64-95 of `ANALYZER_TRIGGER_MEM_VALUE`."]
pub mod trigger_mem_value2;
#[doc = "TRIGGER_MEM_VALUE1 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_VALUE1_SPEC>`"]
pub type TRIGGER_MEM_VALUE1 = crate::Reg<trigger_mem_value1::TRIGGER_MEM_VALUE1_SPEC>;
#[doc = "Bits 32-63 of `ANALYZER_TRIGGER_MEM_VALUE`."]
pub mod trigger_mem_value1;
#[doc = "TRIGGER_MEM_VALUE0 (rw) register accessor: an alias for `Reg<TRIGGER_MEM_VALUE0_SPEC>`"]
pub type TRIGGER_MEM_VALUE0 = crate::Reg<trigger_mem_value0::TRIGGER_MEM_VALUE0_SPEC>;
#[doc = "Bits 0-31 of `ANALYZER_TRIGGER_MEM_VALUE`."]
pub mod trigger_mem_value0;
#[doc = "TRIGGER_MEM_FULL (rw) register accessor: an alias for `Reg<TRIGGER_MEM_FULL_SPEC>`"]
pub type TRIGGER_MEM_FULL = crate::Reg<trigger_mem_full::TRIGGER_MEM_FULL_SPEC>;
#[doc = ""]
pub mod trigger_mem_full;
#[doc = "SUBSAMPLER_VALUE (rw) register accessor: an alias for `Reg<SUBSAMPLER_VALUE_SPEC>`"]
pub type SUBSAMPLER_VALUE = crate::Reg<subsampler_value::SUBSAMPLER_VALUE_SPEC>;
#[doc = ""]
pub mod subsampler_value;
#[doc = "STORAGE_ENABLE (rw) register accessor: an alias for `Reg<STORAGE_ENABLE_SPEC>`"]
pub type STORAGE_ENABLE = crate::Reg<storage_enable::STORAGE_ENABLE_SPEC>;
#[doc = ""]
pub mod storage_enable;
#[doc = "STORAGE_DONE (rw) register accessor: an alias for `Reg<STORAGE_DONE_SPEC>`"]
pub type STORAGE_DONE = crate::Reg<storage_done::STORAGE_DONE_SPEC>;
#[doc = ""]
pub mod storage_done;
#[doc = "STORAGE_LENGTH (rw) register accessor: an alias for `Reg<STORAGE_LENGTH_SPEC>`"]
pub type STORAGE_LENGTH = crate::Reg<storage_length::STORAGE_LENGTH_SPEC>;
#[doc = ""]
pub mod storage_length;
#[doc = "STORAGE_OFFSET (rw) register accessor: an alias for `Reg<STORAGE_OFFSET_SPEC>`"]
pub type STORAGE_OFFSET = crate::Reg<storage_offset::STORAGE_OFFSET_SPEC>;
#[doc = ""]
pub mod storage_offset;
#[doc = "STORAGE_MEM_LEVEL (rw) register accessor: an alias for `Reg<STORAGE_MEM_LEVEL_SPEC>`"]
pub type STORAGE_MEM_LEVEL = crate::Reg<storage_mem_level::STORAGE_MEM_LEVEL_SPEC>;
#[doc = ""]
pub mod storage_mem_level;
#[doc = "STORAGE_MEM_DATA (rw) register accessor: an alias for `Reg<STORAGE_MEM_DATA_SPEC>`"]
pub type STORAGE_MEM_DATA = crate::Reg<storage_mem_data::STORAGE_MEM_DATA_SPEC>;
#[doc = ""]
pub mod storage_mem_data;
