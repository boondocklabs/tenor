#[doc = "Register `OUTPUT` reader"]
pub struct R(crate::R<OUTPUT_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<OUTPUT_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<OUTPUT_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<OUTPUT_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `OUTPUT` writer"]
pub struct W(crate::W<OUTPUT_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<OUTPUT_SPEC>;
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
impl From<crate::W<OUTPUT_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<OUTPUT_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `output` reader - "]
pub type OUTPUT_R = crate::FieldReader<u32, u32>;
#[doc = "Field `output` writer - "]
pub type OUTPUT_W<'a, const O: u8> = crate::FieldWriter<'a, u32, OUTPUT_SPEC, u32, u32, 32, O>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn output(&self) -> OUTPUT_R {
        OUTPUT_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn output(&mut self) -> OUTPUT_W<0> {
        OUTPUT_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [output](index.html) module"]
pub struct OUTPUT_SPEC;
impl crate::RegisterSpec for OUTPUT_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [output::R](R) reader structure"]
impl crate::Readable for OUTPUT_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [output::W](W) writer structure"]
impl crate::Writable for OUTPUT_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets OUTPUT to value 0"]
impl crate::Resettable for OUTPUT_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
