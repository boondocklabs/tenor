#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    #[doc = "0x00 - "]
    pub finish: FINISH,
}
#[doc = "FINISH (rw) register accessor: an alias for `Reg<FINISH_SPEC>`"]
pub type FINISH = crate::Reg<finish::FINISH_SPEC>;
#[doc = ""]
pub mod finish;
