#[doc = "Register `STORAGE_ENABLE` reader"]
pub struct R(crate::R<STORAGE_ENABLE_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<STORAGE_ENABLE_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<STORAGE_ENABLE_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<STORAGE_ENABLE_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `STORAGE_ENABLE` writer"]
pub struct W(crate::W<STORAGE_ENABLE_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<STORAGE_ENABLE_SPEC>;
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
impl From<crate::W<STORAGE_ENABLE_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<STORAGE_ENABLE_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `storage_enable` reader - "]
pub type STORAGE_ENABLE_R = crate::BitReader<bool>;
#[doc = "Field `storage_enable` writer - "]
pub type STORAGE_ENABLE_W<'a, const O: u8> =
    crate::BitWriter<'a, u32, STORAGE_ENABLE_SPEC, bool, O>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn storage_enable(&self) -> STORAGE_ENABLE_R {
        STORAGE_ENABLE_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn storage_enable(&mut self) -> STORAGE_ENABLE_W<0> {
        STORAGE_ENABLE_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [storage_enable](index.html) module"]
pub struct STORAGE_ENABLE_SPEC;
impl crate::RegisterSpec for STORAGE_ENABLE_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [storage_enable::R](R) reader structure"]
impl crate::Readable for STORAGE_ENABLE_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [storage_enable::W](W) writer structure"]
impl crate::Writable for STORAGE_ENABLE_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets STORAGE_ENABLE to value 0"]
impl crate::Resettable for STORAGE_ENABLE_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
