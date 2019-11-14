/*!
    \file  gd32f3x0_tsi.h
    \brief definitions for the TSI
*/

/*
    Copyright (C) 2017 GigaDevice

    2017-06-06, V1.0.0, firmware for GD32F3x0
*/

#ifndef GD32F3X0_TSI_H
#define GD32F3X0_TSI_H

#include "gd32f3x0.h"

/* TSI definitions */
#define TSI                     TSI_BASE                /*!< TSI base address */

/* registers definitions */
#define TSI_CTL0                REG32(TSI + 0x00U)      /*!< TSI control register0 */
#define TSI_INTEN               REG32(TSI + 0x04U)      /*!< TSI interrupt enable register */
#define TSI_INTC                REG32(TSI + 0x08U)      /*!< TSI interrupt flag clear register */
#define TSI_INTF                REG32(TSI + 0x0CU)      /*!< TSI interrupt flag register */
#define TSI_PHM                 REG32(TSI + 0x10U)      /*!< TSI pin hysteresis mode register */
#define TSI_ASW                 REG32(TSI + 0x18U)      /*!< TSI analog switch register */
#define TSI_SAMPCFG             REG32(TSI + 0x20U)      /*!< TSI sample configuration register */
#define TSI_CHCFG               REG32(TSI + 0x28U)      /*!< TSI channel configuration register */
#define TSI_GCTL                REG32(TSI + 0x30U)      /*!< TSI group control register */
#define TSI_G0CYCN              REG32(TSI + 0x34U)      /*!< TSI group 0 cycle number register */
#define TSI_G1CYCN              REG32(TSI + 0x38U)      /*!< TSI group 1 cycle number register */
#define TSI_G2CYCN              REG32(TSI + 0x3CU)      /*!< TSI group 2 cycle number register */
#define TSI_G3CYCN              REG32(TSI + 0x40U)      /*!< TSI group 3 cycle number register */
#define TSI_G4CYCN              REG32(TSI + 0x44U)      /*!< TSI group 4 cycle number register */
#define TSI_G5CYCN              REG32(TSI + 0x48U)      /*!< TSI group 5 cycle number register */
#define TSI_CTL1                REG32(TSI + 0x300U)     /*!< TSI control registers1 */

/* bits definitions */
/* TSI_CTL0 */
#define TSI_CTL0_TSIEN          BIT(0)                  /*!< TSI enable */
#define TSI_CTL0_TSIS           BIT(1)                  /*!< TSI start */
#define TSI_CTL0_TRGMOD         BIT(2)                  /*!< trigger mode selection */
#define TSI_CTL0_EGSEL          BIT(3)                  /*!< edge selection */
#define TSI_CTL0_PINMOD         BIT(4)                  /*!< pin mode */
#define TSI_CTL0_MCN            BITS(5,7)               /*!< max cycle number of a sequence */
#define TSI_CTL0_CTCDIV         BITS(12,14)             /*!< CTCLK clock division factor */
#define TSI_CTL0_ECDIV          BIT(15)                 /*!< ECCLK clock division factor */
#define TSI_CTL0_ECEN           BIT(16)                 /*!< extend charge state enable */
#define TSI_CTL0_ECDT           BITS(17,23)             /*!< extend charge State maximum duration time */
#define TSI_CTL0_CTDT           BITS(24,27)             /*!< charge transfer state duration time */
#define TSI_CTL0_CDT            BITS(28,31)             /*!< charge state duration time */

/* TSI_INTEN */
#define TSI_INTEN_CTCFIE        BIT(0)                  /*!< charge transfer complete flag interrupt enable */
#define TSI_INTEN_MNERRIE       BIT(1)                  /*!< max cycle number error interrupt enable */

/* TSI_INTC */
#define TSI_INTC_CCTCF          BIT(0)                  /*!< clear charge transfer complete flag */
#define TSI_INTC_CMNERR         BIT(1)                  /*!< clear max cycle number error */

/* TSI_INTF */
#define TSI_INTF_CTCF           BIT(0)                  /*!< charge transfer complete flag */
#define TSI_INTF_MNERR          BIT(1)                  /*!< max cycle number error */

/* TSI interrupt enable bit */
#define TSI_INT_CCTCF           TSI_INTEN_CTCFIE        /*!< charge transfer complete flag interrupt enable */
#define TSI_INT_MNERR           TSI_INTEN_MNERRIE       /*!< max cycle number error interrupt enable */

/* I2C interrupt flags */
#define TSI_INT_FLAG_CTCF       TSI_INTF_CTCF           /*!< charge transfer complete flag */
#define TSI_INT_FLAG_MNERR      TSI_INTF_MNERR          /*!< max cycle number error */

/* I2C interrupt clear flags */
#define TSI_INT_FLAG_CTCF_CLR   TSI_INTC_CCTCF           /*!< clear charge transfer complete flag */
#define TSI_INT_FLAG_MNERR_CLR  TSI_INTC_CMNERR          /*!< clear max cycle number error */

/* I2C flags */
#define TSI_FLAG_CTCF           TSI_INTF_CTCF           /*!< charge transfer complete flag */
#define TSI_FLAG_MNERR          TSI_INTF_MNERR          /*!< max cycle number error */

/* I2C clear flags */
#define TSI_FLAG_CTCF_CLR       TSI_INTC_CCTCF           /*!< clear charge transfer complete flag */
#define TSI_FLAG_MNERR_CLR      TSI_INTC_CMNERR          /*!< clear max cycle number error */

/* TSI_PHM */
#define TSI_PHM_G0P0            BIT(0)                  /*!< pin G0P0 Schmitt trigger hysteresis state */
#define TSI_PHM_G0P1            BIT(1)                  /*!< pin G0P1 Schmitt trigger hysteresis state */
#define TSI_PHM_G0P2            BIT(2)                  /*!< pin G0P2 Schmitt trigger hysteresis state */
#define TSI_PHM_G0P3            BIT(3)                  /*!< pin G0P3 Schmitt trigger hysteresis state */
#define TSI_PHM_G1P0            BIT(4)                  /*!< pin G1P0 Schmitt trigger hysteresis state */
#define TSI_PHM_G1P1            BIT(5)                  /*!< pin G1P1 Schmitt trigger hysteresis state */
#define TSI_PHM_G1P2            BIT(6)                  /*!< pin G1P2 Schmitt trigger hysteresis state */
#define TSI_PHM_G1P3            BIT(7)                  /*!< pin G1P3 Schmitt trigger hysteresis state */
#define TSI_PHM_G2P0            BIT(8)                  /*!< pin G2P0 Schmitt trigger hysteresis state */
#define TSI_PHM_G2P1            BIT(9)                  /*!< pin G2P1 Schmitt trigger hysteresis state */
#define TSI_PHM_G2P2            BIT(10)                 /*!< pin G2P2 Schmitt trigger hysteresis state */
#define TSI_PHM_G2P3            BIT(11)                 /*!< pin G2P3 Schmitt trigger hysteresis state */
#define TSI_PHM_G3P0            BIT(12)                 /*!< pin G3P0 Schmitt trigger hysteresis state */
#define TSI_PHM_G3P1            BIT(13)                 /*!< pin G3P1 Schmitt trigger hysteresis state */
#define TSI_PHM_G3P2            BIT(14)                 /*!< pin G3P2 Schmitt trigger hysteresis state */
#define TSI_PHM_G3P3            BIT(15)                 /*!< pin G3P3 Schmitt trigger hysteresis state */
#define TSI_PHM_G4P0            BIT(16)                 /*!< pin G4P0 Schmitt trigger hysteresis state */
#define TSI_PHM_G4P1            BIT(17)                 /*!< pin G4P1 Schmitt trigger hysteresis state */
#define TSI_PHM_G4P2            BIT(18)                 /*!< pin G4P2 Schmitt trigger hysteresis state */
#define TSI_PHM_G4P3            BIT(19)                 /*!< pin G4P3 Schmitt trigger hysteresis state */
#define TSI_PHM_G5P0            BIT(20)                 /*!< pin G5P0 Schmitt trigger hysteresis state */
#define TSI_PHM_G5P1            BIT(21)                 /*!< pin G5P1 Schmitt trigger hysteresis state */
#define TSI_PHM_G5P2            BIT(22)                 /*!< pin G5P2 Schmitt trigger hysteresis state */
#define TSI_PHM_G5P3            BIT(23)                 /*!< pin G5P3 Schmitt trigger hysteresis state */

/* TSI_ASW */
#define TSI_ASW_G0P0            BIT(0)                  /*!< pin G0P0 analog switch state */
#define TSI_ASW_G0P1            BIT(1)                  /*!< pin G0P1 analog switch state */
#define TSI_ASW_G0P2            BIT(2)                  /*!< pin G0P2 analog switch state */
#define TSI_ASW_G0P3            BIT(3)                  /*!< pin G0P3 analog switch state */
#define TSI_ASW_G1P0            BIT(4)                  /*!< pin G1P0 analog switch state */
#define TSI_ASW_G1P1            BIT(5)                  /*!< pin G1P1 analog switch state */
#define TSI_ASW_G1P2            BIT(6)                  /*!< pin G1P2 analog switch state */
#define TSI_ASW_G1P3            BIT(7)                  /*!< pin G1P3 analog switch state */
#define TSI_ASW_G2P0            BIT(8)                  /*!< pin G2P0 analog switch state */
#define TSI_ASW_G2P1            BIT(9)                  /*!< pin G2P1 analog switch state */
#define TSI_ASW_G2P2            BIT(10)                 /*!< pin G2P2 analog switch state */
#define TSI_ASW_G2P3            BIT(11)                 /*!< pin G2P3 analog switch state */
#define TSI_ASW_G3P0            BIT(12)                 /*!< pin G3P0 analog switch state */
#define TSI_ASW_G3P1            BIT(13)                 /*!< pin G3P1 analog switch state */
#define TSI_ASW_G3P2            BIT(14)                 /*!< pin G3P2 analog switch state */
#define TSI_ASW_G3P3            BIT(15)                 /*!< pin G3P3 analog switch state */
#define TSI_ASW_G4P0            BIT(16)                 /*!< pin G4P0 analog switch state */
#define TSI_ASW_G4P1            BIT(17)                 /*!< pin G4P1 analog switch state */
#define TSI_ASW_G4P2            BIT(18)                 /*!< pin G4P2 analog switch state */
#define TSI_ASW_G4P3            BIT(19)                 /*!< pin G4P3 analog switch state */
#define TSI_ASW_G5P0            BIT(20)                 /*!< pin G5P0 analog switch state */
#define TSI_ASW_G5P1            BIT(21)                 /*!< pin G5P1 analog switch state */
#define TSI_ASW_G5P2            BIT(22)                 /*!< pin G5P2 analog switch state */
#define TSI_ASW_G5P3            BIT(23)                 /*!< pin G5P3 analog switch state */

/* TSI_SAMPCFG */
#define TSI_SAMPCFG_G0P0        BIT(0)                  /*!< pin G0P0 sample pin mode */
#define TSI_SAMPCFG_G0P1        BIT(1)                  /*!< pin G0P1 sample pin mode */
#define TSI_SAMPCFG_G0P2        BIT(2)                  /*!< pin G0P2 sample pin mode */
#define TSI_SAMPCFG_G0P3        BIT(3)                  /*!< pin G0P3 sample pin mode */
#define TSI_SAMPCFG_G1P0        BIT(4)                  /*!< pin G1P0 sample pin mode */
#define TSI_SAMPCFG_G1P1        BIT(5)                  /*!< pin G1P1 sample pin mode */
#define TSI_SAMPCFG_G1P2        BIT(6)                  /*!< pin G1P2 sample pin mode */
#define TSI_SAMPCFG_G1P3        BIT(7)                  /*!< pin G1P3 sample pin mode */
#define TSI_SAMPCFG_G2P0        BIT(8)                  /*!< pin G2P0 sample pin mode */
#define TSI_SAMPCFG_G2P1        BIT(9)                  /*!< pin G2P1 sample pin mode */
#define TSI_SAMPCFG_G2P2        BIT(10)                 /*!< pin G2P2 sample pin mode */
#define TSI_SAMPCFG_G2P3        BIT(11)                 /*!< pin G2P3 sample pin mode */
#define TSI_SAMPCFG_G3P0        BIT(12)                 /*!< pin G3P0 sample pin mode */
#define TSI_SAMPCFG_G3P1        BIT(13)                 /*!< pin G3P1 sample pin mode */
#define TSI_SAMPCFG_G3P2        BIT(14)                 /*!< pin G3P2 sample pin mode */
#define TSI_SAMPCFG_G3P3        BIT(15)                 /*!< pin G3P3 sample pin mode */
#define TSI_SAMPCFG_G4P0        BIT(16)                 /*!< pin G4P0 sample pin mode */
#define TSI_SAMPCFG_G4P1        BIT(17)                 /*!< pin G4P1 sample pin mode */
#define TSI_SAMPCFG_G4P2        BIT(18)                 /*!< pin G4P2 sample pin mode */
#define TSI_SAMPCFG_G4P3        BIT(19)                 /*!< pin G4P3 sample pin mode */
#define TSI_SAMPCFG_G5P0        BIT(20)                 /*!< pin G5P0 sample pin mode */
#define TSI_SAMPCFG_G5P1        BIT(21)                 /*!< pin G5P1 sample pin mode */
#define TSI_SAMPCFG_G5P2        BIT(22)                 /*!< pin G5P2 sample pin mode */
#define TSI_SAMPCFG_G5P3        BIT(23)                 /*!< pin G5P3 sample pin mode */

/* TSI_CHCFG */
#define TSI_CHCFG_G0P0          BIT(0)                  /*!< pin G0P0 channel pin mode */
#define TSI_CHCFG_G0P1          BIT(1)                  /*!< pin G0P1 channel pin mode */
#define TSI_CHCFG_G0P2          BIT(2)                  /*!< pin G0P2 channel pin mode */
#define TSI_CHCFG_G0P3          BIT(3)                  /*!< pin G0P3 channel pin mode */
#define TSI_CHCFG_G1P0          BIT(4)                  /*!< pin G1P0 channel pin mode */
#define TSI_CHCFG_G1P1          BIT(5)                  /*!< pin G1P1 channel pin mode */
#define TSI_CHCFG_G1P2          BIT(6)                  /*!< pin G1P2 channel pin mode */
#define TSI_CHCFG_G1P3          BIT(7)                  /*!< pin G1P3 channel pin mode */
#define TSI_CHCFG_G2P0          BIT(8)                  /*!< pin G2P0 channel pin mode */
#define TSI_CHCFG_G2P1          BIT(9)                  /*!< pin G2P1 channel pin mode */
#define TSI_CHCFG_G2P2          BIT(10)                 /*!< pin G2P2 channel pin mode */
#define TSI_CHCFG_G2P3          BIT(11)                 /*!< pin G2P3 channel pin mode */
#define TSI_CHCFG_G3P0          BIT(12)                 /*!< pin G3P0 channel pin mode */
#define TSI_CHCFG_G3P1          BIT(13)                 /*!< pin G3P1 channel pin mode */
#define TSI_CHCFG_G3P2          BIT(14)                 /*!< pin G3P2 channel pin mode */
#define TSI_CHCFG_G3P3          BIT(15)                 /*!< pin G3P3 channel pin mode */
#define TSI_CHCFG_G4P0          BIT(16)                 /*!< pin G4P0 channel pin mode */
#define TSI_CHCFG_G4P1          BIT(17)                 /*!< pin G4P1 channel pin mode */
#define TSI_CHCFG_G4P2          BIT(18)                 /*!< pin G4P2 channel pin mode */
#define TSI_CHCFG_G4P3          BIT(19)                 /*!< pin G4P3 channel pin mode */
#define TSI_CHCFG_G5P0          BIT(20)                 /*!< pin G5P0 channel pin mode */
#define TSI_CHCFG_G5P1          BIT(21)                 /*!< pin G5P1 channel pin mode */
#define TSI_CHCFG_G5P2          BIT(22)                 /*!< pin G5P2 channel pin mode */
#define TSI_CHCFG_G5P3          BIT(23)                 /*!< pin G5P3 channel pin mode */

/* TSI_GCTL */
#define TSI_GCTL_GE0            BIT(0)                  /*!< group0 enable */
#define TSI_GCTL_GE1            BIT(1)                  /*!< group1 enable */
#define TSI_GCTL_GE2            BIT(2)                  /*!< group2 enable */
#define TSI_GCTL_GE3            BIT(3)                  /*!< group3 enable */
#define TSI_GCTL_GE4            BIT(4)                  /*!< group4 enable */
#define TSI_GCTL_GE5            BIT(5)                  /*!< group5 enable */
#define TSI_GCTL_GC0            BIT(16)                 /*!< group0 complete */
#define TSI_GCTL_GC1            BIT(17)                 /*!< group1 complete */
#define TSI_GCTL_GC2            BIT(18)                 /*!< group2 complete */
#define TSI_GCTL_GC3            BIT(19)                 /*!< group3 complete */
#define TSI_GCTL_GC4            BIT(20)                 /*!< group4 complete */
#define TSI_GCTL_GC5            BIT(21)                 /*!< group5 complete */

/* TSI_CTL1 */
#define TSI_CTL1_CTCDIV         BIT(24)                 /*!< CTCLK clock division factor */
#define TSI_CTL1_ECDIV          BITS(28,29)             /*!< ECCLK clock division factor */

/* constants definitions */
/* CTCLK clock division factor */
#define TSI_CTCDIV_DIV1         ((uint32_t)0x00000000U) /*!< fCTCLK = fHCLK */
#define TSI_CTCDIV_DIV2         ((uint32_t)0x00000001U) /*!< fCTCLK = fHCLK/2 */
#define TSI_CTCDIV_DIV4         ((uint32_t)0x00000002U) /*!< fCTCLK = fHCLK/4 */
#define TSI_CTCDIV_DIV8         ((uint32_t)0x00000003U) /*!< fCTCLK = fHCLK/8 */
#define TSI_CTCDIV_DIV16        ((uint32_t)0x00000004U) /*!< fCTCLK = fHCLK/16 */
#define TSI_CTCDIV_DIV32        ((uint32_t)0x00000005U) /*!< fCTCLK = fHCLK/32 */
#define TSI_CTCDIV_DIV64        ((uint32_t)0x00000006U) /*!< fCTCLK = fHCLK/64 */
#define TSI_CTCDIV_DIV128       ((uint32_t)0x00000007U) /*!< fCTCLK = fHCLK/128 */
#define TSI_CTCDIV_DIV256       ((uint32_t)0x00000008U) /*!< fCTCLK = fHCLK/256 */
#define TSI_CTCDIV_DIV512       ((uint32_t)0x00000009U) /*!< fCTCLK = fHCLK/512 */
#define TSI_CTCDIV_DIV1024      ((uint32_t)0x0000000AU) /*!< fCTCLK = fHCLK/1024 */
#define TSI_CTCDIV_DIV2048      ((uint32_t)0x0000000BU) /*!< fCTCLK = fHCLK/2048 */
#define TSI_CTCDIV_DIV4096      ((uint32_t)0x0000000CU) /*!< fCTCLK = fHCLK/4096 */
#define TSI_CTCDIV_DIV8192      ((uint32_t)0x0000000DU) /*!< fCTCLK = fHCLK/8192 */
#define TSI_CTCDIV_DIV16384     ((uint32_t)0x0000000EU) /*!< fCTCLK = fHCLK/16384 */
#define TSI_CTCDIV_DIV32768     ((uint32_t)0x0000000FU) /*!< fCTCLK = fHCLK/32768 */

/* charge transfer state duration Time */
#define CTL_CTDT(regval)        (BITS(24,27) & ((uint32_t)(regval) << 24U))
#define TSI_TRANSFER_1CTCLK     CTL_CTDT(0)             /*!< the duration time of transfer state is 1 CTCLK */
#define TSI_TRANSFER_2CTCLK     CTL_CTDT(1)             /*!< the duration time of transfer state is 2 CTCLK */
#define TSI_TRANSFER_3CTCLK     CTL_CTDT(2)             /*!< the duration time of transfer state is 3 CTCLK */
#define TSI_TRANSFER_4CTCLK     CTL_CTDT(3)             /*!< the duration time of transfer state is 4 CTCLK */
#define TSI_TRANSFER_5CTCLK     CTL_CTDT(4)             /*!< the duration time of transfer state is 5 CTCLK */
#define TSI_TRANSFER_6CTCLK     CTL_CTDT(5)             /*!< the duration time of transfer state is 6 CTCLK */
#define TSI_TRANSFER_7CTCLK     CTL_CTDT(6)             /*!< the duration time of transfer state is 7 CTCLK */
#define TSI_TRANSFER_8CTCLK     CTL_CTDT(7)             /*!< the duration time of transfer state is 8 CTCLK */
#define TSI_TRANSFER_9CTCLK     CTL_CTDT(8)             /*!< the duration time of transfer state is 9 CTCLK */
#define TSI_TRANSFER_10CTCLK    CTL_CTDT(9)             /*!< the duration time of transfer state is 10 CTCLK */
#define TSI_TRANSFER_11CTCLK    CTL_CTDT(10)            /*!< the duration time of transfer state is 11 CTCLK */
#define TSI_TRANSFER_12CTCLK    CTL_CTDT(11)            /*!< the duration time of transfer state is 12 CTCLK */
#define TSI_TRANSFER_13CTCLK    CTL_CTDT(12)            /*!< the duration time of transfer state is 13 CTCLK */
#define TSI_TRANSFER_14CTCLK    CTL_CTDT(13)            /*!< the duration time of transfer state is 14 CTCLK */
#define TSI_TRANSFER_15CTCLK    CTL_CTDT(14)            /*!< the duration time of transfer state is 15 CTCLK */
#define TSI_TRANSFER_16CTCLK    CTL_CTDT(15)            /*!< the duration time of transfer state is 16 CTCLK */

/* charge state duration time */
#define CTL_CDT(regval)         (BITS(28,31) & ((uint32_t)(regval) << 28U))
#define TSI_CHARGE_1CTCLK       CTL_CDT(0)              /*!< the duration time of charge state is 1 CTCLK */
#define TSI_CHARGE_2CTCLK       CTL_CDT(1)              /*!< the duration time of charge state is 2 CTCLK */
#define TSI_CHARGE_3CTCLK       CTL_CDT(2)              /*!< the duration time of charge state is 3 CTCLK */
#define TSI_CHARGE_4CTCLK       CTL_CDT(3)              /*!< the duration time of charge state is 4 CTCLK */
#define TSI_CHARGE_5CTCLK       CTL_CDT(4)              /*!< the duration time of charge state is 5 CTCLK */
#define TSI_CHARGE_6CTCLK       CTL_CDT(5)              /*!< the duration time of charge state is 6 CTCLK */
#define TSI_CHARGE_7CTCLK       CTL_CDT(6)              /*!< the duration time of charge state is 7 CTCLK */
#define TSI_CHARGE_8CTCLK       CTL_CDT(7)              /*!< the duration time of charge state is 8 CTCLK */
#define TSI_CHARGE_9CTCLK       CTL_CDT(8)              /*!< the duration time of charge state is 9 CTCLK */
#define TSI_CHARGE_10CTCLK      CTL_CDT(9)              /*!< the duration time of charge state is 10 CTCLK */
#define TSI_CHARGE_11CTCLK      CTL_CDT(10)             /*!< the duration time of charge state is 11 CTCLK */
#define TSI_CHARGE_12CTCLK      CTL_CDT(11)             /*!< the duration time of charge state is 12 CTCLK */
#define TSI_CHARGE_13CTCLK      CTL_CDT(12)             /*!< the duration time of charge state is 13 CTCLK */
#define TSI_CHARGE_14CTCLK      CTL_CDT(13)             /*!< the duration time of charge state is 14 CTCLK */
#define TSI_CHARGE_15CTCLK      CTL_CDT(14)             /*!< the duration time of charge state is 15 CTCLK */
#define TSI_CHARGE_16CTCLK      CTL_CDT(15)             /*!< the duration time of charge state is 16 CTCLK */

/* max cycle number of a sequence */
#define CTL_MCN(regval)         (BITS(5,7) & ((uint32_t)(regval) << 5U))
#define TSI_MAXNUM255           CTL_MCN(0)              /*!< the max cycle number of a sequence is 255 */
#define TSI_MAXNUM511           CTL_MCN(1)              /*!< the max cycle number of a sequence is 511 */
#define TSI_MAXNUM1023          CTL_MCN(2)              /*!< the max cycle number of a sequence is 1023 */
#define TSI_MAXNUM2047          CTL_MCN(3)              /*!< the max cycle number of a sequence is 2047 */
#define TSI_MAXNUM4095          CTL_MCN(4)              /*!< the max cycle number of a sequence is 4095 */
#define TSI_MAXNUM8191          CTL_MCN(5)              /*!< the max cycle number of a sequence is 8191 */
#define TSI_MAXNUM16383         CTL_MCN(6)              /*!< the max cycle number of a sequence is 16383 */

/* ECCLK clock division factor */
#define TSI_EXTEND_DIV1         ((uint32_t)0x00000000U) /*!< fECCLK = fHCLK */
#define TSI_EXTEND_DIV2         ((uint32_t)0x00000001U) /*!< fECCLK = fHCLK/2 */
#define TSI_EXTEND_DIV3         ((uint32_t)0x00000002U) /*!< fECCLK = fHCLK/3 */
#define TSI_EXTEND_DIV4         ((uint32_t)0x00000003U) /*!< fECCLK = fHCLK/4 */
#define TSI_EXTEND_DIV5         ((uint32_t)0x00000004U) /*!< fECCLK = fHCLK/5 */
#define TSI_EXTEND_DIV6         ((uint32_t)0x00000005U) /*!< fECCLK = fHCLK/6 */
#define TSI_EXTEND_DIV7         ((uint32_t)0x00000006U) /*!< fECCLK = fHCLK/7 */
#define TSI_EXTEND_DIV8         ((uint32_t)0x00000007U) /*!< fECCLK = fHCLK/8 */

/* extend charge state maximum duration time */
#define TSI_EXTENDMAX(regval)   (BITS(17,23) & ((uint32_t)(regval) << 17U)) /* value range 1..128,extend charge state maximum duration time */

/* hardware trigger mode */
#define TSI_FALLING_TRIGGER     0x00U                   /*!< falling edge trigger TSI charge transfer sequence */
#define TSI_RISING_TRIGGER      0x01U                   /*!< rising edge trigger TSI charge transfer sequence */

/* pin mode */
#define TSI_OUTPUT_LOW          0x00U                   /*!< TSI pin will output low when IDLE */
#define TSI_INPUT_FLOATING      0x01U                   /*!< TSI pin will keep input_floating when IDLE */

#endif /* GD32F3X0_TSI_H */