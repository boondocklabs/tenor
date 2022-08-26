#[doc = "Register `DONE` reader"]
pub struct R(crate::R<DONE_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<DONE_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<DONE_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<DONE_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `DONE` writer"]
pub struct W(crate::W<DONE_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<DONE_SPEC>;
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
impl From<crate::W<DONE_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<DONE_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `done` reader - "]
pub type DONE_R = crate::BitReader<bool>;
#[doc = "Field `done` writer - "]
pub type DONE_W<'a, const O: u8> = crate::BitWriter<'a, u32, DONE_SPEC, bool, O>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn done(&self) -> DONE_R {
        DONE_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn done(&mut self) -> DONE_W<0> {
        DONE_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [done](index.html) module"]
pub struct DONE_SPEC;
impl crate::RegisterSpec for DONE_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [done::R](R) reader structure"]
impl crate::Readable for DONE_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [done::W](W) writer structure"]
impl crate::Writable for DONE_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets DONE to value 0"]
impl crate::Resettable for DONE_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
