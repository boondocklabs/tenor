#[doc = "Register `OFFSET` reader"]
pub type R = crate::R<OFFSET_SPEC>;
#[doc = "Register `OFFSET` writer"]
pub type W = crate::W<OFFSET_SPEC>;
#[doc = "Field `offset` reader - "]
pub type OFFSET_R = crate::FieldReader<u32>;
#[doc = "Field `offset` writer - "]
pub type OFFSET_W<'a, REG> = crate::FieldWriter<'a, REG, 32, u32>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn offset(&self) -> OFFSET_R {
        OFFSET_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    #[must_use]
    pub fn offset(&mut self) -> OFFSET_W<OFFSET_SPEC> {
        OFFSET_W::new(self, 0)
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
#[doc = "\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`offset::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`offset::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct OFFSET_SPEC;
impl crate::RegisterSpec for OFFSET_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`offset::R`](R) reader structure"]
impl crate::Readable for OFFSET_SPEC {}
#[doc = "`write(|w| ..)` method takes [`offset::W`](W) writer structure"]
impl crate::Writable for OFFSET_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets OFFSET to value 0"]
impl crate::Resettable for OFFSET_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
