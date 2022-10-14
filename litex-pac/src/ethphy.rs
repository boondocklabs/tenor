#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    #[doc = "0x00 - "]
    pub crg_reset: CRG_RESET,
    #[doc = "0x04 - "]
    pub rx_inband_status: RX_INBAND_STATUS,
    #[doc = "0x08 - "]
    pub mdio_w: MDIO_W,
    #[doc = "0x0c - "]
    pub mdio_r: MDIO_R,
}
#[doc = "CRG_RESET (rw) register accessor: an alias for `Reg<CRG_RESET_SPEC>`"]
pub type CRG_RESET = crate::Reg<crg_reset::CRG_RESET_SPEC>;
#[doc = ""]
pub mod crg_reset;
#[doc = "RX_INBAND_STATUS (rw) register accessor: an alias for `Reg<RX_INBAND_STATUS_SPEC>`"]
pub type RX_INBAND_STATUS = crate::Reg<rx_inband_status::RX_INBAND_STATUS_SPEC>;
#[doc = ""]
pub mod rx_inband_status;
#[doc = "MDIO_W (rw) register accessor: an alias for `Reg<MDIO_W_SPEC>`"]
pub type MDIO_W = crate::Reg<mdio_w::MDIO_W_SPEC>;
#[doc = ""]
pub mod mdio_w;
#[doc = "MDIO_R (rw) register accessor: an alias for `Reg<MDIO_R_SPEC>`"]
pub type MDIO_R = crate::Reg<mdio_r::MDIO_R_SPEC>;
#[doc = ""]
pub mod mdio_r;
