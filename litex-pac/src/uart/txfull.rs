#[doc = "Register `TXFULL` reader"]
pub type R = crate::R<TXFULL_SPEC>;
#[doc = "Register `TXFULL` writer"]
pub type W = crate::W<TXFULL_SPEC>;
#[doc = "Field `txfull` reader - "]
pub type TXFULL_R = crate::BitReader;
#[doc = "Field `txfull` writer - "]
pub type TXFULL_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn txfull(&self) -> TXFULL_R {
        TXFULL_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    #[must_use]
    pub fn txfull(&mut self) -> TXFULL_W<TXFULL_SPEC> {
        TXFULL_W::new(self, 0)
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
#[doc = "TX FIFO Full.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`txfull::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`txfull::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct TXFULL_SPEC;
impl crate::RegisterSpec for TXFULL_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`txfull::R`](R) reader structure"]
impl crate::Readable for TXFULL_SPEC {}
#[doc = "`write(|w| ..)` method takes [`txfull::W`](W) writer structure"]
impl crate::Writable for TXFULL_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets TXFULL to value 0"]
impl crate::Resettable for TXFULL_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
