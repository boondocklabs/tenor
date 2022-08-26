#[doc = "Register `STORAGE_MEM_DATA` reader"]
pub struct R(crate::R<STORAGE_MEM_DATA_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<STORAGE_MEM_DATA_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<STORAGE_MEM_DATA_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<STORAGE_MEM_DATA_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `STORAGE_MEM_DATA` writer"]
pub struct W(crate::W<STORAGE_MEM_DATA_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<STORAGE_MEM_DATA_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl core::ops::DerefMut for W {
    #[inline(always)]
    fn deref_mut(&mut self) -> &mut Self::Target {
        &mut self.0
    }
}
impl From<crate::W<STORAGE_MEM_DATA_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<STORAGE_MEM_DATA_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `storage_mem_data` reader - "]
pub type STORAGE_MEM_DATA_R = crate::FieldReader<u32, u32>;
#[doc = "Field `storage_mem_data` writer - "]
pub type STORAGE_MEM_DATA_W<'a, const O: u8> =
    crate::FieldWriter<'a, u32, STORAGE_MEM_DATA_SPEC, u32, u32, 32, O>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn storage_mem_data(&self) -> STORAGE_MEM_DATA_R {
        STORAGE_MEM_DATA_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn storage_mem_data(&mut self) -> STORAGE_MEM_DATA_W<0> {
        STORAGE_MEM_DATA_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [storage_mem_data](index.html) module"]
pub struct STORAGE_MEM_DATA_SPEC;
impl crate::RegisterSpec for STORAGE_MEM_DATA_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [storage_mem_data::R](R) reader structure"]
impl crate::Readable for STORAGE_MEM_DATA_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [storage_mem_data::W](W) writer structure"]
impl crate::Writable for STORAGE_MEM_DATA_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets STORAGE_MEM_DATA to value 0"]
impl crate::Resettable for STORAGE_MEM_DATA_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
