#[doc = "Register `IMM` reader"]
pub struct R(crate::R<IMM_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<IMM_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<IMM_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<IMM_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `IMM` writer"]
pub struct W(crate::W<IMM_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<IMM_SPEC>;
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
impl From<crate::W<IMM_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<IMM_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `imm` reader - "]
pub type IMM_R = crate::FieldReader<u32, u32>;
#[doc = "Field `imm` writer - "]
pub type IMM_W<'a, const O: u8> = crate::FieldWriter<'a, u32, IMM_SPEC, u32, u32, 32, O>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn imm(&self) -> IMM_R {
        IMM_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn imm(&mut self) -> IMM_W<0> {
        IMM_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [imm](index.html) module"]
pub struct IMM_SPEC;
impl crate::RegisterSpec for IMM_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [imm::R](R) reader structure"]
impl crate::Readable for IMM_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [imm::W](W) writer structure"]
impl crate::Writable for IMM_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets IMM to value 0"]
impl crate::Resettable for IMM_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
