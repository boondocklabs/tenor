#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    #[doc = "0x00 - "]
    pub crg_reset: CRG_RESET,
}
#[doc = "CRG_RESET (rw) register accessor: an alias for `Reg<CRG_RESET_SPEC>`"]
pub type CRG_RESET = crate::Reg<crg_reset::CRG_RESET_SPEC>;
#[doc = ""]
pub mod crg_reset;
