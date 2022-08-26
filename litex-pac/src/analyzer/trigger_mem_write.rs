#[doc = "Register `TRIGGER_MEM_WRITE` reader"]
pub struct R(crate::R<TRIGGER_MEM_WRITE_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<TRIGGER_MEM_WRITE_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<TRIGGER_MEM_WRITE_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<TRIGGER_MEM_WRITE_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `TRIGGER_MEM_WRITE` writer"]
pub struct W(crate::W<TRIGGER_MEM_WRITE_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<TRIGGER_MEM_WRITE_SPEC>;
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
impl From<crate::W<TRIGGER_MEM_WRITE_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<TRIGGER_MEM_WRITE_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `trigger_mem_write` reader - "]
pub type TRIGGER_MEM_WRITE_R = crate::BitReader<bool>;
#[doc = "Field `trigger_mem_write` writer - "]
pub type TRIGGER_MEM_WRITE_W<'a, const O: u8> =
    crate::BitWriter<'a, u32, TRIGGER_MEM_WRITE_SPEC, bool, O>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn trigger_mem_write(&self) -> TRIGGER_MEM_WRITE_R {
        TRIGGER_MEM_WRITE_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn trigger_mem_write(&mut self) -> TRIGGER_MEM_WRITE_W<0> {
        TRIGGER_MEM_WRITE_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [trigger_mem_write](index.html) module"]
pub struct TRIGGER_MEM_WRITE_SPEC;
impl crate::RegisterSpec for TRIGGER_MEM_WRITE_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [trigger_mem_write::R](R) reader structure"]
impl crate::Readable for TRIGGER_MEM_WRITE_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [trigger_mem_write::W](W) writer structure"]
impl crate::Writable for TRIGGER_MEM_WRITE_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets TRIGGER_MEM_WRITE to value 0"]
impl crate::Resettable for TRIGGER_MEM_WRITE_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
