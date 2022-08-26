#[doc = "Register `MUX_VALUE` reader"]
pub struct R(crate::R<MUX_VALUE_SPEC>);
impl core::ops::Deref for R {
    type Target = crate::R<MUX_VALUE_SPEC>;
    #[inline(always)]
    fn deref(&self) -> &Self::Target {
        &self.0
    }
}
impl From<crate::R<MUX_VALUE_SPEC>> for R {
    #[inline(always)]
    fn from(reader: crate::R<MUX_VALUE_SPEC>) -> Self {
        R(reader)
    }
}
#[doc = "Register `MUX_VALUE` writer"]
pub struct W(crate::W<MUX_VALUE_SPEC>);
impl core::ops::Deref for W {
    type Target = crate::W<MUX_VALUE_SPEC>;
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
impl From<crate::W<MUX_VALUE_SPEC>> for W {
    #[inline(always)]
    fn from(writer: crate::W<MUX_VALUE_SPEC>) -> Self {
        W(writer)
    }
}
#[doc = "Field `mux_value` reader - "]
pub type MUX_VALUE_R = crate::BitReader<bool>;
#[doc = "Field `mux_value` writer - "]
pub type MUX_VALUE_W<'a, const O: u8> = crate::BitWriter<'a, u32, MUX_VALUE_SPEC, bool, O>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn mux_value(&self) -> MUX_VALUE_R {
        MUX_VALUE_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn mux_value(&mut self) -> MUX_VALUE_W<0> {
        MUX_VALUE_W::new(self)
    }
    #[doc = "Writes raw bits to the register."]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.0.bits(bits);
        self
    }
}
#[doc = "\n\nThis register you can [`read`](crate::generic::Reg::read), [`write_with_zero`](crate::generic::Reg::write_with_zero), [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`modify`](crate::generic::Reg::modify). See [API](https://docs.rs/svd2rust/#read--modify--write-api).\n\nFor information about available fields see [mux_value](index.html) module"]
pub struct MUX_VALUE_SPEC;
impl crate::RegisterSpec for MUX_VALUE_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [mux_value::R](R) reader structure"]
impl crate::Readable for MUX_VALUE_SPEC {
    type Reader = R;
}
#[doc = "`write(|w| ..)` method takes [mux_value::W](W) writer structure"]
impl crate::Writable for MUX_VALUE_SPEC {
    type Writer = W;
}
#[doc = "`reset()` method sets MUX_VALUE to value 0"]
impl crate::Resettable for MUX_VALUE_SPEC {
    #[inline(always)]
    fn reset_value() -> Self::Ux {
        0
    }
}
