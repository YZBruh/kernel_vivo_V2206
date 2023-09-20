/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2014-2020, The Linux Foundation. All rights reserved.
 */

#ifndef _QCOM_INLINE_CRYPTO_ENGINE_REGS_H_
#define _QCOM_INLINE_CRYPTO_ENGINE_REGS_H_

/* Register bits for ICE version */
#define ICE_CORE_CURRENT_MAJOR_VERSION 0x03

#define ICE_CORE_STEP_REV_MASK                0xFFFF
#define ICE_CORE_STEP_REV                0 /* bit 15-0 */
#define ICE_CORE_MAJOR_REV_MASK                0xFF000000
#define ICE_CORE_MAJOR_REV                24 /* bit 31-24 */
#define ICE_CORE_MINOR_REV_MASK                0xFF0000
#define ICE_CORE_MINOR_REV                16 /* bit 23-16 */

#define ICE_BIST_STATUS_MASK                (0xF0000000)        /* bits 28-31 */

#define ICE_FUSE_SETTING_MASK                        0x1
#define ICE_FORCE_HW_KEY0_SETTING_MASK                0x2
#define ICE_FORCE_HW_KEY1_SETTING_MASK                0x4

/* QCOM ICE Registers from SWI */
#define QCOM_ICE_REGS_CONTROL                        0x0000
#define QCOM_ICE_REGS_RESET                        0x0004
#define QCOM_ICE_REGS_VERSION                        0x0008
#define QCOM_ICE_REGS_FUSE_SETTING                0x0010
#define QCOM_ICE_REGS_PARAMETERS_1                0x0014
#define QCOM_ICE_REGS_PARAMETERS_2                0x0018
#define QCOM_ICE_REGS_PARAMETERS_3                0x001C
#define QCOM_ICE_REGS_PARAMETERS_4                0x0020
#define QCOM_ICE_REGS_PARAMETERS_5                0x0024


/* QCOM ICE v3.X only */
#define QCOM_ICE_GENERAL_ERR_STTS                0x0040
#define QCOM_ICE_INVALID_CCFG_ERR_STTS                0x0030
#define QCOM_ICE_GENERAL_ERR_MASK                0x0044


/* QCOM ICE v2.X only */
#define QCOM_ICE_REGS_NON_SEC_IRQ_STTS                0x0040
#define QCOM_ICE_REGS_NON_SEC_IRQ_MASK                0x0044


#define QCOM_ICE_REGS_NON_SEC_IRQ_CLR                0x0048
#define QCOM_ICE_REGS_STREAM1_ERROR_SYNDROME1        0x0050
#define QCOM_ICE_REGS_STREAM1_ERROR_SYNDROME2        0x0054
#define QCOM_ICE_REGS_STREAM2_ERROR_SYNDROME1        0x0058
#define QCOM_ICE_REGS_STREAM2_ERROR_SYNDROME2        0x005C
#define QCOM_ICE_REGS_STREAM1_BIST_ERROR_VEC        0x0060
#define QCOM_ICE_REGS_STREAM2_BIST_ERROR_VEC        0x0064
#define QCOM_ICE_REGS_STREAM1_BIST_FINISH_VEC        0x0068
#define QCOM_ICE_REGS_STREAM2_BIST_FINISH_VEC        0x006C
#define QCOM_ICE_REGS_BIST_STATUS                0x0070
#define QCOM_ICE_REGS_BYPASS_STATUS                0x0074
#define QCOM_ICE_REGS_ADVANCED_CONTROL                0x1000
#define QCOM_ICE_REGS_ENDIAN_SWAP                0x1004
#define QCOM_ICE_REGS_TEST_BUS_CONTROL                0x1010
#define QCOM_ICE_REGS_TEST_BUS_REG                0x1014
#define QCOM_ICE_REGS_STREAM1_COUNTERS1                0x1100
#define QCOM_ICE_REGS_STREAM1_COUNTERS2                0x1104
#define QCOM_ICE_REGS_STREAM1_COUNTERS3                0x1108
#define QCOM_ICE_REGS_STREAM1_COUNTERS4                0x110C
#define QCOM_ICE_REGS_STREAM1_COUNTERS5_MSB        0x1110
#define QCOM_ICE_REGS_STREAM1_COUNTERS5_LSB        0x1114
#define QCOM_ICE_REGS_STREAM1_COUNTERS6_MSB        0x1118
#define QCOM_ICE_REGS_STREAM1_COUNTERS6_LSB        0x111C
#define QCOM_ICE_REGS_STREAM1_COUNTERS7_MSB        0x1120
#define QCOM_ICE_REGS_STREAM1_COUNTERS7_LSB        0x1124
#define QCOM_ICE_REGS_STREAM1_COUNTERS8_MSB        0x1128
#define QCOM_ICE_REGS_STREAM1_COUNTERS8_LSB        0x112C
#define QCOM_ICE_REGS_STREAM1_COUNTERS9_MSB        0x1130
#define QCOM_ICE_REGS_STREAM1_COUNTERS9_LSB        0x1134
#define QCOM_ICE_REGS_STREAM2_COUNTERS1                0x1200
#define QCOM_ICE_REGS_STREAM2_COUNTERS2                0x1204
#define QCOM_ICE_REGS_STREAM2_COUNTERS3                0x1208
#define QCOM_ICE_REGS_STREAM2_COUNTERS4                0x120C
#define QCOM_ICE_REGS_STREAM2_COUNTERS5_MSB        0x1210
#define QCOM_ICE_REGS_STREAM2_COUNTERS5_LSB        0x1214
#define QCOM_ICE_REGS_STREAM2_COUNTERS6_MSB        0x1218
#define QCOM_ICE_REGS_STREAM2_COUNTERS6_LSB        0x121C
#define QCOM_ICE_REGS_STREAM2_COUNTERS7_MSB        0x1220
#define QCOM_ICE_REGS_STREAM2_COUNTERS7_LSB        0x1224
#define QCOM_ICE_REGS_STREAM2_COUNTERS8_MSB        0x1228
#define QCOM_ICE_REGS_STREAM2_COUNTERS8_LSB        0x122C
#define QCOM_ICE_REGS_STREAM2_COUNTERS9_MSB        0x1230
#define QCOM_ICE_REGS_STREAM2_COUNTERS9_LSB        0x1234

#define QCOM_ICE_STREAM1_PREMATURE_LBA_CHANGE                (1L << 0)
#define QCOM_ICE_STREAM2_PREMATURE_LBA_CHANGE                (1L << 1)
#define QCOM_ICE_STREAM1_NOT_EXPECTED_LBO                (1L << 2)
#define QCOM_ICE_STREAM2_NOT_EXPECTED_LBO                (1L << 3)
#define QCOM_ICE_STREAM1_NOT_EXPECTED_DUN                (1L << 4)
#define QCOM_ICE_STREAM2_NOT_EXPECTED_DUN                (1L << 5)
#define QCOM_ICE_STREAM1_NOT_EXPECTED_DUS                (1L << 6)
#define QCOM_ICE_STREAM2_NOT_EXPECTED_DUS                (1L << 7)
#define QCOM_ICE_STREAM1_NOT_EXPECTED_DBO                (1L << 8)
#define QCOM_ICE_STREAM2_NOT_EXPECTED_DBO                (1L << 9)
#define QCOM_ICE_STREAM1_NOT_EXPECTED_ENC_SEL                (1L << 10)
#define QCOM_ICE_STREAM2_NOT_EXPECTED_ENC_SEL                (1L << 11)
#define QCOM_ICE_STREAM1_NOT_EXPECTED_CONF_IDX                (1L << 12)
#define QCOM_ICE_STREAM2_NOT_EXPECTED_CONF_IDX                (1L << 13)
#define QCOM_ICE_STREAM1_NOT_EXPECTED_NEW_TRNS                (1L << 14)
#define QCOM_ICE_STREAM2_NOT_EXPECTED_NEW_TRNS                (1L << 15)

#define QCOM_ICE_NON_SEC_IRQ_MASK                                \
	(QCOM_ICE_STREAM1_PREMATURE_LBA_CHANGE |\
	 QCOM_ICE_STREAM2_PREMATURE_LBA_CHANGE |\
	 QCOM_ICE_STREAM1_NOT_EXPECTED_LBO |\
	 QCOM_ICE_STREAM2_NOT_EXPECTED_LBO |\
	 QCOM_ICE_STREAM1_NOT_EXPECTED_DUN |\
	 QCOM_ICE_STREAM2_NOT_EXPECTED_DUN |\
	 QCOM_ICE_STREAM2_NOT_EXPECTED_DUS |\
	 QCOM_ICE_STREAM1_NOT_EXPECTED_DBO |\
	 QCOM_ICE_STREAM2_NOT_EXPECTED_DBO |\
	 QCOM_ICE_STREAM1_NOT_EXPECTED_ENC_SEL |\
	 QCOM_ICE_STREAM2_NOT_EXPECTED_ENC_SEL |\
	 QCOM_ICE_STREAM1_NOT_EXPECTED_CONF_IDX |\
	 QCOM_ICE_STREAM1_NOT_EXPECTED_NEW_TRNS |\
	 QCOM_ICE_STREAM2_NOT_EXPECTED_NEW_TRNS)

	/* QCOM ICE registers from secure side */
#define QCOM_ICE_TEST_BUS_REG_SECURE_INTR            (1L << 28)
#define QCOM_ICE_TEST_BUS_REG_NON_SECURE_INTR        (1L << 2)

#define QCOM_ICE_LUT_KEYS_ICE_SEC_IRQ_STTS        0x2050
#define QCOM_ICE_LUT_KEYS_ICE_SEC_IRQ_MASK        0x2054
#define QCOM_ICE_LUT_KEYS_ICE_SEC_IRQ_CLR        0x2058

#define QCOM_ICE_STREAM1_PARTIALLY_SET_KEY_USED                (1L << 0)
#define QCOM_ICE_STREAM2_PARTIALLY_SET_KEY_USED                (1L << 1)
#define QCOM_ICE_QCOMC_DBG_OPEN_EVENT                        (1L << 30)
#define QCOM_ICE_KEYS_RAM_RESET_COMPLETED                (1L << 31)

#define QCOM_ICE_SEC_IRQ_MASK                                          \
	(QCOM_ICE_STREAM1_PARTIALLY_SET_KEY_USED |\
	 QCOM_ICE_STREAM2_PARTIALLY_SET_KEY_USED |\
	 QCOM_ICE_QCOMC_DBG_OPEN_EVENT |          \
	 QCOM_ICE_KEYS_RAM_RESET_COMPLETED)


#define qcom_ice_writel(ice, val, reg)        \
writel_relaxed((val), (ice)->mmio + (reg))
#define qcom_ice_readl(ice, reg)        \
readl_relaxed((ice)->mmio + (reg))


#endif /* _QCOM_INLINE_CRYPTO_ENGINE_REGS_H_ */
