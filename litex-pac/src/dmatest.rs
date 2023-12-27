#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    ev_status: EV_STATUS,
    ev_pending: EV_PENDING,
    ev_enable: EV_ENABLE,
    status: STATUS,
    control: CONTROL,
    src: SRC,
    dst: DST,
    length: LENGTH,
    offset: OFFSET,
    data: DATA,
}
impl RegisterBlock {
    #[doc = "0x00 - This register contains the current raw level of the done event trigger. Writes to this register have no effect."]
    #[inline(always)]
    pub const fn ev_status(&self) -> &EV_STATUS {
        &self.ev_status
    }
    #[doc = "0x04 - When a done event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register."]
    #[inline(always)]
    pub const fn ev_pending(&self) -> &EV_PENDING {
        &self.ev_pending
    }
    #[doc = "0x08 - This register enables the corresponding done events. Write a ``0`` to this register to disable individual events."]
    #[inline(always)]
    pub const fn ev_enable(&self) -> &EV_ENABLE {
        &self.ev_enable
    }
    #[doc = "0x0c - DMA Status"]
    #[inline(always)]
    pub const fn status(&self) -> &STATUS {
        &self.status
    }
    #[doc = "0x10 - "]
    #[inline(always)]
    pub const fn control(&self) -> &CONTROL {
        &self.control
    }
    #[doc = "0x14 - "]
    #[inline(always)]
    pub const fn src(&self) -> &SRC {
        &self.src
    }
    #[doc = "0x18 - "]
    #[inline(always)]
    pub const fn dst(&self) -> &DST {
        &self.dst
    }
    #[doc = "0x1c - "]
    #[inline(always)]
    pub const fn length(&self) -> &LENGTH {
        &self.length
    }
    #[doc = "0x20 - "]
    #[inline(always)]
    pub const fn offset(&self) -> &OFFSET {
        &self.offset
    }
    #[doc = "0x24 - "]
    #[inline(always)]
    pub const fn data(&self) -> &DATA {
        &self.data
    }
}
#[doc = "EV_STATUS (rw) register accessor: This register contains the current raw level of the done event trigger. Writes to this register have no effect.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_status::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_status::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_status`]
module"]
pub type EV_STATUS = crate::Reg<ev_status::EV_STATUS_SPEC>;
#[doc = "This register contains the current raw level of the done event trigger. Writes to this register have no effect."]
pub mod ev_status;
#[doc = "EV_PENDING (rw) register accessor: When a done event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_pending::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_pending::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_pending`]
module"]
pub type EV_PENDING = crate::Reg<ev_pending::EV_PENDING_SPEC>;
#[doc = "When a done event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register."]
pub mod ev_pending;
#[doc = "EV_ENABLE (rw) register accessor: This register enables the corresponding done events. Write a ``0`` to this register to disable individual events.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_enable::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_enable::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_enable`]
module"]
pub type EV_ENABLE = crate::Reg<ev_enable::EV_ENABLE_SPEC>;
#[doc = "This register enables the corresponding done events. Write a ``0`` to this register to disable individual events."]
pub mod ev_enable;
#[doc = "STATUS (rw) register accessor: DMA Status\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`status::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`status::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@status`]
module"]
pub type STATUS = crate::Reg<status::STATUS_SPEC>;
#[doc = "DMA Status"]
pub mod status;
#[doc = "CONTROL (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`control::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`control::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@control`]
module"]
pub type CONTROL = crate::Reg<control::CONTROL_SPEC>;
#[doc = ""]
pub mod control;
#[doc = "SRC (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`src::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`src::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@src`]
module"]
pub type SRC = crate::Reg<src::SRC_SPEC>;
#[doc = ""]
pub mod src;
#[doc = "DST (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`dst::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`dst::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@dst`]
module"]
pub type DST = crate::Reg<dst::DST_SPEC>;
#[doc = ""]
pub mod dst;
#[doc = "LENGTH (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`length::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`length::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@length`]
module"]
pub type LENGTH = crate::Reg<length::LENGTH_SPEC>;
#[doc = ""]
pub mod length;
#[doc = "OFFSET (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`offset::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`offset::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@offset`]
module"]
pub type OFFSET = crate::Reg<offset::OFFSET_SPEC>;
#[doc = ""]
pub mod offset;
#[doc = "DATA (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`data::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`data::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@data`]
module"]
pub type DATA = crate::Reg<data::DATA_SPEC>;
#[doc = ""]
pub mod data;
