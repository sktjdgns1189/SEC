/* linux/arch/arm/mach-exynos/include/mach/regs-pmu5.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS5 - Power management unit definition
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_REGS_PMU5_H
#define __ASM_ARCH_REGS_PMU5_H __FILE__

#include "regs-pmu-5210.h"
#include "regs-pmu-5250.h"

#define S5P_PMUREG(x)						(S5P_VA_PMU + (x))

#define EXYNOS5_OM_STAT						S5P_PMUREG(0x0000)
#define EXYNOS5_GPS_LPI						S5P_PMUREG(0x0004)
#define EXYNOS5_RTC_CLKO_SEL					S5P_PMUREG(0x001C)
#define EXYNOS5_GNSS_RTC_OUT_CTRL				S5P_PMUREG(0x0020)
#define EXYNOS5_C2C_CTRL					S5P_PMUREG(0x0024)
#define EXYNOS5_CENTRAL_SEQ_CONFIGURATION			S5P_PMUREG(0x0200)
#define EXYNOS5_CENTRAL_LOWPWR_CFG				(1 << 16)

#define EXYNOS5_CENTRAL_SEQ_STATUS				S5P_PMUREG(0x0204)
#define EXYNOS5_CENTRAL_SEQ_OPTION				S5P_PMUREG(0x0208)

#define EXYNOS5_USE_STANDBYWFE_ISP_ARM				(1 << 29)
#define EXYNOS5_USE_STANDBYWFE_FSYS_ARM				(1 << 28)
#define EXYNOS5_USE_STANDBYWFE_ARM_CORE1			(1 << 25)
#define EXYNOS5_USE_STANDBYWFE_ARM_CORE0			(1 << 24)
#define EXYNOS5_USE_STANDBYWFI_ISP_ARM				(1 << 21)
#define EXYNOS5_USE_STANDBYWFI_FSYS_ARM				(1 << 20)
#define EXYNOS5_USE_STANDBYWFI_ARM_CORE1			(1 << 17)
#define EXYNOS5_USE_STANDBYWFI_ARM_CORE0			(1 << 16)
#define EXYNOS5_FAST_PWUP					(1 << 9)
#define EXYNOS5_FAST_PWDN					(1 << 8)

#define EXYNOS5_SEQ_TRANSITION0					S5P_PMUREG(0x0220)
#define EXYNOS5_SEQ_TRANSITION1					S5P_PMUREG(0x0224)
#define EXYNOS5_SEQ_TRANSITION2					S5P_PMUREG(0x0228)
#define EXYNOS5_SEQ_TRANSITION3					S5P_PMUREG(0x022C)
#define EXYNOS5_SEQ_TRANSITION4					S5P_PMUREG(0x0230)
#define EXYNOS5_SEQ_TRANSITION5					S5P_PMUREG(0x0234)
#define EXYNOS5_SEQ_TRANSITION6					S5P_PMUREG(0x0238)
#define EXYNOS5_SEQ_TRANSITION7					S5P_PMUREG(0x023C)
#define EXYNOS5_CENTRAL_SEQ_SYSMEM_CONFIGURATION		S5P_PMUREG(0x0240)
#define EXYNOS5_CENTRAL_SEQ_SYSMEM_STATUS			S5P_PMUREG(0x0244)
#define EXYNOS5_CENTRAL_SEQ_SYSMEM_OPTION			S5P_PMUREG(0x0248)
#define EXYNOS5_SEQ_SYSMEM_TRANSITION0				S5P_PMUREG(0x0260)
#define EXYNOS5_SEQ_SYSMEM_TRANSITION1				S5P_PMUREG(0x0264)
#define EXYNOS5_SEQ_SYSMEM_TRANSITION2				S5P_PMUREG(0x0268)
#define EXYNOS5_SEQ_SYSMEM_TRANSITION3				S5P_PMUREG(0x026C)
#define EXYNOS5_SEQ_SYSMEM_TRANSITION4				S5P_PMUREG(0x0270)
#define EXYNOS5_SEQ_SYSMEM_TRANSITION5				S5P_PMUREG(0x0274)
#define EXYNOS5_SEQ_SYSMEM_TRANSITION6				S5P_PMUREG(0x0278)
#define EXYNOS5_SEQ__TRANSITION7				S5P_PMUREG(0x027C)
#define EXYNOS5_SWRESET						S5P_PMUREG(0x0400)
#define EXYNOS5_RST_STAT					S5P_PMUREG(0x0404)

#define EXYNOS5_SYS_WDTRESET					(1 << 20)

#define EXYNOS5_AUTOMATIC_WDT_RESET_DISABLE			S5P_PMUREG(0x0408)
#define EXYNOS5_MASK_WDT_RESET_REQUEST				S5P_PMUREG(0x040C)
#define EXYNOS5_RESET_SEQUENCER_CONFIGURATION			S5P_PMUREG(0x0500)
#define EXYNOS5_RESET_SEQUENCER_STATUS				S5P_PMUREG(0x0504)
#define EXYNOS5_RESET_SEQUENCER_OPTION				S5P_PMUREG(0x0508)
#define EXYNOS5_WAKEUP_STAT					S5P_PMUREG(0x0600)
#define EXYNOS5_EINT_WAKEUP_MASK				S5P_PMUREG(0x0604)
#define EXYNOS5_WAKEUP_MASK					S5P_PMUREG(0x0608)

#define EXYNOS5_DEFAULT_WAKEUP_MACK				(0xF << 16)
#define EXYNOS5_MASK_RTC_ALARM					(1 << 1)
#define EXYNOS5_MASK_RTC_TICK					(1 << 2)
#define EXYNOS5_MASK_KEY					(1 << 5)
#define EXYNOS5_MASK_HSI					(1 << 8)
#define EXYNOS5_MASK_MMC0					(1 << 9)
#define EXYNOS5_MASK_MMC1					(1 << 10)
#define EXYNOS5_MASK_MMC2					(1 << 11)
#define EXYNOS5_MASK_MMC3					(1 << 12)
#define EXYNOS5_MASK_I2S					(1 << 13)
#define EXYNOS5_MASK_TIMER					(1 << 14)
#define EXYNOS5_MASK_CEC					(1 << 15)
#define EXYNOS5_MASK_EXT_GIC0_IRQ				(1 << 16)
#define EXYNOS5_MASK_EXT_GIC0_FIQ				(1 << 17)
#define EXYNOS5_MASK_EXT_GIC1_IRQ				(1 << 18)
#define EXYNOS5_MASK_EXT_GIC1_FIQ				(1 << 19)
#define EXYNOS5_MASK_C2C_RESET_REQ				(1 << 20)
#define EXYNOS5_MASK_GPS					(1 << 21)

#define EXYNOS5_DEFAULT_WAKEUP_MASK				(EXYNOS5_MASK_EXT_GIC0_IRQ |\
								 EXYNOS5_MASK_EXT_GIC0_FIQ |\
								 EXYNOS5_MASK_EXT_GIC1_IRQ |\
								 EXYNOS5_MASK_EXT_GIC1_FIQ)

#define EXYNOS5_WAKEUP_INTERRUPT				S5P_PMUREG(0x060C)
#define EXYNOS5_WAKEUP_STAT_SYSMEM				S5P_PMUREG(0x0620)
#define EXYNOS5_EINT_WAKEUP_MASK_SYSMEM				S5P_PMUREG(0x0624)
#define EXYNOS5_WAKEUP_MASK_SYSMEM				S5P_PMUREG(0x0628)
#define EXYNOS5_WAKEUP_INTERRUPT_SYSMEM				S5P_PMUREG(0x062C)
#define EXYNOS5_HDMI_PHY_CONTROL				S5P_PMUREG(0x0700)
#define EXYNOS5_USBDEV_PHY_CONTROL				S5P_PMUREG(0x0704)
#define EXYNOS5_USBHOST_PHY_CONTROL				S5P_PMUREG(0x0708)
#define EXYNOS5_MIPI_PHY0_CONTROL				S5P_PMUREG(0x0710)
#define EXYNOS5_MIPI_PHY1_CONTROL				S5P_PMUREG(0x0714)
#define EXYNOS5_ADC_PHY_CONTROL					S5P_PMUREG(0x0718)
#define EXYNOS5_MTCADC_PHY_CONTROL				S5P_PMUREG(0x071C)
#define EXYNOS5_DPTX_PHY_CONTROL				S5P_PMUREG(0x0720)
#define EXYNOS5_SATA_PHY_CONTROL				S5P_PMUREG(0x0724)

#define EXYNOS5_ABB_INT						S5P_PMUREG(0x0780)
#define EXYNOS5_ABB_ARM						S5P_PMUREG(0x0784)
#define EXYNOS5_ABB_G3D						S5P_PMUREG(0x0788)
#define EXYNOS5_ABB_MIF						S5P_PMUREG(0x078C)

#define EXYNOS5_ABB_MEMBER(_member)				EXYNOS5_##_member

#define EXYNOS5_INFORM0						S5P_PMUREG(0x0800)
#define EXYNOS5_INFORM1						S5P_PMUREG(0x0804)
#define EXYNOS5_INFORM2						S5P_PMUREG(0x0808)
#define EXYNOS5_INFORM3						S5P_PMUREG(0x080C)
#define EXYNOS5_INFORM4						S5P_PMUREG(0x0810)
#define EXYNOS5_INFORM5						S5P_PMUREG(0x0814)
#define EXYNOS5_INFORM6						S5P_PMUREG(0x0818)
#define EXYNOS5_INFORM7						S5P_PMUREG(0x081C)
#define EXYNOS5_PMU_SPARE0					S5P_PMUREG(0x0900)
#define EXYNOS5_PMU_SPARE1					S5P_PMUREG(0x0904)
#define EXYNOS5_PMU_SPARE2					S5P_PMUREG(0x0908)
#define EXYNOS5_PMU_SPARE3					S5P_PMUREG(0x090C)
#define EXYNOS5_IROM_DATA_REG0					S5P_PMUREG(0x0980)
#define EXYNOS5_IROM_DATA_REG1					S5P_PMUREG(0x0984)
#define EXYNOS5_IROM_DATA_REG2					S5P_PMUREG(0x0988)
#define EXYNOS5_IROM_DATA_REG3					S5P_PMUREG(0x098C)

#define EXYNOS5_ARM_CORE0_SYS_PWR_REG				S5P_PMUREG(0x1000)
#define EXYNOS5_DIS_IRQ_ARM_CORE0_LOCAL_SYS_PWR_REG		S5P_PMUREG(0x1004)
#define EXYNOS5_DIS_IRQ_ARM_CORE0_CENTRAL_SYS_PWR_REG		S5P_PMUREG(0x1008)
#define EXYNOS5_ARM_CORE1_SYS_PWR_REG				S5P_PMUREG(0x1010)
#define EXYNOS5_DIS_IRQ_ARM_CORE1_LOCAL_SYS_PWR_REG		S5P_PMUREG(0x1014)
#define EXYNOS5_DIS_IRQ_ARM_CORE1_CENTRAL_SYS_PWR_REG		S5P_PMUREG(0x1018)
#define EXYNOS5_FSYS_ARM_SYS_PWR_REG				S5P_PMUREG(0x1040)
#define EXYNOS5_DIS_IRQ_FSYS_ARM_CENTRAL_SYS_PWR_REG		S5P_PMUREG(0x1048)
#define EXYNOS5_ISP_ARM_SYS_PWR_REG				S5P_PMUREG(0x1050)
#define EXYNOS5_DIS_IRQ_ISP_ARM_LOCAL_SYS_PWR_REG		S5P_PMUREG(0x1054)
#define EXYNOS5_DIS_IRQ_ISP_ARM_CENTRAL_SYS_PWR_REG		S5P_PMUREG(0x1058)
#define EXYNOS5_ARM_COMMON_SYS_PWR_REG				S5P_PMUREG(0x1080)
#define EXYNOS5_ARM_L2_SYS_PWR_REG				S5P_PMUREG(0x10C0)
#define EXYNOS5_CMU_ACLKSTOP_SYS_PWR_REG			S5P_PMUREG(0x1100)
#define EXYNOS5_CMU_SCLKSTOP_SYS_PWR_REG			S5P_PMUREG(0x1104)
#define EXYNOS5_CMU_RESET_SYS_PWR_REG				S5P_PMUREG(0x110C)
#define EXYNOS5_CMU_ACLKSTOP_SYSMEM_SYS_PWR_REG			S5P_PMUREG(0x1120)
#define EXYNOS5_CMU_SCLKSTOP_SYSMEM_SYS_PWR_REG			S5P_PMUREG(0x1124)
#define EXYNOS5_CMU_RESET_SYSMEM_SYS_PWR_REG			S5P_PMUREG(0x112C)
#define EXYNOS5_DRAM_FREQ_DOWN_SYS_PWR_REG			S5P_PMUREG(0x1130)
#define EXYNOS5_DDRPHY_DLLOFF_SYS_PWR_REG			S5P_PMUREG(0x1134)
#define EXYNOS5_DDRPHY_DLLLOCK_SYS_PWR_REG			S5P_PMUREG(0x1138)
#define EXYNOS5_APLL_SYSCLK_SYS_PWR_REG				S5P_PMUREG(0x1140)
#define EXYNOS5_MPLL_SYSCLK_SYS_PWR_REG				S5P_PMUREG(0x1144)
#define EXYNOS5_VPLL_SYSCLK_SYS_PWR_REG				S5P_PMUREG(0x1148)
#define EXYNOS5_EPLL_SYSCLK_SYS_PWR_REG				S5P_PMUREG(0x114C)
#define EXYNOS5_BPLL_SYSCLK_SYS_PWR_REG				S5P_PMUREG(0x1150)
#define EXYNOS5_CPLL_SYSCLK_SYS_PWR_REG				S5P_PMUREG(0x1154)
#define EXYNOS5_MPLLUSER_SYSCLK_SYS_PWR_REG			S5P_PMUREG(0x1164)
#define EXYNOS5_BPLLUSER_SYSCLK_SYS_PWR_REG			S5P_PMUREG(0x1170)
#define EXYNOS5_TOP_BUS_SYS_PWR_REG				S5P_PMUREG(0x1180)
#define EXYNOS5_TOP_RETENTION_SYS_PWR_REG			S5P_PMUREG(0x1184)
#define EXYNOS5_TOP_PWR_SYS_PWR_REG				S5P_PMUREG(0x1188)
#define EXYNOS5_TOP_BUS_SYSMEM_SYS_PWR_REG			S5P_PMUREG(0x1190)
#define EXYNOS5_TOP_RETENTION_SYSMEM_SYS_PWR_REG		S5P_PMUREG(0x1194)
#define EXYNOS5_TOP_PWR_SYSMEM_SYS_PWR_REG			S5P_PMUREG(0x1198)
#define EXYNOS5_LOGIC_RESET_SYS_PWR_REG				S5P_PMUREG(0x11A0)
#define EXYNOS5_OSCCLK_GATE_SYS_PWR_REG				S5P_PMUREG(0x11A4)
#define EXYNOS5_LOGIC_RESET_SYSMEM_SYS_PWR_REG			S5P_PMUREG(0x11B0)
#define EXYNOS5_OSCCLK_GATE_SYSMEM_SYS_PWR_REG			S5P_PMUREG(0x11B4)
#define EXYNOS5_G2D_MEM_SYS_PWR_REG				S5P_PMUREG(0x11C8)
#define EXYNOS5_SDMMC_MEM_SYS_PWR_REG				S5P_PMUREG(0x11D0)
#define EXYNOS5_CSSYS_MEM_SYS_PWR_REG				S5P_PMUREG(0x11D4)
#define EXYNOS5_SECSS_MEM_SYS_PWR_REG				S5P_PMUREG(0x11D8)
#define EXYNOS5_ROTATOR_MEM_SYS_PWR_REG				S5P_PMUREG(0x11DC)
#define EXYNOS5_INTRAM_MEM_SYS_PWR_REG				S5P_PMUREG(0x11E0)
#define EXYNOS5_INTROM_MEM_SYS_PWR_REG				S5P_PMUREG(0x11E4)
#define EXYNOS5_JPEG_MEM_SYS_PWR_REG				S5P_PMUREG(0x11E8)
#define EXYNOS5_HSI_MEM_SYS_PWR_REG				S5P_PMUREG(0x11EC)
#define EXYNOS5_MCUIOP_MEM_SYS_PWR_REG				S5P_PMUREG(0x11F4)
#define EXYNOS5_PAD_RETENTION_DRAM_SYS_PWR_REG			S5P_PMUREG(0x1200)
#define EXYNOS5_PAD_RETENTION_MAU_SYS_PWR_REG			S5P_PMUREG(0x1204)
#define EXYNOS5_PAD_RETENTION_GPIO_SYS_PWR_REG			S5P_PMUREG(0x1220)
#define EXYNOS5_PAD_RETENTION_UART_SYS_PWR_REG			S5P_PMUREG(0x1224)
#define EXYNOS5_PAD_RETENTION_MMCA_SYS_PWR_REG			S5P_PMUREG(0x1228)
#define EXYNOS5_PAD_RETENTION_MMCB_SYS_PWR_REG			S5P_PMUREG(0x122C)
#define EXYNOS5_PAD_RETENTION_EBIA_SYS_PWR_REG			S5P_PMUREG(0x1230)
#define EXYNOS5_PAD_RETENTION_EBIB_SYS_PWR_REG			S5P_PMUREG(0x1234)
#define EXYNOS5_PAD_RETENTION_SPI_SYS_PWR_REG			S5P_PMUREG(0x1238)
#define EXYNOS5_PAD_RETENTION_GPIO_SYSMEM_SYS_PWR_REG		S5P_PMUREG(0x123C)
#define EXYNOS5_PAD_ISOLATION_SYS_PWR_REG			S5P_PMUREG(0x1240)
#define EXYNOS5_PAD_ISOLATION_SYSMEM_SYS_PWR_REG		S5P_PMUREG(0x1250)
#define EXYNOS5_PAD_ALV_SEL_SYS_PWR_REG				S5P_PMUREG(0x1260)
#define EXYNOS5_XUSBXTI_SYS_PWR_REG				S5P_PMUREG(0x1280)
#define EXYNOS5_XXTI_SYS_PWR_REG				S5P_PMUREG(0x1284)
#define EXYNOS5_EXT_REGULATOR_SYS_PWR_REG			S5P_PMUREG(0x12C0)
#define EXYNOS5_GPIO_MODE_SYS_PWR_REG				S5P_PMUREG(0x1300)
#define EXYNOS5_GPIO_MODE_SYSMEM_SYS_PWR_REG			S5P_PMUREG(0x1320)
#define EXYNOS5_GPIO_MODE_MAU_SYS_PWR_REG			S5P_PMUREG(0x1340)
#define EXYNOS5_TOP_ASB_RESET_SYS_PWR_REG			S5P_PMUREG(0x1344)
#define EXYNOS5_TOP_ASB_ISOLATION_SYS_PWR_REG			S5P_PMUREG(0x1348)
#define EXYNOS5_GSCL_SYS_PWR_REG				S5P_PMUREG(0x1400)
#define EXYNOS5_ISP_SYS_PWR_REG					S5P_PMUREG(0x1404)
#define EXYNOS5_MFC_SYS_PWR_REG					S5P_PMUREG(0x1408)
#define EXYNOS5_G3D_SYS_PWR_REG					S5P_PMUREG(0x140C)
#define EXYNOS5_DISP0_SYS_PWR_REG				S5P_PMUREG(0x1410)
#define EXYNOS5_DISP1_SYS_PWR_REG				S5P_PMUREG(0x1414)
#define EXYNOS5_MAU_SYS_PWR_REG					S5P_PMUREG(0x1418)
#define EXYNOS5_GPS_SYS_PWR_REG					S5P_PMUREG(0x141C)
#define EXYNOS5_CMU_CLKSTOP_GSCL_SYS_PWR_REG			S5P_PMUREG(0x1480)
#define EXYNOS5_CMU_CLKSTOP_ISP_SYS_PWR_REG			S5P_PMUREG(0x1484)
#define EXYNOS5_CMU_CLKSTOP_MFC_SYS_PWR_REG			S5P_PMUREG(0x1488)
#define EXYNOS5_CMU_CLKSTOP_G3D_SYS_PWR_REG			S5P_PMUREG(0x148C)
#define EXYNOS5_CMU_CLKSTOP_DISP1_SYS_PWR_REG			S5P_PMUREG(0x1494)
#define EXYNOS5_CMU_CLKSTOP_MAU_SYS_PWR_REG			S5P_PMUREG(0x1498)
#define EXYNOS5_CMU_CLKSTOP_GPS_SYS_PWR_REG			S5P_PMUREG(0x149C)
#define EXYNOS5_CMU_SYSCLK_GSCL_SYS_PWR_REG			S5P_PMUREG(0x14C0)
#define EXYNOS5_CMU_SYSCLK_ISP_SYS_PWR_REG			S5P_PMUREG(0x14C4)
#define EXYNOS5_CMU_SYSCLK_MFC_SYS_PWR_REG			S5P_PMUREG(0x14C8)
#define EXYNOS5_CMU_SYSCLK_G3D_SYS_PWR_REG			S5P_PMUREG(0x14CC)
#define EXYNOS5_CMU_SYSCLK_DISP1_SYS_PWR_REG			S5P_PMUREG(0x14D4)
#define EXYNOS5_CMU_SYSCLK_MAU_SYS_PWR_REG			S5P_PMUREG(0x14D8)
#define EXYNOS5_CMU_SYSCLK_GPS_SYS_PWR_REG			S5P_PMUREG(0x14DC)
#define EXYNOS5_CMU_SCLKSTOP_GSCL_SYS_PWR_REG			S5P_PMUREG(0x1500)
#define EXYNOS5_CMU_SCLKSTOP_ISP_SYS_PWR_REG			S5P_PMUREG(0x1504)
#define EXYNOS5_CMU_SCLKSTOP_MFC_SYS_PWR_REG			S5P_PMUREG(0x1508)
#define EXYNOS5_CMU_SCLKSTOP_G3D_SYS_PWR_REG			S5P_PMUREG(0x150C)
#define EXYNOS5_CMU_SCLKSTOP_DISP1_SYS_PWR_REG			S5P_PMUREG(0x1514)
#define EXYNOS5_CMU_SCLKSTOP_MAU_SYS_PWR_REG			S5P_PMUREG(0x1518)
#define EXYNOS5_CMU_SCLKSTOP_GPS_SYS_PWR_REG			S5P_PMUREG(0x151C)
#define EXYNOS5_CMU_RESET_GSCL_SYS_PWR_REG			S5P_PMUREG(0x1580)
#define EXYNOS5_CMU_RESET_ISP_SYS_PWR_REG			S5P_PMUREG(0x1584)
#define EXYNOS5_CMU_RESET_MFC_SYS_PWR_REG			S5P_PMUREG(0x1588)
#define EXYNOS5_CMU_RESET_G3D_SYS_PWR_REG			S5P_PMUREG(0x158C)
#define EXYNOS5_CMU_RESET_DISP1_SYS_PWR_REG			S5P_PMUREG(0x1594)
#define EXYNOS5_CMU_RESET_MAU_SYS_PWR_REG			S5P_PMUREG(0x1598)
#define EXYNOS5_CMU_RESET_GPS_SYS_PWR_REG			S5P_PMUREG(0x159C)

/* Definition for XXX_OPTION */
#define EXYNOS5_OPTION_USE_STANDBYWFE				(1 << 24)
#define EXYNOS5_OPTION_USE_STANDBYWFI				(1 << 16)
#define EXYNOS5_OPTION_USE_RETENTION				(1 << 4)
#define EXYNOS5_USE_SC_FEEDBACK					(1 << 1)
#define EXYNOS5_USE_SC_COUNTER					(1 << 0)

#define EXYNOS5_ARM_CORE0_CONFIGURATION				S5P_PMUREG(0x2000)
#define EXYNOS5_ARM_CORE0_STATUS				S5P_PMUREG(0x2004)
#define EXYNOS5_ARM_CORE0_OPTION				S5P_PMUREG(0x2008)
#define EXYNOS5_DIS_IRQ_ARM_CORE0_LOCAL_CONFIGURATION		S5P_PMUREG(0x2020)
#define EXYNOS5_DIS_IRQ_ARM_CORE0_LOCAL_STATUS			S5P_PMUREG(0x2024)
#define EXYNOS5_DIS_IRQ_ARM_CORE0_LOCAL_OPTION			S5P_PMUREG(0x2028)
#define EXYNOS5_DIS_IRQ_ARM_CORE0_CENTRAL_CONFIGURATION		S5P_PMUREG(0x2040)
#define EXYNOS5_DIS_IRQ_ARM_CORE0_CENTRAL_STATUS		S5P_PMUREG(0x2044)
#define EXYNOS5_DIS_IRQ_ARM_CORE0_CENTRAL_OPTION		S5P_PMUREG(0x2048)
#define EXYNOS5_ARM_CORE1_CONFIGURATION				S5P_PMUREG(0x2080)
#define EXYNOS5_ARM_CORE1_STATUS				S5P_PMUREG(0x2084)
#define EXYNOS5_ARM_CORE1_OPTION				S5P_PMUREG(0x2088)
#define EXYNOS5_DIS_IRQ_ARM_CORE1_LOCAL_CONFIGURATION		S5P_PMUREG(0x20A0)
#define EXYNOS5_DIS_IRQ_ARM_CORE1_LOCAL_STATUS			S5P_PMUREG(0x20A4)
#define EXYNOS5_DIS_IRQ_ARM_CORE1_LOCAL_OPTION			S5P_PMUREG(0x20A8)
#define EXYNOS5_DIS_IRQ_ARM_CORE1_CENTRAL_CONFIGURATION		S5P_PMUREG(0x20C0)
#define EXYNOS5_DIS_IRQ_ARM_CORE1_CENTRAL_STATUS		S5P_PMUREG(0x20C4)
#define EXYNOS5_DIS_IRQ_ARM_CORE1_CENTRAL_OPTION		S5P_PMUREG(0x20C8)
#define EXYNOS5_FSYS_ARM_CONFIGURATION				S5P_PMUREG(0x2200)
#define EXYNOS5_FSYS_ARM_STATUS					S5P_PMUREG(0x2204)
#define EXYNOS5_FSYS_ARM_OPTION					S5P_PMUREG(0x2208)
#define EXYNOS5_DIS_IRQ_FSYS_ARM_LOCAL_CONFIGURATION		S5P_PMUREG(0x2220)
#define EXYNOS5_DIS_IRQ_FSYS_ARM_LOCAL_STATUS			S5P_PMUREG(0x2224)
#define EXYNOS5_DIS_IRQ_FSYS_ARM_LOCAL_OPTION			S5P_PMUREG(0x2228)
#define EXYNOS5_DIS_IRQ_FSYS_ARM_CENTRAL_CONFIGURATION		S5P_PMUREG(0x2240)
#define EXYNOS5_DIS_IRQ_FSYS_ARM_CENTRAL_STATUS			S5P_PMUREG(0x2244)
#define EXYNOS5_DIS_IRQ_FSYS_ARM_CENTRAL_OPTION			S5P_PMUREG(0x2248)
#define EXYNOS5_ISP_ARM_CONFIGURATION				S5P_PMUREG(0x2280)
#define EXYNOS5_ISP_ARM_STATUS					S5P_PMUREG(0x2284)
#define EXYNOS5_ISP_ARM_OPTION					S5P_PMUREG(0x2288)

#define EXYNOS5_ISP_ARM_ENABLE					(1 << 15)

#define EXYNOS5_DIS_IRQ_ISP_ARM_LOCAL_CONFIGURATION		S5P_PMUREG(0x22A0)
#define EXYNOS5_DIS_IRQ_ISP_ARM_LOCAL_STATUS			S5P_PMUREG(0x22A4)
#define EXYNOS5_DIS_IRQ_ISP_ARM_LOCAL_OPTION			S5P_PMUREG(0x22A8)
#define EXYNOS5_DIS_IRQ_ISP_ARM_CENTRAL_CONFIGURATION		S5P_PMUREG(0x22C0)
#define EXYNOS5_DIS_IRQ_ISP_ARM_CENTRAL_STATUS			S5P_PMUREG(0x22C4)
#define EXYNOS5_DIS_IRQ_ISP_ARM_CENTRAL_OPTION			S5P_PMUREG(0x22C8)
#define EXYNOS5_ARM_COMMON_CONFIGURATION			S5P_PMUREG(0x2400)
#define EXYNOS5_ARM_COMMON_STATUS				S5P_PMUREG(0x2404)
#define EXYNOS5_ARM_COMMON_OPTION				S5P_PMUREG(0x2408)

#define EXYNOS5_MANUAL_L2RSTDISABLE_CONTROL			(1 << 2)
#define EXYNOS5_SKIP_DEACTIVATE_ACEACP_IN_PWDN			(1 << 7)

#define EXYNOS5_ARM_L2_CONFIGURATION				S5P_PMUREG(0x2600)
#define EXYNOS5_ARM_L2_STATUS					S5P_PMUREG(0x2604)
#define EXYNOS5_ARM_L2_OPTION					S5P_PMUREG(0x2608)
#define EXYNOS5_CMU_ACLKSTOP_CONFIGURATION			S5P_PMUREG(0x2800)
#define EXYNOS5_CMU_ACLKSTOP_STATUS				S5P_PMUREG(0x2804)
#define EXYNOS5_CMU_ACLKSTOP_OPTION				S5P_PMUREG(0x2808)
#define EXYNOS5_CMU_SCLKSTOP_CONFIGURATION			S5P_PMUREG(0x2820)
#define EXYNOS5_CMU_SCLKSTOP_STATUS				S5P_PMUREG(0x2824)
#define EXYNOS5_CMU_SCLKSTOP_OPTION				S5P_PMUREG(0x2828)
#define EXYNOS5_CMU_RESET_CONFIGURATION				S5P_PMUREG(0x2860)
#define EXYNOS5_CMU_RESET_STATUS				S5P_PMUREG(0x2864)
#define EXYNOS5_CMU_RESET_OPTION				S5P_PMUREG(0x2868)
#define EXYNOS5_CMU_ACLKSTOP_SYSMEM_CONFIGURATION		S5P_PMUREG(0x2900)
#define EXYNOS5_CMU_ACLKSTOP_SYSMEM_STATUS			S5P_PMUREG(0x2904)
#define EXYNOS5_CMU_ACLKSTOP_SYSMEM_OPTION			S5P_PMUREG(0x2908)
#define EXYNOS5_CMU_SCLKSTOP_SYSMEM_CONFIGURATION		S5P_PMUREG(0x2920)
#define EXYNOS5_CMU_SCLKSTOP_SYSMEM_STATUS			S5P_PMUREG(0x2924)
#define EXYNOS5_CMU_SCLKSTOP_SYSMEM_OPTION			S5P_PMUREG(0x2928)
#define EXYNOS5_CMU_RESET_SYSMEM_CONFIGURATION			S5P_PMUREG(0x2960)
#define EXYNOS5_CMU_RESET_SYSMEM_STATUS				S5P_PMUREG(0x2964)
#define EXYNOS5_CMU_RESET_SYSMEM_OPTION				S5P_PMUREG(0x2968)
#define EXYNOS5_DRAM_FREQ_DOWN_CONFIGURATION			S5P_PMUREG(0x2980)
#define EXYNOS5_DRAM_FREQ_DOWN_STATUS				S5P_PMUREG(0x2984)
#define EXYNOS5_DRAM_FREQ_DOWN_OPTION				S5P_PMUREG(0x2988)
#define EXYNOS5_DDRPHY_DLLOFF_CONFIGURATION			S5P_PMUREG(0x29A0)
#define EXYNOS5_DDRPHY_DLLOFF_STATUS				S5P_PMUREG(0x29A4)
#define EXYNOS5_DDRPHY_DLLOFF_OPTION				S5P_PMUREG(0x29A8)
#define EXYNOS5_DDRPHY_DLLLOCK_CONFIGURATION			S5P_PMUREG(0x29C0)
#define EXYNOS5_DDRPHY_DLLLOCK_STATUS				S5P_PMUREG(0x29C4)
#define EXYNOS5_DDRPHY_DLLLOCK_OPTION				S5P_PMUREG(0x29C8)
#define EXYNOS5_APLL_SYSCLK_CONFIGURATION			S5P_PMUREG(0x2A00)
#define EXYNOS5_APLL_SYSCLK_STATUS				S5P_PMUREG(0x2A04)
#define EXYNOS5_APLL_SYSCLK_OPTION				S5P_PMUREG(0x2A08)
#define EXYNOS5_MPLL_SYSCLK_STATUS				S5P_PMUREG(0x2A24)
#define EXYNOS5_MPLL_SYSCLK_OPTION				S5P_PMUREG(0x2A28)
#define EXYNOS5_VPLL_SYSCLK_CONFIGURATION			S5P_PMUREG(0x2A40)
#define EXYNOS5_VPLL_SYSCLK_STATUS				S5P_PMUREG(0x2A44)
#define EXYNOS5_VPLL_SYSCLK_OPTION				S5P_PMUREG(0x2A48)
#define EXYNOS5_EPLL_SYSCLK_CONFIGURATION			S5P_PMUREG(0x2A60)
#define EXYNOS5_EPLL_SYSCLK_STATUS				S5P_PMUREG(0x2A64)
#define EXYNOS5_EPLL_SYSCLK_OPTION				S5P_PMUREG(0x2A68)
#define EXYNOS5_BPLL_SYSCLK_CONFIGURATION			S5P_PMUREG(0x2A80)
#define EXYNOS5_BPLL_SYSCLK_STATUS				S5P_PMUREG(0x2A84)
#define EXYNOS5_BPLL_SYSCLK_OPTION				S5P_PMUREG(0x2A88)
#define EXYNOS5_CPLL_SYSCLK_CONFIGURATION			S5P_PMUREG(0x2AA0)
#define EXYNOS5_CPLL_SYSCLK_STATUS				S5P_PMUREG(0x2AA4)
#define EXYNOS5_CPLL_SYSCLK_OPTION				S5P_PMUREG(0x2AA8)
#define EXYNOS5_MPLLUSER_SYSCLK_CONFIGURATION			S5P_PMUREG(0x2B20)
#define EXYNOS5_MPLLUSER_SYSCLK_STATUS				S5P_PMUREG(0x2B24)
#define EXYNOS5_MPLLUSER_SYSCLK_OPTION				S5P_PMUREG(0x2B28)
#define EXYNOS5_BPLLUSER_SYSCLK_CONFIGURATION			S5P_PMUREG(0x2B80)
#define EXYNOS5_BPLLUSER_SYSCLK_STATUS				S5P_PMUREG(0x2B84)
#define EXYNOS5_BPLLUSER_SYSCLK_OPTION				S5P_PMUREG(0x2B88)
#define EXYNOS5_TOP_BUS_CONFIGURATION				S5P_PMUREG(0x2C00)
#define EXYNOS5_TOP_BUS_STATUS					S5P_PMUREG(0x2C04)
#define EXYNOS5_TOP_BUS_OPTION					S5P_PMUREG(0x2C08)
#define EXYNOS5_TOP_RETENTION_CONFIGURATION			S5P_PMUREG(0x2C20)
#define EXYNOS5_TOP_RETENTION_STATUS				S5P_PMUREG(0x2C24)
#define EXYNOS5_TOP_RETENTION_OPTION				S5P_PMUREG(0x2C28)
#define EXYNOS5_TOP_PWR_CONFIGURATION				S5P_PMUREG(0x2C40)
#define EXYNOS5_TOP_PWR_STATUS					S5P_PMUREG(0x2C44)
#define EXYNOS5_TOP_PWR_OPTION					S5P_PMUREG(0x2C48)
#define EXYNOS5_TOP_BUS_SYSMEM_CONFIGURATION			S5P_PMUREG(0x2C80)
#define EXYNOS5_TOP_BUS_SYSMEM_STATUS				S5P_PMUREG(0x2C84)
#define EXYNOS5_TOP_BUS_SYSMEM_OPTION				S5P_PMUREG(0x2C88)
#define EXYNOS5_TOP_RETENTION_SYSMEM_CONFIGURATION		S5P_PMUREG(0x2CA0)
#define EXYNOS5_TOP_RETENTION_SYSMEM_STATUS			S5P_PMUREG(0x2CA4)
#define EXYNOS5_TOP_RETENTION_SYSMEM_OPTION			S5P_PMUREG(0x2CA8)
#define EXYNOS5_TOP_PWR_SYSMEM_CONFIGURATION			S5P_PMUREG(0x2CC0)
#define EXYNOS5_TOP_PWR_SYSMEM_STATUS				S5P_PMUREG(0x2CC4)
#define EXYNOS5_TOP_PWR_SYSMEM_OPTION				S5P_PMUREG(0x2CC8)
#define EXYNOS5_LOGIC_RESET_CONFIGURATION			S5P_PMUREG(0x2D00)
#define EXYNOS5_LOGIC_RESET_STATUS				S5P_PMUREG(0x2D04)
#define EXYNOS5_LOGIC_RESET_OPTION				S5P_PMUREG(0x2D08)
#define EXYNOS5_OSCCLK_GATE_CONFIGURATION			S5P_PMUREG(0x2D20)
#define EXYNOS5_OSCCLK_GATE_STATUS				S5P_PMUREG(0x2D24)
#define EXYNOS5_OSCCLK_GATE_OPTION				S5P_PMUREG(0x2D28)
#define EXYNOS5_LOGIC_RESET_SYSMEM_CONFIGURATION		S5P_PMUREG(0x2D80)
#define EXYNOS5_LOGIC_RESET_SYSMEM_STATUS			S5P_PMUREG(0x2D84)
#define EXYNOS5_LOGIC_RESET_SYSMEM_OPTION			S5P_PMUREG(0x2D88)
#define EXYNOS5_OSCCLK_GATE_SYSMEM_CONFIGURATION		S5P_PMUREG(0x2DA0)
#define EXYNOS5_OSCCLK_GATE_SYSMEM_STATUS			S5P_PMUREG(0x2DA4)
#define EXYNOS5_OSCCLK_GATE_SYSMEM_OPTION			S5P_PMUREG(0x2DA8)
#define EXYNOS5_OneNANDXL_MEM_CONFIGURATION			S5P_PMUREG(0x2E00)
#define EXYNOS5_OneNANDXL_MEM_STATUS				S5P_PMUREG(0x2E04)
#define EXYNOS5_OneNANDXL_MEM_OPTION				S5P_PMUREG(0x2E08)
#define EXYNOS5_G2D_MEM_CONFIGURATION				S5P_PMUREG(0x2E40)
#define EXYNOS5_G2D_MEM_STATUS					S5P_PMUREG(0x2E44)
#define EXYNOS5_G2D_MEM_OPTION					S5P_PMUREG(0x2E48)
#define EXYNOS5_USBDEV_MEM_CONFIGURATION			S5P_PMUREG(0x2E60)
#define EXYNOS5_USBDEV_MEM_STATUS				S5P_PMUREG(0x2E64)
#define EXYNOS5_USBDEV_MEM_OPTION				S5P_PMUREG(0x2E68)
#define EXYNOS5_SDMMC_MEM_CONFIGURATION				S5P_PMUREG(0x2E80)
#define EXYNOS5_SDMMC_MEM_STATUS				S5P_PMUREG(0x2E84)
#define EXYNOS5_SDMMC_MEM_OPTION				S5P_PMUREG(0x2E88)
#define EXYNOS5_CSSYS_MEM_CONFIGURATION				S5P_PMUREG(0x2EA0)
#define EXYNOS5_CSSYS_MEM_STATUS				S5P_PMUREG(0x2EA4)
#define EXYNOS5_CSSYS_MEM_OPTION				S5P_PMUREG(0x2EA8)
#define EXYNOS5_SECSS_MEM_CONFIGURATION				S5P_PMUREG(0x2EC0)
#define EXYNOS5_SECSS_MEM_STATUS				S5P_PMUREG(0x2EC4)
#define EXYNOS5_SECSS_MEM_OPTION				S5P_PMUREG(0x2EC8)
#define EXYNOS5_ROTATOR_MEM_CONFIGURATION			S5P_PMUREG(0x2EE0)
#define EXYNOS5_ROTATOR_MEM_STATUS				S5P_PMUREG(0x2EE4)
#define EXYNOS5_ROTATOR_MEM_OPTION				S5P_PMUREG(0x2EE8)
#define EXYNOS5_INTRAM_MEM_CONFIGURATION			S5P_PMUREG(0x2F00)
#define EXYNOS5_INTRAM_MEM_STATUS				S5P_PMUREG(0x2F04)
#define EXYNOS5_INTRAM_MEM_OPTION				S5P_PMUREG(0x2F08)
#define EXYNOS5_INTROM_MEM_CONFIGURATION			S5P_PMUREG(0x2F20)
#define EXYNOS5_INTROM_MEM_STATUS				S5P_PMUREG(0x2F24)
#define EXYNOS5_INTROM_MEM_OPTION				S5P_PMUREG(0x2F28)
#define EXYNOS5_JPEG_MEM_CONFIGURATION				S5P_PMUREG(0x2F40)
#define EXYNOS5_JPEG_MEM_STATUS					S5P_PMUREG(0x2F44)
#define EXYNOS5_JPEG_MEM_OPTION					S5P_PMUREG(0x2F48)
#define EXYNOS5_HSI_MEM_CONFIGURATION				S5P_PMUREG(0x2F60)
#define EXYNOS5_HSI_MEM_STATUS					S5P_PMUREG(0x2F64)
#define EXYNOS5_HSI_MEM_OPTION					S5P_PMUREG(0x2F68)
#define EXYNOS5_MCUIOP_MEM_CONFIGURATION			S5P_PMUREG(0x2FA0)
#define EXYNOS5_MCUIOP_MEM_STATUS				S5P_PMUREG(0x2FA4)
#define EXYNOS5_MCUIOP_MEM_OPTION				S5P_PMUREG(0x2FA8)
#define EXYNOS5_PAD_RETENTION_DRAM_CONFIGURATION		S5P_PMUREG(0x3000)
#define EXYNOS5_PAD_RETENTION_DRAM_STATUS			S5P_PMUREG(0x3004)
#define EXYNOS5_PAD_RETENTION_DRAM_OPTION			S5P_PMUREG(0x3008)
#define EXYNOS5_PAD_RETENTION_MAU_CONFIGURATION			S5P_PMUREG(0x3020)
#define EXYNOS5_PAD_RETENTION_MAU_STATUS			S5P_PMUREG(0x3024)
#define EXYNOS5_PAD_RETENTION_MAU_OPTION			S5P_PMUREG(0x3028)
#define EXYNOS5_PAD_RETENTION_GPIO_CONFIGURATION		S5P_PMUREG(0x3100)
#define EXYNOS5_PAD_RETENTION_GPIO_STATUS			S5P_PMUREG(0x3104)
#define EXYNOS5_PAD_RETENTION_GPIO_OPTION			S5P_PMUREG(0x3108)
#define EXYNOS5_PAD_RETENTION_UART_CONFIGURATION		S5P_PMUREG(0x3120)
#define EXYNOS5_PAD_RETENTION_UART_STATUS			S5P_PMUREG(0x3124)
#define EXYNOS5_PAD_RETENTION_UART_OPTION			S5P_PMUREG(0x3128)
#define EXYNOS5_PAD_RETENTION_MMCA_CONFIGURATION		S5P_PMUREG(0x3140)
#define EXYNOS5_PAD_RETENTION_MMCA_STATUS			S5P_PMUREG(0x3144)
#define EXYNOS5_PAD_RETENTION_MMCA_OPTION			S5P_PMUREG(0x3148)
#define EXYNOS5_PAD_RETENTION_MMCB_CONFIGURATION		S5P_PMUREG(0x3160)
#define EXYNOS5_PAD_RETENTION_MMCB_STATUS			S5P_PMUREG(0x3164)
#define EXYNOS5_PAD_RETENTION_MMCB_OPTION			S5P_PMUREG(0x3168)
#define EXYNOS5_PAD_RETENTION_EBIA_CONFIGURATION		S5P_PMUREG(0x3180)
#define EXYNOS5_PAD_RETENTION_EBIA_STATUS			S5P_PMUREG(0x3184)
#define EXYNOS5_PAD_RETENTION_EBIA_OPTION			S5P_PMUREG(0x3188)
#define EXYNOS5_PAD_RETENTION_EBIB_CONFIGURATION		S5P_PMUREG(0x31A0)
#define EXYNOS5_PAD_RETENTION_EBIB_STATUS			S5P_PMUREG(0x31A4)
#define EXYNOS5_PAD_RETENTION_EBIB_OPTION			S5P_PMUREG(0x31A8)
#define EXYNOS5_PAD_RETENTION_SPI_CONFIGURATION			S5P_PMUREG(0x31C0)
#define EXYNOS5_PAD_RETENTION_SPI_STATUS			S5P_PMUREG(0x31C4)
#define EXYNOS5_PAD_RETENTION_SPI_OPTION			S5P_PMUREG(0x31C8)
#define EXYNOS5_PAD_RETENTION_GPIO_SYSMEM_CONFIGURATION		S5P_PMUREG(0x31E0)
#define EXYNOS5_PAD_RETENTION_GPIO_SYSMEM_STATUS		S5P_PMUREG(0x31E4)
#define EXYNOS5_PAD_RETENTION_GPIO_SYSMEM_OPTION		S5P_PMUREG(0x31E8)
#define EXYNOS5_PAD_ISOLATION_CONFIGURATION			S5P_PMUREG(0x3200)
#define EXYNOS5_PAD_ISOLATION_STATUS				S5P_PMUREG(0x3204)
#define EXYNOS5_PAD_ISOLATION_OPTION				S5P_PMUREG(0x3208)
#define EXYNOS5_PAD_ISOLATION_SYSMEM_CONFIGURATION		S5P_PMUREG(0x3280)
#define EXYNOS5_PAD_ISOLATION_SYSMEM_STATUS			S5P_PMUREG(0x3284)
#define EXYNOS5_PAD_ISOLATION_SYSMEM_OPTION			S5P_PMUREG(0x3288)
#define EXYNOS5_PAD_ALV_SEL_CONFIGURATION			S5P_PMUREG(0x3300)
#define EXYNOS5_PAD_ALV_SEL_STATUS				S5P_PMUREG(0x3304)
#define EXYNOS5_PAD_ALV_SEL_OPTION0				S5P_PMUREG(0x3308)
#define EXYNOS5_PS_HOLD_CONTROL					S5P_PMUREG(0x330C)
#define EXYNOS5_XUSBXTI_CONFIGURATION				S5P_PMUREG(0x3400)
#define EXYNOS5_XUSBXTI_STATUS					S5P_PMUREG(0x3404)
#define EXYNOS5_XUSBXTI_OPTION					S5P_PMUREG(0x3408)
#define EXYNOS5_XUSBXTI_DURATION3				S5P_PMUREG(0x341C)
#define EXYNOS5_XXTI_CONFIGURATION				S5P_PMUREG(0x3420)
#define EXYNOS5_XXTI_STATUS					S5P_PMUREG(0x3424)
#define EXYNOS5_XXTI_OPTION					S5P_PMUREG(0x3428)
#define EXYNOS5_XXTI_DURATION3					S5P_PMUREG(0x343C)
#define EXYNOS5_EXT_REGULATOR_CONFIGURATION			S5P_PMUREG(0x3600)
#define EXYNOS5_EXT_REGULATOR_STATUS				S5P_PMUREG(0x3604)
#define EXYNOS5_EXT_REGULATOR_OPTION				S5P_PMUREG(0x3608)
#define EXYNOS5_EXT_REGULATOR_DURATION3				S5P_PMUREG(0x361C)
#define EXYNOS5_GPIO_MODE_CONFIGURATION				S5P_PMUREG(0x3800)
#define EXYNOS5_GPIO_MODE_STATUS				S5P_PMUREG(0x3804)
#define EXYNOS5_GPIO_MODE_OPTION				S5P_PMUREG(0x3808)
#define EXYNOS5_GPIO_MODE_SYSMEM_CONFIGURATION			S5P_PMUREG(0x3900)
#define EXYNOS5_GPIO_MODE_SYSMEM_STATUS				S5P_PMUREG(0x3904)
#define EXYNOS5_GPIO_MODE_SYSMEM_OPTION				S5P_PMUREG(0x3908)
#define EXYNOS5_GPIO_MODE_MAU_CONFIGURATION			S5P_PMUREG(0x39E0)
#define EXYNOS5_GPIO_MODE_MAU_STATUS				S5P_PMUREG(0x39E4)
#define EXYNOS5_GPIO_MODE_MAU_OPTION				S5P_PMUREG(0x39E8)
#define EXYNOS5_TOP_ASB_RESET_CONFIGURATION			S5P_PMUREG(0x3A00)
#define EXYNOS5_TOP_ASB_RESET_STATUS				S5P_PMUREG(0x3A04)
#define EXYNOS5_TOP_ASB_RESET_OPTION				S5P_PMUREG(0x3A08)
#define EXYNOS5_TOP_ASB_ISOLATION_CONFIGURATION			S5P_PMUREG(0x3A20)
#define EXYNOS5_TOP_ASB_ISOLATION_STATUS			S5P_PMUREG(0x3A24)
#define EXYNOS5_TOP_ASB_ISOLATION_OPTION			S5P_PMUREG(0x3A28)
#define EXYNOS5_GSCL_CONFIGURATION				S5P_PMUREG(0x4000)
#define EXYNOS5_GSCL_STATUS					S5P_PMUREG(0x4004)
#define EXYNOS5_GSCL_OPTION					S5P_PMUREG(0x4008)
#define EXYNOS5_ISP_CONFIGURATION				S5P_PMUREG(0x4020)
#define EXYNOS5_ISP_STATUS					S5P_PMUREG(0x4024)
#define EXYNOS5_ISP_OPTION					S5P_PMUREG(0x4028)
#define EXYNOS5_MFC_CONFIGURATION				S5P_PMUREG(0x4040)
#define EXYNOS5_MFC_STATUS					S5P_PMUREG(0x4044)
#define EXYNOS5_MFC_OPTION					S5P_PMUREG(0x4048)
#define EXYNOS5_G3D_CONFIGURATION				S5P_PMUREG(0x4060)
#define EXYNOS5_G3D_STATUS					S5P_PMUREG(0x4064)
#define EXYNOS5_G3D_OPTION					S5P_PMUREG(0x4068)
#define EXYNOS5_DISP1_CONFIGURATION				S5P_PMUREG(0x40A0)
#define EXYNOS5_DISP1_STATUS					S5P_PMUREG(0x40A4)
#define EXYNOS5_DISP1_OPTION					S5P_PMUREG(0x40A8)
#define EXYNOS5_MAU_CONFIGURATION				S5P_PMUREG(0x40C0)
#define EXYNOS5_MAU_STATUS					S5P_PMUREG(0x40C4)
#define EXYNOS5_MAU_OPTION					S5P_PMUREG(0x40C8)
#define EXYNOS5_GPS_CONFIGURATION				S5P_PMUREG(0x40E0)
#define EXYNOS5_GPS_STATUS					S5P_PMUREG(0x40E4)
#define EXYNOS5_GPS_OPTION					S5P_PMUREG(0x40E8)
#define EXYNOS5_CMU_CLKSTOP_GSCL_CONFIGURATION			S5P_PMUREG(0x4400)
#define EXYNOS5_CMU_CLKSTOP_GSCL_STATUS				S5P_PMUREG(0x4404)
#define EXYNOS5_CMU_CLKSTOP_GSCL_OPTION				S5P_PMUREG(0x4408)
#define EXYNOS5_CMU_CLKSTOP_ISP_CONFIGURATION			S5P_PMUREG(0x4420)
#define EXYNOS5_CMU_CLKSTOP_ISP_STATUS				S5P_PMUREG(0x4424)
#define EXYNOS5_CMU_CLKSTOP_ISP_OPTION				S5P_PMUREG(0x4428)
#define EXYNOS5_CMU_CLKSTOP_MFC_CONFIGURATION			S5P_PMUREG(0x4440)
#define EXYNOS5_CMU_CLKSTOP_MFC_STATUS				S5P_PMUREG(0x4444)
#define EXYNOS5_CMU_CLKSTOP_MFC_OPTION				S5P_PMUREG(0x4448)
#define EXYNOS5_CMU_CLKSTOP_G3D_CONFIGURATION			S5P_PMUREG(0x4460)
#define EXYNOS5_CMU_CLKSTOP_G3D_STATUS				S5P_PMUREG(0x4464)
#define EXYNOS5_CMU_CLKSTOP_G3D_OPTION				S5P_PMUREG(0x4468)
#define EXYNOS5_CMU_CLKSTOP_DISP1_CONFIGURATION			S5P_PMUREG(0x44A0)
#define EXYNOS5_CMU_CLKSTOP_DISP1_STATUS			S5P_PMUREG(0x44A4)
#define EXYNOS5_CMU_CLKSTOP_DISP1_OPTION			S5P_PMUREG(0x44A8)
#define EXYNOS5_CMU_CLKSTOP_MAU_CONFIGURATION			S5P_PMUREG(0x44C0)
#define EXYNOS5_CMU_CLKSTOP_MAU_STATUS				S5P_PMUREG(0x44C4)
#define EXYNOS5_CMU_CLKSTOP_MAU_OPTION				S5P_PMUREG(0x44C8)
#define EXYNOS5_CMU_CLKSTOP_GPS_CONFIGURATION			S5P_PMUREG(0x44E0)
#define EXYNOS5_CMU_CLKSTOP_GPS_STATUS				S5P_PMUREG(0x44E4)
#define EXYNOS5_CMU_CLKSTOP_GPS_OPTION				S5P_PMUREG(0x44E8)
#define EXYNOS5_CMU_SYSCLK_GSCL_CONFIGURATION			S5P_PMUREG(0x4600)
#define EXYNOS5_CMU_SYSCLK_GSCL_STATUS				S5P_PMUREG(0x4604)
#define EXYNOS5_CMU_SYSCLK_GSCL_OPTION				S5P_PMUREG(0x4608)
#define EXYNOS5_CMU_SYSCLK_ISP_STATUS				S5P_PMUREG(0x4624)
#define EXYNOS5_CMU_SYSCLK_ISP_OPTION				S5P_PMUREG(0x4628)
#define EXYNOS5_CMU_SYSCLK_MFC_STATUS				S5P_PMUREG(0x4644)
#define EXYNOS5_CMU_SYSCLK_MFC_OPTION				S5P_PMUREG(0x4648)
#define EXYNOS5_CMU_SYSCLK_G3D_STATUS				S5P_PMUREG(0x4664)
#define EXYNOS5_CMU_SYSCLK_G3D_OPTION				S5P_PMUREG(0x4668)
#define EXYNOS5_CMU_SYSCLK_DISP1_STATUS				S5P_PMUREG(0x46A4)
#define EXYNOS5_CMU_SYSCLK_DISP1_OPTION				S5P_PMUREG(0x46A8)
#define EXYNOS5_CMU_SYSCLK_MAU_STATUS				S5P_PMUREG(0x46C4)
#define EXYNOS5_CMU_SYSCLK_MAU_OPTION				S5P_PMUREG(0x46C8)
#define EXYNOS5_CMU_SYSCLK_GPS_STATUS				S5P_PMUREG(0x46E4)
#define EXYNOS5_CMU_SYSCLK_GPS_OPTION				S5P_PMUREG(0x46E8)
#define EXYNOS5_CMU_RESET_GSCL_CONFIGURATION			S5P_PMUREG(0x4C00)
#define EXYNOS5_CMU_RESET_GSCL_STATUS				S5P_PMUREG(0x4C04)
#define EXYNOS5_CMU_RESET_GSCL_OPTION				S5P_PMUREG(0x4C08)
#define EXYNOS5_CMU_RESET_ISP_CONFIGURATION			S5P_PMUREG(0x4C20)
#define EXYNOS5_CMU_RESET_ISP_STATUS				S5P_PMUREG(0x4C24)
#define EXYNOS5_CMU_RESET_ISP_OPTION				S5P_PMUREG(0x4C28)
#define EXYNOS5_CMU_RESET_MFC_CONFIGURATION			S5P_PMUREG(0x4C40)
#define EXYNOS5_CMU_RESET_MFC_STATUS				S5P_PMUREG(0x4C44)
#define EXYNOS5_CMU_RESET_MFC_OPTION				S5P_PMUREG(0x4C48)
#define EXYNOS5_CMU_RESET_G3D_CONFIGURATION			S5P_PMUREG(0x4C60)
#define EXYNOS5_CMU_RESET_G3D_STATUS				S5P_PMUREG(0x4C64)
#define EXYNOS5_CMU_RESET_G3D_OPTION				S5P_PMUREG(0x4C68)
#define EXYNOS5_CMU_RESET_DISP0_CONFIGURATION			S5P_PMUREG(0x4C80)
#define EXYNOS5_CMU_RESET_DISP0_STATUS				S5P_PMUREG(0x4C84)
#define EXYNOS5_CMU_RESET_DISP0_OPTION				S5P_PMUREG(0x4C88)
#define EXYNOS5_CMU_RESET_DISP1_CONFIGURATION			S5P_PMUREG(0x4CA0)
#define EXYNOS5_CMU_RESET_DISP1_STATUS				S5P_PMUREG(0x4CA4)
#define EXYNOS5_CMU_RESET_DISP1_OPTION				S5P_PMUREG(0x4CA8)
#define EXYNOS5_CMU_RESET_MAU_CONFIGURATION			S5P_PMUREG(0x4CC0)
#define EXYNOS5_CMU_RESET_MAU_STATUS				S5P_PMUREG(0x4CC4)
#define EXYNOS5_CMU_RESET_MAU_OPTION				S5P_PMUREG(0x4CC8)
#define EXYNOS5_CMU_RESET_GPS_CONFIGURATION			S5P_PMUREG(0x4CE0)
#define EXYNOS5_CMU_RESET_GPS_STATUS				S5P_PMUREG(0x4CE4)
#define EXYNOS5_CMU_RESET_GPS_OPTION				S5P_PMUREG(0x4CE8)

#endif /* __ASM_ARCH_REGS_PMU5_H */
