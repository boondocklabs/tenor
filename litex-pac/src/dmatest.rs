#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    #[doc = "0x00 - This register contains the current raw level of the done event trigger. Writes to this register have no effect."]
    pub ev_status: EV_STATUS,
    #[doc = "0x04 - When a done event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register."]
    pub ev_pending: EV_PENDING,
    #[doc = "0x08 - This register enables the corresponding done events. Write a ``0`` to this register to disable individual events."]
    pub ev_enable: EV_ENABLE,
    #[doc = "0x0c - DMA Status"]
    pub status: STATUS,
    #[doc = "0x10 - "]
    pub control: CONTROL,
    #[doc = "0x14 - "]
    pub src: SRC,
    #[doc = "0x18 - "]
    pub dst: DST,
    #[doc = "0x1c - "]
    pub length: LENGTH,
    #[doc = "0x20 - "]
    pub offset: OFFSET,
    #[doc = "0x24 - "]
    pub data: DATA,
}
#[doc = "EV_STATUS (rw) register accessor: an alias for `Reg<EV_STATUS_SPEC>`"]
pub type EV_STATUS = crate::Reg<ev_status::EV_STATUS_SPEC>;
#[doc = "This register contains the current raw level of the done event trigger. Writes to this register have no effect."]
pub mod ev_status;
#[doc = "EV_PENDING (rw) register accessor: an alias for `Reg<EV_PENDING_SPEC>`"]
pub type EV_PENDING = crate::Reg<ev_pending::EV_PENDING_SPEC>;
#[doc = "When a done event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register."]
pub mod ev_pending;
#[doc = "EV_ENABLE (rw) register accessor: an alias for `Reg<EV_ENABLE_SPEC>`"]
pub type EV_ENABLE = crate::Reg<ev_enable::EV_ENABLE_SPEC>;
#[doc = "This register enables the corresponding done events. Write a ``0`` to this register to disable individual events."]
pub mod ev_enable;
#[doc = "STATUS (rw) register accessor: an alias for `Reg<STATUS_SPEC>`"]
pub type STATUS = crate::Reg<status::STATUS_SPEC>;
#[doc = "DMA Status"]
pub mod status;
#[doc = "CONTROL (rw) register accessor: an alias for `Reg<CONTROL_SPEC>`"]
pub type CONTROL = crate::Reg<control::CONTROL_SPEC>;
#[doc = ""]
pub mod control;
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
