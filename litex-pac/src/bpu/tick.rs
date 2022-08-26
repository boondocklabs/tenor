#[doc = "Register `TICK` reader"]
pub struct R(crate::R<TICK_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<TICK_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<TICK_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<TICK_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `TICK` writer"]
pub struct W(crate::W<TICK_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<TICK_SPEC>;
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
impl From<crate::W<TICK_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<TICK_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `tick` reader - "]
pub type TICK_R = crate::FieldReader<u32, u32>;
#[doc = "Field `tick` writer - "]
pub type TICK_W<'a, const O: u8> = crate::FieldWriter<'a, u32, TICK_SPEC, u32, u32, 32, O>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn tick(&self) -> TICK_R {
        TICK_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn tick(&mut self) -> TICK_W<0> {
        TICK_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [tick](index.html) module"]
pub struct TICK_SPEC;
impl crate::RegisterSpec for TICK_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [tick::R](R) reader structure"]
impl crate::Readable for TICK_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [tick::W](W) writer structure"]
impl crate::Writable for TICK_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets TICK to value 0"]
impl crate::Resettable for TICK_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
