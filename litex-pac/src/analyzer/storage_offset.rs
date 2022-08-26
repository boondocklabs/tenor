#[doc = "Register `STORAGE_OFFSET` reader"]
pub struct R(crate::R<STORAGE_OFFSET_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<STORAGE_OFFSET_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<STORAGE_OFFSET_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<STORAGE_OFFSET_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `STORAGE_OFFSET` writer"]
pub struct W(crate::W<STORAGE_OFFSET_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<STORAGE_OFFSET_SPEC>;
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
impl From<crate::W<STORAGE_OFFSET_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<STORAGE_OFFSET_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `storage_offset` reader - "]
pub type STORAGE_OFFSET_R = crate::FieldReader<u16, u16>;
#[doc = "Field `storage_offset` writer - "]
pub type STORAGE_OFFSET_W<'a, const O: u8> =
    crate::FieldWriter<'a, u32, STORAGE_OFFSET_SPEC, u16, u16, 10, O>;
impl R {
    #[doc = "Bits 0:9"]
    #[inline(always)]
    pub fn storage_offset(&self) -> STORAGE_OFFSET_R {
        STORAGE_OFFSET_R::new((self.bits & 0x03ff) as u16)
    }
}
impl W {
    #[doc = "Bits 0:9"]
    #[inline(always)]
    pub fn storage_offset(&mut self) -> STORAGE_OFFSET_W<0> {
        STORAGE_OFFSET_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [storage_offset](index.html) module"]
pub struct STORAGE_OFFSET_SPEC;
impl crate::RegisterSpec for STORAGE_OFFSET_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [storage_offset::R](R) reader structure"]
impl crate::Readable for STORAGE_OFFSET_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [storage_offset::W](W) writer structure"]
impl crate::Writable for STORAGE_OFFSET_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets STORAGE_OFFSET to value 0"]
impl crate::Resettable for STORAGE_OFFSET_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
