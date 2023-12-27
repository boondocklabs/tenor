#[doc = "Register `EV_STATUS` reader"]
pub type R = crate::R<EV_STATUS_SPEC>;
#[doc = "Register `EV_STATUS` writer"]
pub type W = crate::W<EV_STATUS_SPEC>;
#[doc = "Field `tx` reader - Level of the ``tx`` event"]
pub type TX_R = crate::BitReader;
#[doc = "Field `tx` writer - Level of the ``tx`` event"]
pub type TX_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `rx` reader - Level of the ``rx`` event"]
pub type RX_R = crate::BitReader;
#[doc = "Field `rx` writer - Level of the ``rx`` event"]
pub type RX_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0 - Level of the ``tx`` event"]
    #[inline(always)]
    pub fn tx(&self) -> TX_R {
        TX_R::new((self.bits & 1) != 0)
    }
    #[doc = "Bit 1 - Level of the ``rx`` event"]
    #[inline(always)]
    pub fn rx(&self) -> RX_R {
        RX_R::new(((self.bits >> 1) & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0 - Level of the ``tx`` event"]
    #[inline(always)]
    #[must_use]
    pub fn tx(&mut self) -> TX_W<EV_STATUS_SPEC> {
        TX_W::new(self, 0)
    }
    #[doc = "Bit 1 - Level of the ``rx`` event"]
    #[inline(always)]
    #[must_use]
    pub fn rx(&mut self) -> RX_W<EV_STATUS_SPEC> {
        RX_W::new(self, 1)
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
#[doc = "This register contains the current raw level of the rx event trigger. Writes to this register have no effect.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_status::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_status::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct EV_STATUS_SPEC;
impl crate::RegisterSpec for EV_STATUS_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`ev_status::R`](R) reader structure"]
impl crate::Readable for EV_STATUS_SPEC {}
#[doc = "`write(|w| ..)` method takes [`ev_status::W`](W) writer structure"]
impl crate::Writable for EV_STATUS_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets EV_STATUS to value 0"]
impl crate::Resettable for EV_STATUS_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
