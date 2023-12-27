#[doc = "Register `UPDATE_VALUE` reader"]
pub type R = crate::R<UPDATE_VALUE_SPEC>;
#[doc = "Register `UPDATE_VALUE` writer"]
pub type W = crate::W<UPDATE_VALUE_SPEC>;
#[doc = "Field `update_value` reader - "]
pub type UPDATE_VALUE_R = crate::BitReader;
#[doc = "Field `update_value` writer - "]
pub type UPDATE_VALUE_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0"]
    #[inline(always)]
    pub fn update_value(&self) -> UPDATE_VALUE_R {
        UPDATE_VALUE_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0"]
    #[inline(always)]
    #[must_use]
    pub fn update_value(&mut self) -> UPDATE_VALUE_W<UPDATE_VALUE_SPEC> {
        UPDATE_VALUE_W::new(self, 0)
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
#[doc = "Update trigger for the current countdown value. A write to this register latches the current countdown value to ``value`` register.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`update_value::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`update_value::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct UPDATE_VALUE_SPEC;
impl crate::RegisterSpec for UPDATE_VALUE_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`update_value::R`](R) reader structure"]
impl crate::Readable for UPDATE_VALUE_SPEC {}
#[doc = "`write(|w| ..)` method takes [`update_value::W`](W) writer structure"]
impl crate::Writable for UPDATE_VALUE_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets UPDATE_VALUE to value 0"]
impl crate::Resettable for UPDATE_VALUE_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
