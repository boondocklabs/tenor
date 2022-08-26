#[doc = "Register `STORAGE_LENGTH` reader"]
pub struct R(crate::R<STORAGE_LENGTH_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<STORAGE_LENGTH_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<STORAGE_LENGTH_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<STORAGE_LENGTH_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `STORAGE_LENGTH` writer"]
pub struct W(crate::W<STORAGE_LENGTH_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<STORAGE_LENGTH_SPEC>;
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
impl From<crate::W<STORAGE_LENGTH_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<STORAGE_LENGTH_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `storage_length` reader - "]
pub type STORAGE_LENGTH_R = crate::FieldReader<u16, u16>;
#[doc = "Field `storage_length` writer - "]
pub type STORAGE_LENGTH_W<'a, const O: u8> =
    crate::FieldWriter<'a, u32, STORAGE_LENGTH_SPEC, u16, u16, 10, O>;
impl R {
    #[doc = "Bits 0:9"]
    #[inline(always)]
    pub fn storage_length(&self) -> STORAGE_LENGTH_R {
        STORAGE_LENGTH_R::new((self.bits & 0x03ff) as u16)
    }
}
impl W {
    #[doc = "Bits 0:9"]
    #[inline(always)]
    pub fn storage_length(&mut self) -> STORAGE_LENGTH_W<0> {
        STORAGE_LENGTH_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [storage_length](index.html) module"]
pub struct STORAGE_LENGTH_SPEC;
impl crate::RegisterSpec for STORAGE_LENGTH_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [storage_length::R](R) reader structure"]
impl crate::Readable for STORAGE_LENGTH_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [storage_length::W](W) writer structure"]
impl crate::Writable for STORAGE_LENGTH_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets STORAGE_LENGTH to value 0"]
impl crate::Resettable for STORAGE_LENGTH_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
