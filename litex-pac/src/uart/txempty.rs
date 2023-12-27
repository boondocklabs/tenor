#[doc = "Register `TXEMPTY` reader"]
pub type R = crate::R<TXEMPTY_SPEC>;
#[doc = "Register `TXEMPTY` writer"]
pub type W = crate::W<TXEMPTY_SPEC>;
#[doc = "Field `txempty` reader - "]
pub type TXEMPTY_R = crate::BitReader;
#[doc = "Field `txempty` writer - "]
pub type TXEMPTY_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn txempty(&self) -> TXEMPTY_R {
        TXEMPTY_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    #[must_use]
    pub fn txempty(&mut self) -> TXEMPTY_W<TXEMPTY_SPEC> {
        TXEMPTY_W::new(self, 0)
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
#[doc = "TX FIFO Empty.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`txempty::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`txempty::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct TXEMPTY_SPEC;
impl crate::RegisterSpec for TXEMPTY_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`txempty::R`](R) reader structure"]
impl crate::Readable for TXEMPTY_SPEC {}
#[doc = "`write(|w| ..)` method takes [`txempty::W`](W) writer structure"]
impl crate::Writable for TXEMPTY_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets TXEMPTY to value 0"]
impl crate::Resettable for TXEMPTY_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
