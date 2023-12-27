#[doc = "Register `RESET` reader"]
pub type R = crate::R<RESET_SPEC>;
#[doc = "Register `RESET` writer"]
pub type W = crate::W<RESET_SPEC>;
#[doc = "Field `soc_rst` reader - Write `1` to this register to reset the full SoC (Pulse Reset)"]
pub type SOC_RST_R = crate::BitReader;
#[doc = "Field `soc_rst` writer - Write `1` to this register to reset the full SoC (Pulse Reset)"]
pub type SOC_RST_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `cpu_rst` reader - Write `1` to this register to reset the CPU(s) of the SoC (Hold Reset)"]
pub type CPU_RST_R = crate::BitReader;
#[doc = "Field `cpu_rst` writer - Write `1` to this register to reset the CPU(s) of the SoC (Hold Reset)"]
pub type CPU_RST_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0 - Write `1` to this register to reset the full SoC (Pulse Reset)"]
    #[inline(always)]
    pub fn soc_rst(&self) -> SOC_RST_R {
        SOC_RST_R::new((self.bits & 1) != 0)
    }
    #[doc = "Bit 1 - Write `1` to this register to reset the CPU(s) of the SoC (Hold Reset)"]
    #[inline(always)]
    pub fn cpu_rst(&self) -> CPU_RST_R {
        CPU_RST_R::new(((self.bits >> 1) & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0 - Write `1` to this register to reset the full SoC (Pulse Reset)"]
    #[inline(always)]
    #[must_use]
    pub fn soc_rst(&mut self) -> SOC_RST_W<RESET_SPEC> {
        SOC_RST_W::new(self, 0)
    }
    #[doc = "Bit 1 - Write `1` to this register to reset the CPU(s) of the SoC (Hold Reset)"]
    #[inline(always)]
    #[must_use]
    pub fn cpu_rst(&mut self) -> CPU_RST_W<RESET_SPEC> {
        CPU_RST_W::new(self, 1)
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
#[doc = "\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`reset::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`reset::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct RESET_SPEC;
impl crate::RegisterSpec for RESET_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`reset::R`](R) reader structure"]
impl crate::Readable for RESET_SPEC {}
#[doc = "`write(|w| ..)` method takes [`reset::W`](W) writer structure"]
impl crate::Writable for RESET_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets RESET to value 0"]
impl crate::Resettable for RESET_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
