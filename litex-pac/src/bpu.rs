#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    status: STATUS,
    control: CONTROL,
    instruction: INSTRUCTION,
    src: SRC,
    dst: DST,
    length: LENGTH,
    offset: OFFSET,
    data: DATA,
    tick: TICK,
}
impl RegisterBlock {
    #[doc = "0x00 - BPU Status"]
    #[inline(always)]
    pub const fn status(&self) -> &STATUS {
        &self.status
    }
    #[doc = "0x04 - "]
    #[inline(always)]
    pub const fn control(&self) -> &CONTROL {
        &self.control
    }
    #[doc = "0x08 - "]
    #[inline(always)]
    pub const fn instruction(&self) -> &INSTRUCTION {
        &self.instruction
    }
    #[doc = "0x0c - "]
    #[inline(always)]
    pub const fn src(&self) -> &SRC {
        &self.src
    }
    #[doc = "0x10 - "]
    #[inline(always)]
    pub const fn dst(&self) -> &DST {
        &self.dst
    }
    #[doc = "0x14 - "]
    #[inline(always)]
    pub const fn length(&self) -> &LENGTH {
        &self.length
    }
    #[doc = "0x18 - "]
    #[inline(always)]
    pub const fn offset(&self) -> &OFFSET {
        &self.offset
    }
    #[doc = "0x1c - "]
    #[inline(always)]
    pub const fn data(&self) -> &DATA {
        &self.data
    }
    #[doc = "0x20 - "]
    #[inline(always)]
    pub const fn tick(&self) -> &TICK {
        &self.tick
    }
}
#[doc = "STATUS (rw) register accessor: BPU Status\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`status::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`status::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@status`]
module"]
pub type STATUS = crate::Reg<status::STATUS_SPEC>;
#[doc = "BPU Status"]
pub mod status;
#[doc = "CONTROL (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`control::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`control::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@control`]
module"]
pub type CONTROL = crate::Reg<control::CONTROL_SPEC>;
#[doc = ""]
pub mod control;
#[doc = "INSTRUCTION (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`instruction::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`instruction::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@instruction`]
module"]
pub type INSTRUCTION = crate::Reg<instruction::INSTRUCTION_SPEC>;
#[doc = ""]
pub mod instruction;
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
#[doc = "TICK (rw) register accessor: \n\nYou can [`read`](crate::generic::Reg::read) this register and get [`tick::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`tick::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@tick`]
module"]
pub type TICK = crate::Reg<tick::TICK_SPEC>;
#[doc = ""]
pub mod tick;
