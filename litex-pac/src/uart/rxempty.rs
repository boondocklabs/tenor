#[doc = "Register `RXEMPTY` reader"]
pub type R = crate::R<RXEMPTY_SPEC>;
#[doc = "Register `RXEMPTY` writer"]
pub type W = crate::W<RXEMPTY_SPEC>;
#[doc = "Field `rxempty` reader - "]
pub type RXEMPTY_R = crate::BitReader;
#[doc = "Field `rxempty` writer - "]
pub type RXEMPTY_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn rxempty(&self) -> RXEMPTY_R {
        RXEMPTY_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    #[must_use]
    pub fn rxempty(&mut self) -> RXEMPTY_W<RXEMPTY_SPEC> {
        RXEMPTY_W::new(self, 0)
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
#[doc = "RX FIFO Empty.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`rxempty::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`rxempty::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct RXEMPTY_SPEC;
impl crate::RegisterSpec for RXEMPTY_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`rxempty::R`](R) reader structure"]
impl crate::Readable for RXEMPTY_SPEC {}
#[doc = "`write(|w| ..)` method takes [`rxempty::W`](W) writer structure"]
impl crate::Writable for RXEMPTY_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets RXEMPTY to value 0"]
impl crate::Resettable for RXEMPTY_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
