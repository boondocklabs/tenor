#[doc = "Register `EV_ENABLE` reader"]
pub type R = crate::R<EV_ENABLE_SPEC>;
#[doc = "Register `EV_ENABLE` writer"]
pub type W = crate::W<EV_ENABLE_SPEC>;
#[doc = "Field `tx` reader - Write a ``1`` to enable the ``tx`` Event"]
pub type TX_R = crate::BitReader;
#[doc = "Field `tx` writer - Write a ``1`` to enable the ``tx`` Event"]
pub type TX_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `rx` reader - Write a ``1`` to enable the ``rx`` Event"]
pub type RX_R = crate::BitReader;
#[doc = "Field `rx` writer - Write a ``1`` to enable the ``rx`` Event"]
pub type RX_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0 - Write a ``1`` to enable the ``tx`` Event"]
    #[inline(always)]
    pub fn tx(&self) -> TX_R {
        TX_R::new((self.bits & 1) != 0)
    }
    #[doc = "Bit 1 - Write a ``1`` to enable the ``rx`` Event"]
    #[inline(always)]
    pub fn rx(&self) -> RX_R {
        RX_R::new(((self.bits >> 1) & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0 - Write a ``1`` to enable the ``tx`` Event"]
    #[inline(always)]
    #[must_use]
    pub fn tx(&mut self) -> TX_W<EV_ENABLE_SPEC> {
        TX_W::new(self, 0)
    }
    #[doc = "Bit 1 - Write a ``1`` to enable the ``rx`` Event"]
    #[inline(always)]
    #[must_use]
    pub fn rx(&mut self) -> RX_W<EV_ENABLE_SPEC> {
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
#[doc = "This register enables the corresponding rx events. Write a ``0`` to this register to disable individual events.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_enable::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_enable::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct EV_ENABLE_SPEC;
impl crate::RegisterSpec for EV_ENABLE_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`ev_enable::R`](R) reader structure"]
impl crate::Readable for EV_ENABLE_SPEC {}
#[doc = "`write(|w| ..)` method takes [`ev_enable::W`](W) writer structure"]
impl crate::Writable for EV_ENABLE_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets EV_ENABLE to value 0"]
impl crate::Resettable for EV_ENABLE_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
