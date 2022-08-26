#[doc = "Register `STORAGE_DONE` reader"]
pub struct R(crate::R<STORAGE_DONE_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<STORAGE_DONE_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<STORAGE_DONE_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<STORAGE_DONE_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `STORAGE_DONE` writer"]
pub struct W(crate::W<STORAGE_DONE_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<STORAGE_DONE_SPEC>;
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
impl From<crate::W<STORAGE_DONE_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<STORAGE_DONE_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `storage_done` reader - "]
pub type STORAGE_DONE_R = crate::BitReader<bool>;
#[doc = "Field `storage_done` writer - "]
pub type STORAGE_DONE_W<'a, const O: u8> = crate::BitWriter<'a, u32, STORAGE_DONE_SPEC, bool, O>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn storage_done(&self) -> STORAGE_DONE_R {
        STORAGE_DONE_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn storage_done(&mut self) -> STORAGE_DONE_W<0> {
        STORAGE_DONE_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [storage_done](index.html) module"]
pub struct STORAGE_DONE_SPEC;
impl crate::RegisterSpec for STORAGE_DONE_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [storage_done::R](R) reader structure"]
impl crate::Readable for STORAGE_DONE_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [storage_done::W](W) writer structure"]
impl crate::Writable for STORAGE_DONE_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets STORAGE_DONE to value 0"]
impl crate::Resettable for STORAGE_DONE_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
