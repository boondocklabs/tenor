#[doc = "Register `FINISH` reader"]
pub struct R(crate::R<FINISH_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<FINISH_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<FINISH_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<FINISH_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `FINISH` writer"]
pub struct W(crate::W<FINISH_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<FINISH_SPEC>;
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
impl From<crate::W<FINISH_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<FINISH_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `finish` reader - "]
pub type FINISH_R = crate::BitReader<bool>;
#[doc = "Field `finish` writer - "]
pub type FINISH_W<'a, const O: u8> = crate::BitWriter<'a, u32, FINISH_SPEC, bool, O>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn finish(&self) -> FINISH_R {
        FINISH_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn finish(&mut self) -> FINISH_W<0> {
        FINISH_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [finish](index.html) module"]
pub struct FINISH_SPEC;
impl crate::RegisterSpec for FINISH_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [finish::R](R) reader structure"]
impl crate::Readable for FINISH_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [finish::W](W) writer structure"]
impl crate::Writable for FINISH_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets FINISH to value 0"]
impl crate::Resettable for FINISH_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
