#[doc = "Register `SRC` reader"]
pub type R = crate::R<SRC_SPEC>;
#[doc = "Register `SRC` writer"]
pub type W = crate::W<SRC_SPEC>;
#[doc = "Field `src` reader - "]
pub type SRC_R = crate::FieldReader<u32>;
#[doc = "Field `src` writer - "]
pub type SRC_W<'a, REG> = crate::FieldWriter<'a, REG, 32, u32>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn src(&self) -> SRC_R {
        SRC_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    #[must_use]
    pub fn src(&mut self) -> SRC_W<SRC_SPEC> {
        SRC_W::new(self, 0)
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
#[doc = "\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`src::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`src::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct SRC_SPEC;
impl crate::RegisterSpec for SRC_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`src::R`](R) reader structure"]
impl crate::Readable for SRC_SPEC {}
#[doc = "`write(|w| ..)` method takes [`src::W`](W) writer structure"]
impl crate::Writable for SRC_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets SRC to value 0"]
impl crate::Resettable for SRC_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
