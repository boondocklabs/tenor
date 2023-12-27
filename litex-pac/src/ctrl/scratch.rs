#[doc = "Register `SCRATCH` reader"]
pub type R = crate::R<SCRATCH_SPEC>;
#[doc = "Register `SCRATCH` writer"]
pub type W = crate::W<SCRATCH_SPEC>;
#[doc = "Field `scratch` reader - "]
pub type SCRATCH_R = crate::FieldReader<u32>;
#[doc = "Field `scratch` writer - "]
pub type SCRATCH_W<'a, REG> = crate::FieldWriter<'a, REG, 32, u32>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn scratch(&self) -> SCRATCH_R {
        SCRATCH_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    #[must_use]
    pub fn scratch(&mut self) -> SCRATCH_W<SCRATCH_SPEC> {
        SCRATCH_W::new(self, 0)
    }
    #[doc = r" Writes raw bits to the register."]
    #[doc = r""]
    #[doc = r" # Safety"]
    #[doc = r""]
    #[doc = r" Passing incorrect value can cause undefined behaviour. See reference manual"]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.bits = bits;
        self
    }
}
#[doc = "Use this register as a scratch space to verify that software read/write accesses to the Wishbone/CSR bus are working correctly. The initial reset value of 0x1234578 can be used to verify endianness.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`scratch::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`scratch::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct SCRATCH_SPEC;
impl crate::RegisterSpec for SCRATCH_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`scratch::R`](R) reader structure"]
impl crate::Readable for SCRATCH_SPEC {}
#[doc = "`write(|w| ..)` method takes [`scratch::W`](W) writer structure"]
impl crate::Writable for SCRATCH_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets SCRATCH to value 0x1234_5678"]
impl crate::Resettable for SCRATCH_SPEC {
    const RESET_VALUE: Self::Ux = 0x1234_5678;
}
