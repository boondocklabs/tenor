#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    #[doc = "0x00 - "]
    pub marker: MARKER,
}
#[doc = "MARKER (rw) register accessor: an alias for `Reg<MARKER_SPEC>`"]
pub type MARKER = crate::Reg<marker::MARKER_SPEC>;
#[doc = ""]
pub mod marker;
