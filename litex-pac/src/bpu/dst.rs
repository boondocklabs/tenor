#[doc = "Register `DST` reader"]
pub type R = crate::R<DST_SPEC>;
#[doc = "Register `DST` writer"]
pub type W = crate::W<DST_SPEC>;
#[doc = "Field `dst` reader - "]
pub type DST_R = crate::FieldReader<u32>;
#[doc = "Field `dst` writer - "]
pub type DST_W<'a, REG> = crate::FieldWriter<'a, REG, 32, u32>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn dst(&self) -> DST_R {
        DST_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    #[must_use]
    pub fn dst(&mut self) -> DST_W<DST_SPEC> {
        DST_W::new(self, 0)
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
#[doc = "\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`dst::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`dst::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct DST_SPEC;
impl crate::RegisterSpec for DST_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`dst::R`](R) reader structure"]
impl crate::Readable for DST_SPEC {}
#[doc = "`write(|w| ..)` method takes [`dst::W`](W) writer structure"]
impl crate::Writable for DST_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets DST to value 0"]
impl crate::Resettable for DST_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
