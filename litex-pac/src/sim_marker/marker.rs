#[doc = "Register `MARKER` reader"]
pub struct R(crate::R<MARKER_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<MARKER_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<MARKER_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<MARKER_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `MARKER` writer"]
pub struct W(crate::W<MARKER_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<MARKER_SPEC>;
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
impl From<crate::W<MARKER_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<MARKER_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `marker` reader - "]
pub type MARKER_R = crate::FieldReader<u8, u8>;
#[doc = "Field `marker` writer - "]
pub type MARKER_W<'a, const O: u8> = crate::FieldWriter<'a, u32, MARKER_SPEC, u8, u8, 8, O>;
impl R {
    #[doc = "Bits 0:7"]
    #[inline(always)]
    pub fn marker(&self) -> MARKER_R {
        MARKER_R::new((self.bits & 0xff) as u8)
    }
}
impl W {
    #[doc = "Bits 0:7"]
    #[inline(always)]
    pub fn marker(&mut self) -> MARKER_W<0> {
        MARKER_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [marker](index.html) module"]
pub struct MARKER_SPEC;
impl crate::RegisterSpec for MARKER_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [marker::R](R) reader structure"]
impl crate::Readable for MARKER_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [marker::W](W) writer structure"]
impl crate::Writable for MARKER_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets MARKER to value 0"]
impl crate::Resettable for MARKER_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
