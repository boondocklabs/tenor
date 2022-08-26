#[doc = "Register `CRG_RESET` reader"]
pub struct R(crate::R<CRG_RESET_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<CRG_RESET_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<CRG_RESET_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<CRG_RESET_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `CRG_RESET` writer"]
pub struct W(crate::W<CRG_RESET_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<CRG_RESET_SPEC>;
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
impl From<crate::W<CRG_RESET_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<CRG_RESET_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `crg_reset` reader - "]
pub type CRG_RESET_R = crate::BitReader<bool>;
#[doc = "Field `crg_reset` writer - "]
pub type CRG_RESET_W<'a, const O: u8> = crate::BitWriter<'a, u32, CRG_RESET_SPEC, bool, O>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn crg_reset(&self) -> CRG_RESET_R {
        CRG_RESET_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn crg_reset(&mut self) -> CRG_RESET_W<0> {
        CRG_RESET_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [crg_reset](index.html) module"]
pub struct CRG_RESET_SPEC;
impl crate::RegisterSpec for CRG_RESET_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [crg_reset::R](R) reader structure"]
impl crate::Readable for CRG_RESET_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [crg_reset::W](W) writer structure"]
impl crate::Writable for CRG_RESET_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets CRG_RESET to value 0"]
impl crate::Resettable for CRG_RESET_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
