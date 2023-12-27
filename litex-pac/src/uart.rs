#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    rxtx: RXTX,
    txfull: TXFULL,
    rxempty: RXEMPTY,
    ev_status: EV_STATUS,
    ev_pending: EV_PENDING,
    ev_enable: EV_ENABLE,
    txempty: TXEMPTY,
    rxfull: RXFULL,
}
impl RegisterBlock {
    #[doc = "0x00 - "]
    #[inline(always)]
    pub const fn rxtx(&self) -> &RXTX {
        &self.rxtx
    }
    #[doc = "0x04 - TX FIFO Full."]
    #[inline(always)]
    pub const fn txfull(&self) -> &TXFULL {
        &self.txfull
    }
    #[doc = "0x08 - RX FIFO Empty."]
    #[inline(always)]
    pub const fn rxempty(&self) -> &RXEMPTY {
        &self.rxempty
    }
    #[doc = "0x0c - This register contains the current raw level of the rx event trigger. Writes to this register have no effect."]
    #[inline(always)]
    pub const fn ev_status(&self) -> &EV_STATUS {
        &self.ev_status
    }
    #[doc = "0x10 - When a rx event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register."]
    #[inline(always)]
    pub const fn ev_pending(&self) -> &EV_PENDING {
        &self.ev_pending
    }
    #[doc = "0x14 - This register enables the corresponding rx events. Write a ``0`` to this register to disable individual events."]
    #[inline(always)]
    pub const fn ev_enable(&self) -> &EV_ENABLE {
        &self.ev_enable
    }
    #[doc = "0x18 - TX FIFO Empty."]
    #[inline(always)]
    pub const fn txempty(&self) -> &TXEMPTY {
        &self.txempty
    }
    #[doc = "0x1c - RX FIFO Full."]
    #[inline(always)]
    pub const fn rxfull(&self) -> &RXFULL {
        &self.rxfull
    }
}
#[doc = "RXTX (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`rxtx::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`rxtx::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@rxtx`]
module"]
pub type RXTX = crate::Reg<rxtx::RXTX_SPEC>;
#[doc = ""]
pub mod rxtx;
#[doc = "TXFULL (rw) register accessor: TX FIFO Full.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`txfull::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`txfull::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@txfull`]
module"]
pub type TXFULL = crate::Reg<txfull::TXFULL_SPEC>;
#[doc = "TX FIFO Full."]
pub mod txfull;
#[doc = "RXEMPTY (rw) register accessor: RX FIFO Empty.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`rxempty::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`rxempty::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@rxempty`]
module"]
pub type RXEMPTY = crate::Reg<rxempty::RXEMPTY_SPEC>;
#[doc = "RX FIFO Empty."]
pub mod rxempty;
#[doc = "EV_STATUS (rw) register accessor: This register contains the current raw level of the rx event trigger. Writes to this register have no effect.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_status::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_status::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_status`]
module"]
pub type EV_STATUS = crate::Reg<ev_status::EV_STATUS_SPEC>;
#[doc = "This register contains the current raw level of the rx event trigger. Writes to this register have no effect."]
pub mod ev_status;
#[doc = "EV_PENDING (rw) register accessor: When a rx event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_pending::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_pending::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_pending`]
module"]
pub type EV_PENDING = crate::Reg<ev_pending::EV_PENDING_SPEC>;
#[doc = "When a rx event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register."]
pub mod ev_pending;
#[doc = "EV_ENABLE (rw) register accessor: This register enables the corresponding rx events. Write a ``0`` to this register to disable individual events.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_enable::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_enable::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_enable`]
module"]
pub type EV_ENABLE = crate::Reg<ev_enable::EV_ENABLE_SPEC>;
#[doc = "This register enables the corresponding rx events. Write a ``0`` to this register to disable individual events."]
pub mod ev_enable;
#[doc = "TXEMPTY (rw) register accessor: TX FIFO Empty.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`txempty::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`txempty::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@txempty`]
module"]
pub type TXEMPTY = crate::Reg<txempty::TXEMPTY_SPEC>;
#[doc = "TX FIFO Empty."]
pub mod txempty;
#[doc = "RXFULL (rw) register accessor: RX FIFO Full.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`rxfull::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`rxfull::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@rxfull`]
module"]
pub type RXFULL = crate::Reg<rxfull::RXFULL_SPEC>;
#[doc = "RX FIFO Full."]
pub mod rxfull;
