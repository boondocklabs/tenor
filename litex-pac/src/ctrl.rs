#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    reset: RESET,
    scratch: SCRATCH,
    bus_errors: BUS_ERRORS,
}
impl RegisterBlock {
    #[doc = "0x00 - "]
    #[inline(always)]
    pub const fn reset(&self) -> &RESET {
        &self.reset
    }
    #[doc = "0x04 - Use this register as a scratch space to verify that software read/write accesses to the Wishbone/CSR bus are working correctly. The initial reset value of 0x1234578 can be used to verify endianness."]
    #[inline(always)]
    pub const fn scratch(&self) -> &SCRATCH {
        &self.scratch
    }
    #[doc = "0x08 - Total number of Wishbone bus errors (timeouts) since start."]
    #[inline(always)]
    pub const fn bus_errors(&self) -> &BUS_ERRORS {
        &self.bus_errors
    }
}
#[doc = "RESET (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`reset::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`reset::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@reset`]
module"]
pub type RESET = crate::Reg<reset::RESET_SPEC>;
#[doc = ""]
pub mod reset;
#[doc = "SCRATCH (rw) register accessor: Use this register as a scratch space to verify that software read/write accesses to the Wishbone/CSR bus are working correctly. The initial reset value of 0x1234578 can be used to verify endianness.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`scratch::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`scratch::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@scratch`]
module"]
pub type SCRATCH = crate::Reg<scratch::SCRATCH_SPEC>;
#[doc = "Use this register as a scratch space to verify that software read/write accesses to the Wishbone/CSR bus are working correctly. The initial reset value of 0x1234578 can be used to verify endianness."]
pub mod scratch;
#[doc = "BUS_ERRORS (rw) register accessor: Total number of Wishbone bus errors (timeouts) since start.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`bus_errors::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`bus_errors::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@bus_errors`]
module"]
pub type BUS_ERRORS = crate::Reg<bus_errors::BUS_ERRORS_SPEC>;
#[doc = "Total number of Wishbone bus errors (timeouts) since start."]
pub mod bus_errors;
