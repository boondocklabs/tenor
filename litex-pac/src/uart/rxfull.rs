#[doc = "Register `RXFULL` reader"]
pub type R = crate::R<RXFULL_SPEC>;
#[doc = "Register `RXFULL` writer"]
pub type W = crate::W<RXFULL_SPEC>;
#[doc = "Field `rxfull` reader - "]
pub type RXFULL_R = crate::BitReader;
#[doc = "Field `rxfull` writer - "]
pub type RXFULL_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn rxfull(&self) -> RXFULL_R {
        RXFULL_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    #[must_use]
    pub fn rxfull(&mut self) -> RXFULL_W<RXFULL_SPEC> {
        RXFULL_W::new(self, 0)
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
#[doc = "RX FIFO Full.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`rxfull::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`rxfull::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct RXFULL_SPEC;
impl crate::RegisterSpec for RXFULL_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`rxfull::R`](R) reader structure"]
impl crate::Readable for RXFULL_SPEC {}
#[doc = "`write(|w| ..)` method takes [`rxfull::W`](W) writer structure"]
impl crate::Writable for RXFULL_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets RXFULL to value 0"]
impl crate::Resettable for RXFULL_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
