#[doc = "Register `SUBSAMPLER_VALUE` reader"]
pub struct R(crate::R<SUBSAMPLER_VALUE_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<SUBSAMPLER_VALUE_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<SUBSAMPLER_VALUE_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<SUBSAMPLER_VALUE_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `SUBSAMPLER_VALUE` writer"]
pub struct W(crate::W<SUBSAMPLER_VALUE_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<SUBSAMPLER_VALUE_SPEC>;
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
impl From<crate::W<SUBSAMPLER_VALUE_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<SUBSAMPLER_VALUE_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `subsampler_value` reader - "]
pub type SUBSAMPLER_VALUE_R = crate::FieldReader<u16, u16>;
#[doc = "Field `subsampler_value` writer - "]
pub type SUBSAMPLER_VALUE_W<'a, const O: u8> =
    crate::FieldWriter<'a, u32, SUBSAMPLER_VALUE_SPEC, u16, u16, 16, O>;
impl R {
    #[doc = "Bits 0:15"]
    #[inline(always)]
    pub fn subsampler_value(&self) -> SUBSAMPLER_VALUE_R {
        SUBSAMPLER_VALUE_R::new((self.bits & 0xffff) as u16)
    }
}
impl W {
    #[doc = "Bits 0:15"]
    #[inline(always)]
    pub fn subsampler_value(&mut self) -> SUBSAMPLER_VALUE_W<0> {
        SUBSAMPLER_VALUE_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [subsampler_value](index.html) module"]
pub struct SUBSAMPLER_VALUE_SPEC;
impl crate::RegisterSpec for SUBSAMPLER_VALUE_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [subsampler_value::R](R) reader structure"]
impl crate::Readable for SUBSAMPLER_VALUE_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [subsampler_value::W](W) writer structure"]
impl crate::Writable for SUBSAMPLER_VALUE_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets SUBSAMPLER_VALUE to value 0"]
impl crate::Resettable for SUBSAMPLER_VALUE_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
