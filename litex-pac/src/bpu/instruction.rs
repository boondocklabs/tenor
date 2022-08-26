#[doc = "Register `INSTRUCTION` reader"]
pub struct R(crate::R<INSTRUCTION_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<INSTRUCTION_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<INSTRUCTION_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<INSTRUCTION_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `INSTRUCTION` writer"]
pub struct W(crate::W<INSTRUCTION_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<INSTRUCTION_SPEC>;
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
impl From<crate::W<INSTRUCTION_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<INSTRUCTION_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `instruction` reader - "]
pub type INSTRUCTION_R = crate::FieldReader<u32, u32>;
#[doc = "Field `instruction` writer - "]
pub type INSTRUCTION_W<'a, const O: u8> =
    crate::FieldWriter<'a, u32, INSTRUCTION_SPEC, u32, u32, 32, O>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn instruction(&self) -> INSTRUCTION_R {
        INSTRUCTION_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn instruction(&mut self) -> INSTRUCTION_W<0> {
        INSTRUCTION_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [instruction](index.html) module"]
pub struct INSTRUCTION_SPEC;
impl crate::RegisterSpec for INSTRUCTION_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [instruction::R](R) reader structure"]
impl crate::Readable for INSTRUCTION_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [instruction::W](W) writer structure"]
impl crate::Writable for INSTRUCTION_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets INSTRUCTION to value 0"]
impl crate::Resettable for INSTRUCTION_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
