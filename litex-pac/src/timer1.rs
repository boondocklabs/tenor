#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    load: LOAD,
    reload: RELOAD,
    en: EN,
    update_value: UPDATE_VALUE,
    value: VALUE,
    ev_status: EV_STATUS,
    ev_pending: EV_PENDING,
    ev_enable: EV_ENABLE,
}
impl RegisterBlock {
    #[doc = "0x00 - Load value when Timer is (re-)enabled. In One-Shot mode, the value written to this register specifies the Timer's duration in clock cycles."]
    #[inline(always)]
    pub const fn load(&self) -> &LOAD {
        &self.load
    }
    #[doc = "0x04 - Reload value when Timer reaches ``0``. In Periodic mode, the value written to this register specify the Timer's period in clock cycles."]
    #[inline(always)]
    pub const fn reload(&self) -> &RELOAD {
        &self.reload
    }
    #[doc = "0x08 - Enable flag of the Timer. Set this flag to ``1`` to enable/start the Timer. Set to ``0`` to disable the Timer."]
    #[inline(always)]
    pub const fn en(&self) -> &EN {
        &self.en
    }
    #[doc = "0x0c - Update trigger for the current countdown value. A write to this register latches the current countdown value to ``value`` register."]
    #[inline(always)]
    pub const fn update_value(&self) -> &UPDATE_VALUE {
        &self.update_value
    }
    #[doc = "0x10 - Latched countdown value. This value is updated by writing to ``update_value``."]
    #[inline(always)]
    pub const fn value(&self) -> &VALUE {
        &self.value
    }
    #[doc = "0x14 - This register contains the current raw level of the zero event trigger. Writes to this register have no effect."]
    #[inline(always)]
    pub const fn ev_status(&self) -> &EV_STATUS {
        &self.ev_status
    }
    #[doc = "0x18 - When a zero event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register."]
    #[inline(always)]
    pub const fn ev_pending(&self) -> &EV_PENDING {
        &self.ev_pending
    }
    #[doc = "0x1c - This register enables the corresponding zero events. Write a ``0`` to this register to disable individual events."]
    #[inline(always)]
    pub const fn ev_enable(&self) -> &EV_ENABLE {
        &self.ev_enable
    }
}
#[doc = "LOAD (rw) register accessor: Load value when Timer is (re-)enabled. In One-Shot mode, the value written to this register specifies the Timer's duration in clock cycles.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`load::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`load::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@load`]
module"]
pub type LOAD = crate::Reg<load::LOAD_SPEC>;
#[doc = "Load value when Timer is (re-)enabled. In One-Shot mode, the value written to this register specifies the Timer's duration in clock cycles."]
pub mod load;
#[doc = "RELOAD (rw) register accessor: Reload value when Timer reaches ``0``. In Periodic mode, the value written to this register specify the Timer's period in clock cycles.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`reload::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`reload::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@reload`]
module"]
pub type RELOAD = crate::Reg<reload::RELOAD_SPEC>;
#[doc = "Reload value when Timer reaches ``0``. In Periodic mode, the value written to this register specify the Timer's period in clock cycles."]
pub mod reload;
#[doc = "EN (rw) register accessor: Enable flag of the Timer. Set this flag to ``1`` to enable/start the Timer. Set to ``0`` to disable the Timer.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`en::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`en::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@en`]
module"]
pub type EN = crate::Reg<en::EN_SPEC>;
#[doc = "Enable flag of the Timer. Set this flag to ``1`` to enable/start the Timer. Set to ``0`` to disable the Timer."]
pub mod en;
#[doc = "UPDATE_VALUE (rw) register accessor: Update trigger for the current countdown value. A write to this register latches the current countdown value to ``value`` register.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`update_value::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`update_value::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@update_value`]
module"]
pub type UPDATE_VALUE = crate::Reg<update_value::UPDATE_VALUE_SPEC>;
#[doc = "Update trigger for the current countdown value. A write to this register latches the current countdown value to ``value`` register."]
pub mod update_value;
#[doc = "VALUE (rw) register accessor: Latched countdown value. This value is updated by writing to ``update_value``.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`value::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`value::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@value`]
module"]
pub type VALUE = crate::Reg<value::VALUE_SPEC>;
#[doc = "Latched countdown value. This value is updated by writing to ``update_value``."]
pub mod value;
#[doc = "EV_STATUS (rw) register accessor: This register contains the current raw level of the zero event trigger. Writes to this register have no effect.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_status::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_status::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_status`]
module"]
pub type EV_STATUS = crate::Reg<ev_status::EV_STATUS_SPEC>;
#[doc = "This register contains the current raw level of the zero event trigger. Writes to this register have no effect."]
pub mod ev_status;
#[doc = "EV_PENDING (rw) register accessor: When a zero event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_pending::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_pending::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_pending`]
module"]
pub type EV_PENDING = crate::Reg<ev_pending::EV_PENDING_SPEC>;
#[doc = "When a zero event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register."]
pub mod ev_pending;
#[doc = "EV_ENABLE (rw) register accessor: This register enables the corresponding zero events. Write a ``0`` to this register to disable individual events.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_enable::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_enable::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@ev_enable`]
module"]
pub type EV_ENABLE = crate::Reg<ev_enable::EV_ENABLE_SPEC>;
#[doc = "This register enables the corresponding zero events. Write a ``0`` to this register to disable individual events."]
pub mod ev_enable;
