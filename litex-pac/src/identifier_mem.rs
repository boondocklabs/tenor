#[doc = r"Register block"]
#[repr(C)]
pub struct RegisterBlock {
    identifier_mem: IDENTIFIER_MEM,
}
impl RegisterBlock {
    #[doc = "0x00 - 8 x 37-bit memory"]
    #[inline(always)]
    pub const fn identifier_mem(&self) -> &IDENTIFIER_MEM {
        &self.identifier_mem
    }
}
#[doc = "IDENTIFIER_MEM (rw) register accessor: 8 x 37-bit memory\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`identifier_mem::R`].  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`identifier_mem::W`]. You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [`mod@identifier_mem`]
module"]
pub type IDENTIFIER_MEM = crate::Reg<identifier_mem::IDENTIFIER_MEM_SPEC>;
#[doc = "8 x 37-bit memory"]
pub mod identifier_mem;
