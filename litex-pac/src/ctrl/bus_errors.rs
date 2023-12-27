#[doc = "Register `BUS_ERRORS` reader"]
pub type R = crate::R<BUS_ERRORS_SPEC>;
#[doc = "Register `BUS_ERRORS` writer"]
pub type W = crate::W<BUS_ERRORS_SPEC>;
#[doc = "Field `bus_errors` reader - "]
pub type BUS_ERRORS_R = crate::FieldReader<u32>;
#[doc = "Field `bus_errors` writer - "]
pub type BUS_ERRORS_W<'a, REG> = crate::FieldWriter<'a, REG, 32, u32>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn bus_errors(&self) -> BUS_ERRORS_R {
        BUS_ERRORS_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    #[must_use]
    pub fn bus_errors(&mut self) -> BUS_ERRORS_W<BUS_ERRORS_SPEC> {
        BUS_ERRORS_W::new(self, 0)
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
#[doc = "Total number of Wishbone bus errors (timeouts) since start.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`bus_errors::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`bus_errors::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct BUS_ERRORS_SPEC;
impl crate::RegisterSpec for BUS_ERRORS_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`bus_errors::R`](R) reader structure"]
impl crate::Readable for BUS_ERRORS_SPEC {}
#[doc = "`write(|w| ..)` method takes [`bus_errors::W`](W) writer structure"]
impl crate::Writable for BUS_ERRORS_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets BUS_ERRORS to value 0"]
impl crate::Resettable for BUS_ERRORS_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
