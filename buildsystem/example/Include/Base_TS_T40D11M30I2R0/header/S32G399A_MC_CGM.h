/*
** ###################################################################
**     Compiler:            Keil ARM C/C++ Compiler
**     Reference manual:    S32G3xx RM Rev 1
**     Version:             rev. 2.3, 2021-11-24
**     Build:               b211124
**
**     Abstract:
**         Peripheral Access Layer for S32G399A
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2021 NXP
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/

/*!
 * @file S32G399A_MC_CGM.h
 * @version 2.3
 * @date 2021-11-24
 * @brief Peripheral Access Layer for S32G399A_MC_CGM
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32G399A_MC_CGM_H_)  /* Check if memory map has not been already included */
#define S32G399A_MC_CGM_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MC_CGM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_CGM_Peripheral_Access_Layer MC_CGM Peripheral Access Layer
 * @{
 */

/** MC_CGM - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCFS_SDUR;                         /**< PCFS Step Duration, offset: 0x0 */
  uint8_t RESERVED_0[132];
  __IO uint32_t PCFS_DIVC12;                       /**< PCFS Divider Change 12 Register, offset: 0x88 */
  __IO uint32_t PCFS_DIVE12;                       /**< PCFS Divider End 12 Register, offset: 0x8C */
  __IO uint32_t PCFS_DIVS12;                       /**< PCFS Divider Start 12 Register, offset: 0x90 */
  uint8_t RESERVED_1[620];
  __IO uint32_t MUX_0_CSC;                         /**< Clock Mux 0 Select Control Register, offset: 0x300 */
  __I  uint32_t MUX_0_CSS;                         /**< Clock Mux 0 Select Status Register, offset: 0x304 */
  __IO uint32_t MUX_0_DC_0;                        /**< Clock Mux 0 Divider 0 Control Register, offset: 0x308 */
  __IO uint32_t MUX_0_DC_1;                        /**< Clock Mux 0 Divider 1 Control Register, offset: 0x30C */
  uint8_t RESERVED_2[44];
  __I  uint32_t MUX_0_DIV_UPD_STAT;                /**< Clock Mux 0 Divider Update Status Register, offset: 0x33C */
  __IO uint32_t MUX_1_CSC;                         /**< Clock Mux 1 Select Control Register, offset: 0x340 */
  __I  uint32_t MUX_1_CSS;                         /**< Clock Mux 1 Select Status Register, offset: 0x344 */
  __IO uint32_t MUX_1_DC_0;                        /**< Clock Mux 1 Divider 0 Control Register, offset: 0x348 */
  uint8_t RESERVED_3[48];
  __I  uint32_t MUX_1_DIV_UPD_STAT;                /**< Clock Mux 1 Divider Update Status Register, offset: 0x37C */
  __IO uint32_t MUX_2_CSC;                         /**< Clock Mux 2 Select Control Register, offset: 0x380 */
  __I  uint32_t MUX_2_CSS;                         /**< Clock Mux 2 Select Status Register, offset: 0x384 */
  __IO uint32_t MUX_2_DC_0;                        /**< Clock Mux 2 Divider 0 Control Register, offset: 0x388 */
  uint8_t RESERVED_4[48];
  __I  uint32_t MUX_2_DIV_UPD_STAT;                /**< Clock Mux 2 Divider Update Status Register, offset: 0x3BC */
  __IO uint32_t MUX_3_CSC;                         /**< Clock Mux 3 Select Control Register, offset: 0x3C0 */
  __I  uint32_t MUX_3_CSS;                         /**< Clock Mux 3 Select Status Register, offset: 0x3C4 */
  __IO uint32_t MUX_3_DC_0;                        /**< Clock Mux 3 Divider 0 Control Register, offset: 0x3C8 */
  uint8_t RESERVED_5[48];
  __I  uint32_t MUX_3_DIV_UPD_STAT;                /**< Clock Mux 3 Divider Update Status Register, offset: 0x3FC */
  __IO uint32_t MUX_4_CSC;                         /**< Clock Mux 4 Select Control Register, offset: 0x400 */
  __I  uint32_t MUX_4_CSS;                         /**< Clock Mux 4 Select Status Register, offset: 0x404 */
  __IO uint32_t MUX_4_DC_0;                        /**< Clock Mux 4 Divider 0 Control Register, offset: 0x408 */
  uint8_t RESERVED_6[48];
  __I  uint32_t MUX_4_DIV_UPD_STAT;                /**< Clock Mux 4 Divider Update Status Register, offset: 0x43C */
  __IO uint32_t MUX_5_CSC;                         /**< Clock Mux 5 Select Control Register, offset: 0x440 */
  __I  uint32_t MUX_5_CSS;                         /**< Clock Mux 5 Select Status Register, offset: 0x444 */
  __IO uint32_t MUX_5_DC_0;                        /**< Clock Mux 5 Divider 0 Control Register, offset: 0x448 */
  uint8_t RESERVED_7[48];
  __I  uint32_t MUX_5_DIV_UPD_STAT;                /**< Clock Mux 5 Divider Update Status Register, offset: 0x47C */
  __IO uint32_t MUX_6_CSC;                         /**< Clock Mux 6 Select Control Register, offset: 0x480 */
  __I  uint32_t MUX_6_CSS;                         /**< Clock Mux 6 Select Status Register, offset: 0x484 */
  __IO uint32_t MUX_6_DC_0;                        /**< Clock Mux 6 Divider 0 Control Register, offset: 0x488 */
  uint8_t RESERVED_8[48];
  __I  uint32_t MUX_6_DIV_UPD_STAT;                /**< Clock Mux 6 Divider Update Status Register, offset: 0x4BC */
  __IO uint32_t MUX_7_CSC;                         /**< Clock Mux 7 Select Control Register, offset: 0x4C0 */
  __I  uint32_t MUX_7_CSS;                         /**< Clock Mux 7 Select Status Register, offset: 0x4C4 */
  uint8_t RESERVED_9[56];
  __IO uint32_t MUX_8_CSC;                         /**< Clock Mux 8 Select Control Register, offset: 0x500 */
  __I  uint32_t MUX_8_CSS;                         /**< Clock Mux 8 Select Status Register, offset: 0x504 */
  uint8_t RESERVED_10[248];
  __IO uint32_t MUX_12_CSC;                        /**< Clock Mux 12 Select Control Register, offset: 0x600 */
  __I  uint32_t MUX_12_CSS;                        /**< Clock Mux 12 Select Status Register, offset: 0x604 */
  __IO uint32_t MUX_12_DC_0;                       /**< Clock Mux 12 Divider 0 Control Register, offset: 0x608 */
  uint8_t RESERVED_11[48];
  __I  uint32_t MUX_12_DIV_UPD_STAT;               /**< Clock Mux 12 Divider Update Status Register, offset: 0x63C */
  uint8_t RESERVED_12[64];
  __IO uint32_t MUX_14_CSC;                        /**< Clock Mux 14 Select Control Register, offset: 0x680 */
  __I  uint32_t MUX_14_CSS;                        /**< Clock Mux 14 Select Status Register, offset: 0x684 */
  __IO uint32_t MUX_14_DC_0;                       /**< Clock Mux 14 Divider 0 Control Register, offset: 0x688 */
  uint8_t RESERVED_13[48];
  __I  uint32_t MUX_14_DIV_UPD_STAT;               /**< Clock Mux 14 Divider Update Status Register, offset: 0x6BC */
  uint8_t RESERVED_14[64];
  __IO uint32_t MUX_16_CSC;                        /**< Clock Mux 16 Select Control Register, offset: 0x700 */
  __I  uint32_t MUX_16_CSS;                        /**< Clock Mux 16 Select Status Register, offset: 0x704 */
} MC_CGM_Type, *MC_CGM_MemMapPtr;

/** Number of instances of the MC_CGM module. */
#define MC_CGM_INSTANCE_COUNT                    (1u)

/* MC_CGM - Peripheral instance base addresses */
/** Peripheral MC_CGM_0 base address */
#define IP_MC_CGM_0_BASE                         (0x40030000u)
/** Peripheral MC_CGM_0 base pointer */
#define IP_MC_CGM_0                              ((MC_CGM_Type *)IP_MC_CGM_0_BASE)
/** Array initializer of MC_CGM peripheral base addresses */
#define IP_MC_CGM_BASE_ADDRS                     { IP_MC_CGM_0_BASE }
/** Array initializer of MC_CGM peripheral base pointers */
#define IP_MC_CGM_BASE_PTRS                      { IP_MC_CGM_0 }

/* ----------------------------------------------------------------------------
   -- MC_CGM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_CGM_Register_Masks MC_CGM Register Masks
 * @{
 */

/*! @name PCFS_SDUR - PCFS Step Duration */
/*! @{ */

#define MC_CGM_PCFS_SDUR_SDUR_MASK               (0xFFFFU)
#define MC_CGM_PCFS_SDUR_SDUR_SHIFT              (0U)
#define MC_CGM_PCFS_SDUR_SDUR_WIDTH              (16U)
#define MC_CGM_PCFS_SDUR_SDUR(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_PCFS_SDUR_SDUR_SHIFT)) & MC_CGM_PCFS_SDUR_SDUR_MASK)
/*! @} */

/*! @name PCFS_DIVC12 - PCFS Divider Change 12 Register */
/*! @{ */

#define MC_CGM_PCFS_DIVC12_RATE_MASK             (0xFFU)
#define MC_CGM_PCFS_DIVC12_RATE_SHIFT            (0U)
#define MC_CGM_PCFS_DIVC12_RATE_WIDTH            (8U)
#define MC_CGM_PCFS_DIVC12_RATE(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_PCFS_DIVC12_RATE_SHIFT)) & MC_CGM_PCFS_DIVC12_RATE_MASK)

#define MC_CGM_PCFS_DIVC12_INIT_MASK             (0xFFFF0000U)
#define MC_CGM_PCFS_DIVC12_INIT_SHIFT            (16U)
#define MC_CGM_PCFS_DIVC12_INIT_WIDTH            (16U)
#define MC_CGM_PCFS_DIVC12_INIT(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_PCFS_DIVC12_INIT_SHIFT)) & MC_CGM_PCFS_DIVC12_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE12 - PCFS Divider End 12 Register */
/*! @{ */

#define MC_CGM_PCFS_DIVE12_DIVE_MASK             (0xFFFFFU)
#define MC_CGM_PCFS_DIVE12_DIVE_SHIFT            (0U)
#define MC_CGM_PCFS_DIVE12_DIVE_WIDTH            (20U)
#define MC_CGM_PCFS_DIVE12_DIVE(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_PCFS_DIVE12_DIVE_SHIFT)) & MC_CGM_PCFS_DIVE12_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS12 - PCFS Divider Start 12 Register */
/*! @{ */

#define MC_CGM_PCFS_DIVS12_DIVS_MASK             (0xFFFFFU)
#define MC_CGM_PCFS_DIVS12_DIVS_SHIFT            (0U)
#define MC_CGM_PCFS_DIVS12_DIVS_WIDTH            (20U)
#define MC_CGM_PCFS_DIVS12_DIVS(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_PCFS_DIVS12_DIVS_SHIFT)) & MC_CGM_PCFS_DIVS12_DIVS_MASK)
/*! @} */

/*! @name MUX_0_CSC - Clock Mux 0 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_0_CSC_RAMPUP_MASK             (0x1U)
#define MC_CGM_MUX_0_CSC_RAMPUP_SHIFT            (0U)
#define MC_CGM_MUX_0_CSC_RAMPUP_WIDTH            (1U)
#define MC_CGM_MUX_0_CSC_RAMPUP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSC_RAMPUP_SHIFT)) & MC_CGM_MUX_0_CSC_RAMPUP_MASK)

#define MC_CGM_MUX_0_CSC_RAMPDOWN_MASK           (0x2U)
#define MC_CGM_MUX_0_CSC_RAMPDOWN_SHIFT          (1U)
#define MC_CGM_MUX_0_CSC_RAMPDOWN_WIDTH          (1U)
#define MC_CGM_MUX_0_CSC_RAMPDOWN(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSC_RAMPDOWN_SHIFT)) & MC_CGM_MUX_0_CSC_RAMPDOWN_MASK)

#define MC_CGM_MUX_0_CSC_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_0_CSC_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_0_CSC_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_0_CSC_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_0_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_0_CSC_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_0_CSC_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_0_CSC_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_0_CSC_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_0_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_0_CSC_SELCTL_MASK             (0xF000000U)
#define MC_CGM_MUX_0_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_0_CSC_SELCTL_WIDTH            (4U)
#define MC_CGM_MUX_0_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_0_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_0_CSS - Clock Mux 0 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_0_CSS_RAMPUP_MASK             (0x1U)
#define MC_CGM_MUX_0_CSS_RAMPUP_SHIFT            (0U)
#define MC_CGM_MUX_0_CSS_RAMPUP_WIDTH            (1U)
#define MC_CGM_MUX_0_CSS_RAMPUP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSS_RAMPUP_SHIFT)) & MC_CGM_MUX_0_CSS_RAMPUP_MASK)

#define MC_CGM_MUX_0_CSS_RAMPDOWN_MASK           (0x2U)
#define MC_CGM_MUX_0_CSS_RAMPDOWN_SHIFT          (1U)
#define MC_CGM_MUX_0_CSS_RAMPDOWN_WIDTH          (1U)
#define MC_CGM_MUX_0_CSS_RAMPDOWN(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSS_RAMPDOWN_SHIFT)) & MC_CGM_MUX_0_CSS_RAMPDOWN_MASK)

#define MC_CGM_MUX_0_CSS_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_0_CSS_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_0_CSS_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_0_CSS_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_0_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_0_CSS_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_0_CSS_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_0_CSS_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_0_CSS_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_0_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_0_CSS_SWIP_MASK               (0x10000U)
#define MC_CGM_MUX_0_CSS_SWIP_SHIFT              (16U)
#define MC_CGM_MUX_0_CSS_SWIP_WIDTH              (1U)
#define MC_CGM_MUX_0_CSS_SWIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSS_SWIP_SHIFT)) & MC_CGM_MUX_0_CSS_SWIP_MASK)

#define MC_CGM_MUX_0_CSS_SWTRG_MASK              (0xE0000U)
#define MC_CGM_MUX_0_CSS_SWTRG_SHIFT             (17U)
#define MC_CGM_MUX_0_CSS_SWTRG_WIDTH             (3U)
#define MC_CGM_MUX_0_CSS_SWTRG(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_0_CSS_SWTRG_MASK)

#define MC_CGM_MUX_0_CSS_SELSTAT_MASK            (0xF000000U)
#define MC_CGM_MUX_0_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_0_CSS_SELSTAT_WIDTH           (4U)
#define MC_CGM_MUX_0_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_0_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_0_DC_0 - Clock Mux 0 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_0_DC_0_DIV_MASK               (0xFF0000U)
#define MC_CGM_MUX_0_DC_0_DIV_SHIFT              (16U)
#define MC_CGM_MUX_0_DC_0_DIV_WIDTH              (8U)
#define MC_CGM_MUX_0_DC_0_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_DC_0_DIV_SHIFT)) & MC_CGM_MUX_0_DC_0_DIV_MASK)

#define MC_CGM_MUX_0_DC_0_DE_MASK                (0x80000000U)
#define MC_CGM_MUX_0_DC_0_DE_SHIFT               (31U)
#define MC_CGM_MUX_0_DC_0_DE_WIDTH               (1U)
#define MC_CGM_MUX_0_DC_0_DE(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_DC_0_DE_SHIFT)) & MC_CGM_MUX_0_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_0_DC_1 - Clock Mux 0 Divider 1 Control Register */
/*! @{ */

#define MC_CGM_MUX_0_DC_1_DIV_MASK               (0xFF0000U)
#define MC_CGM_MUX_0_DC_1_DIV_SHIFT              (16U)
#define MC_CGM_MUX_0_DC_1_DIV_WIDTH              (8U)
#define MC_CGM_MUX_0_DC_1_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_DC_1_DIV_SHIFT)) & MC_CGM_MUX_0_DC_1_DIV_MASK)

#define MC_CGM_MUX_0_DC_1_DE_MASK                (0x80000000U)
#define MC_CGM_MUX_0_DC_1_DE_SHIFT               (31U)
#define MC_CGM_MUX_0_DC_1_DE_WIDTH               (1U)
#define MC_CGM_MUX_0_DC_1_DE(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_DC_1_DE_SHIFT)) & MC_CGM_MUX_0_DC_1_DE_MASK)
/*! @} */

/*! @name MUX_0_DIV_UPD_STAT - Clock Mux 0 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_0_DIV_UPD_STAT_DIV_STAT_MASK  (0x1U)
#define MC_CGM_MUX_0_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_0_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_0_DIV_UPD_STAT_DIV_STAT(x)    (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_0_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_0_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_1_CSC - Clock Mux 1 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_1_CSC_CG_MASK                 (0x4U)
#define MC_CGM_MUX_1_CSC_CG_SHIFT                (2U)
#define MC_CGM_MUX_1_CSC_CG_WIDTH                (1U)
#define MC_CGM_MUX_1_CSC_CG(x)                   (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_CSC_CG_SHIFT)) & MC_CGM_MUX_1_CSC_CG_MASK)

#define MC_CGM_MUX_1_CSC_FCG_MASK                (0x8U)
#define MC_CGM_MUX_1_CSC_FCG_SHIFT               (3U)
#define MC_CGM_MUX_1_CSC_FCG_WIDTH               (1U)
#define MC_CGM_MUX_1_CSC_FCG(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_CSC_FCG_SHIFT)) & MC_CGM_MUX_1_CSC_FCG_MASK)

#define MC_CGM_MUX_1_CSC_SELCTL_MASK             (0x3F000000U)
#define MC_CGM_MUX_1_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_1_CSC_SELCTL_WIDTH            (6U)
#define MC_CGM_MUX_1_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_1_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_1_CSS - Clock Mux 1 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_1_CSS_GRIP_MASK               (0x10000U)
#define MC_CGM_MUX_1_CSS_GRIP_SHIFT              (16U)
#define MC_CGM_MUX_1_CSS_GRIP_WIDTH              (1U)
#define MC_CGM_MUX_1_CSS_GRIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_CSS_GRIP_SHIFT)) & MC_CGM_MUX_1_CSS_GRIP_MASK)

#define MC_CGM_MUX_1_CSS_CS_MASK                 (0x20000U)
#define MC_CGM_MUX_1_CSS_CS_SHIFT                (17U)
#define MC_CGM_MUX_1_CSS_CS_WIDTH                (1U)
#define MC_CGM_MUX_1_CSS_CS(x)                   (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_CSS_CS_SHIFT)) & MC_CGM_MUX_1_CSS_CS_MASK)

#define MC_CGM_MUX_1_CSS_SELSTAT_MASK            (0x3F000000U)
#define MC_CGM_MUX_1_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_1_CSS_SELSTAT_WIDTH           (6U)
#define MC_CGM_MUX_1_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_1_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_1_DC_0 - Clock Mux 1 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_1_DC_0_DIV_MASK               (0xFF0000U)
#define MC_CGM_MUX_1_DC_0_DIV_SHIFT              (16U)
#define MC_CGM_MUX_1_DC_0_DIV_WIDTH              (8U)
#define MC_CGM_MUX_1_DC_0_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_DC_0_DIV_SHIFT)) & MC_CGM_MUX_1_DC_0_DIV_MASK)

#define MC_CGM_MUX_1_DC_0_DE_MASK                (0x80000000U)
#define MC_CGM_MUX_1_DC_0_DE_SHIFT               (31U)
#define MC_CGM_MUX_1_DC_0_DE_WIDTH               (1U)
#define MC_CGM_MUX_1_DC_0_DE(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_DC_0_DE_SHIFT)) & MC_CGM_MUX_1_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_1_DIV_UPD_STAT - Clock Mux 1 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_1_DIV_UPD_STAT_DIV_STAT_MASK  (0x1U)
#define MC_CGM_MUX_1_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_1_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_1_DIV_UPD_STAT_DIV_STAT(x)    (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_1_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_1_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_2_CSC - Clock Mux 2 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_2_CSC_CG_MASK                 (0x4U)
#define MC_CGM_MUX_2_CSC_CG_SHIFT                (2U)
#define MC_CGM_MUX_2_CSC_CG_WIDTH                (1U)
#define MC_CGM_MUX_2_CSC_CG(x)                   (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_CSC_CG_SHIFT)) & MC_CGM_MUX_2_CSC_CG_MASK)

#define MC_CGM_MUX_2_CSC_FCG_MASK                (0x8U)
#define MC_CGM_MUX_2_CSC_FCG_SHIFT               (3U)
#define MC_CGM_MUX_2_CSC_FCG_WIDTH               (1U)
#define MC_CGM_MUX_2_CSC_FCG(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_CSC_FCG_SHIFT)) & MC_CGM_MUX_2_CSC_FCG_MASK)

#define MC_CGM_MUX_2_CSC_SELCTL_MASK             (0x3F000000U)
#define MC_CGM_MUX_2_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_2_CSC_SELCTL_WIDTH            (6U)
#define MC_CGM_MUX_2_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_2_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_2_CSS - Clock Mux 2 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_2_CSS_GRIP_MASK               (0x10000U)
#define MC_CGM_MUX_2_CSS_GRIP_SHIFT              (16U)
#define MC_CGM_MUX_2_CSS_GRIP_WIDTH              (1U)
#define MC_CGM_MUX_2_CSS_GRIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_CSS_GRIP_SHIFT)) & MC_CGM_MUX_2_CSS_GRIP_MASK)

#define MC_CGM_MUX_2_CSS_CS_MASK                 (0x20000U)
#define MC_CGM_MUX_2_CSS_CS_SHIFT                (17U)
#define MC_CGM_MUX_2_CSS_CS_WIDTH                (1U)
#define MC_CGM_MUX_2_CSS_CS(x)                   (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_CSS_CS_SHIFT)) & MC_CGM_MUX_2_CSS_CS_MASK)

#define MC_CGM_MUX_2_CSS_SELSTAT_MASK            (0x3F000000U)
#define MC_CGM_MUX_2_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_2_CSS_SELSTAT_WIDTH           (6U)
#define MC_CGM_MUX_2_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_2_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_2_DC_0 - Clock Mux 2 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_2_DC_0_DIV_MASK               (0xFF0000U)
#define MC_CGM_MUX_2_DC_0_DIV_SHIFT              (16U)
#define MC_CGM_MUX_2_DC_0_DIV_WIDTH              (8U)
#define MC_CGM_MUX_2_DC_0_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_DC_0_DIV_SHIFT)) & MC_CGM_MUX_2_DC_0_DIV_MASK)

#define MC_CGM_MUX_2_DC_0_DE_MASK                (0x80000000U)
#define MC_CGM_MUX_2_DC_0_DE_SHIFT               (31U)
#define MC_CGM_MUX_2_DC_0_DE_WIDTH               (1U)
#define MC_CGM_MUX_2_DC_0_DE(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_DC_0_DE_SHIFT)) & MC_CGM_MUX_2_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_2_DIV_UPD_STAT - Clock Mux 2 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_2_DIV_UPD_STAT_DIV_STAT_MASK  (0x1U)
#define MC_CGM_MUX_2_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_2_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_2_DIV_UPD_STAT_DIV_STAT(x)    (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_2_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_2_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_3_CSC - Clock Mux 3 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_3_CSC_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_3_CSC_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_3_CSC_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_3_CSC_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_3_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_3_CSC_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_3_CSC_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_3_CSC_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_3_CSC_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_3_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_3_CSC_SELCTL_MASK             (0x1F000000U)
#define MC_CGM_MUX_3_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_3_CSC_SELCTL_WIDTH            (5U)
#define MC_CGM_MUX_3_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_3_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_3_CSS - Clock Mux 3 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_3_CSS_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_3_CSS_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_3_CSS_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_3_CSS_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_3_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_3_CSS_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_3_CSS_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_3_CSS_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_3_CSS_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_3_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_3_CSS_SWIP_MASK               (0x10000U)
#define MC_CGM_MUX_3_CSS_SWIP_SHIFT              (16U)
#define MC_CGM_MUX_3_CSS_SWIP_WIDTH              (1U)
#define MC_CGM_MUX_3_CSS_SWIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_CSS_SWIP_SHIFT)) & MC_CGM_MUX_3_CSS_SWIP_MASK)

#define MC_CGM_MUX_3_CSS_SWTRG_MASK              (0xE0000U)
#define MC_CGM_MUX_3_CSS_SWTRG_SHIFT             (17U)
#define MC_CGM_MUX_3_CSS_SWTRG_WIDTH             (3U)
#define MC_CGM_MUX_3_CSS_SWTRG(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_3_CSS_SWTRG_MASK)

#define MC_CGM_MUX_3_CSS_SELSTAT_MASK            (0x1F000000U)
#define MC_CGM_MUX_3_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_3_CSS_SELSTAT_WIDTH           (5U)
#define MC_CGM_MUX_3_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_3_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_3_DC_0 - Clock Mux 3 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_3_DC_0_DIV_MASK               (0xFF0000U)
#define MC_CGM_MUX_3_DC_0_DIV_SHIFT              (16U)
#define MC_CGM_MUX_3_DC_0_DIV_WIDTH              (8U)
#define MC_CGM_MUX_3_DC_0_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_DC_0_DIV_SHIFT)) & MC_CGM_MUX_3_DC_0_DIV_MASK)

#define MC_CGM_MUX_3_DC_0_DE_MASK                (0x80000000U)
#define MC_CGM_MUX_3_DC_0_DE_SHIFT               (31U)
#define MC_CGM_MUX_3_DC_0_DE_WIDTH               (1U)
#define MC_CGM_MUX_3_DC_0_DE(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_DC_0_DE_SHIFT)) & MC_CGM_MUX_3_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_3_DIV_UPD_STAT - Clock Mux 3 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_3_DIV_UPD_STAT_DIV_STAT_MASK  (0x1U)
#define MC_CGM_MUX_3_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_3_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_3_DIV_UPD_STAT_DIV_STAT(x)    (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_3_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_3_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_4_CSC - Clock Mux 4 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_4_CSC_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_4_CSC_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_4_CSC_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_4_CSC_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_4_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_4_CSC_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_4_CSC_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_4_CSC_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_4_CSC_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_4_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_4_CSC_SELCTL_MASK             (0x3F000000U)
#define MC_CGM_MUX_4_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_4_CSC_SELCTL_WIDTH            (6U)
#define MC_CGM_MUX_4_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_4_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_4_CSS - Clock Mux 4 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_4_CSS_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_4_CSS_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_4_CSS_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_4_CSS_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_4_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_4_CSS_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_4_CSS_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_4_CSS_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_4_CSS_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_4_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_4_CSS_SWIP_MASK               (0x10000U)
#define MC_CGM_MUX_4_CSS_SWIP_SHIFT              (16U)
#define MC_CGM_MUX_4_CSS_SWIP_WIDTH              (1U)
#define MC_CGM_MUX_4_CSS_SWIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_CSS_SWIP_SHIFT)) & MC_CGM_MUX_4_CSS_SWIP_MASK)

#define MC_CGM_MUX_4_CSS_SWTRG_MASK              (0xE0000U)
#define MC_CGM_MUX_4_CSS_SWTRG_SHIFT             (17U)
#define MC_CGM_MUX_4_CSS_SWTRG_WIDTH             (3U)
#define MC_CGM_MUX_4_CSS_SWTRG(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_4_CSS_SWTRG_MASK)

#define MC_CGM_MUX_4_CSS_SELSTAT_MASK            (0x3F000000U)
#define MC_CGM_MUX_4_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_4_CSS_SELSTAT_WIDTH           (6U)
#define MC_CGM_MUX_4_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_4_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_4_DC_0 - Clock Mux 4 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_4_DC_0_DIV_MASK               (0xFF0000U)
#define MC_CGM_MUX_4_DC_0_DIV_SHIFT              (16U)
#define MC_CGM_MUX_4_DC_0_DIV_WIDTH              (8U)
#define MC_CGM_MUX_4_DC_0_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_DC_0_DIV_SHIFT)) & MC_CGM_MUX_4_DC_0_DIV_MASK)

#define MC_CGM_MUX_4_DC_0_DE_MASK                (0x80000000U)
#define MC_CGM_MUX_4_DC_0_DE_SHIFT               (31U)
#define MC_CGM_MUX_4_DC_0_DE_WIDTH               (1U)
#define MC_CGM_MUX_4_DC_0_DE(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_DC_0_DE_SHIFT)) & MC_CGM_MUX_4_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_4_DIV_UPD_STAT - Clock Mux 4 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_4_DIV_UPD_STAT_DIV_STAT_MASK  (0x1U)
#define MC_CGM_MUX_4_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_4_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_4_DIV_UPD_STAT_DIV_STAT(x)    (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_4_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_4_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_5_CSC - Clock Mux 5 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_5_CSC_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_5_CSC_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_5_CSC_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_5_CSC_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_5_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_5_CSC_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_5_CSC_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_5_CSC_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_5_CSC_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_5_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_5_CSC_SELCTL_MASK             (0x3F000000U)
#define MC_CGM_MUX_5_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_5_CSC_SELCTL_WIDTH            (6U)
#define MC_CGM_MUX_5_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_5_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_5_CSS - Clock Mux 5 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_5_CSS_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_5_CSS_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_5_CSS_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_5_CSS_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_5_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_5_CSS_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_5_CSS_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_5_CSS_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_5_CSS_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_5_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_5_CSS_SWIP_MASK               (0x10000U)
#define MC_CGM_MUX_5_CSS_SWIP_SHIFT              (16U)
#define MC_CGM_MUX_5_CSS_SWIP_WIDTH              (1U)
#define MC_CGM_MUX_5_CSS_SWIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_CSS_SWIP_SHIFT)) & MC_CGM_MUX_5_CSS_SWIP_MASK)

#define MC_CGM_MUX_5_CSS_SWTRG_MASK              (0xE0000U)
#define MC_CGM_MUX_5_CSS_SWTRG_SHIFT             (17U)
#define MC_CGM_MUX_5_CSS_SWTRG_WIDTH             (3U)
#define MC_CGM_MUX_5_CSS_SWTRG(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_5_CSS_SWTRG_MASK)

#define MC_CGM_MUX_5_CSS_SELSTAT_MASK            (0x3F000000U)
#define MC_CGM_MUX_5_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_5_CSS_SELSTAT_WIDTH           (6U)
#define MC_CGM_MUX_5_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_5_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_5_DC_0 - Clock Mux 5 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_5_DC_0_DIV_MASK               (0xFF0000U)
#define MC_CGM_MUX_5_DC_0_DIV_SHIFT              (16U)
#define MC_CGM_MUX_5_DC_0_DIV_WIDTH              (8U)
#define MC_CGM_MUX_5_DC_0_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_DC_0_DIV_SHIFT)) & MC_CGM_MUX_5_DC_0_DIV_MASK)

#define MC_CGM_MUX_5_DC_0_DE_MASK                (0x80000000U)
#define MC_CGM_MUX_5_DC_0_DE_SHIFT               (31U)
#define MC_CGM_MUX_5_DC_0_DE_WIDTH               (1U)
#define MC_CGM_MUX_5_DC_0_DE(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_DC_0_DE_SHIFT)) & MC_CGM_MUX_5_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_5_DIV_UPD_STAT - Clock Mux 5 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_5_DIV_UPD_STAT_DIV_STAT_MASK  (0x1U)
#define MC_CGM_MUX_5_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_5_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_5_DIV_UPD_STAT_DIV_STAT(x)    (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_5_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_5_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_6_CSC - Clock Mux 6 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_6_CSC_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_6_CSC_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_6_CSC_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_6_CSC_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_6_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_6_CSC_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_6_CSC_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_6_CSC_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_6_CSC_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_6_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_6_CSC_SELCTL_MASK             (0x1F000000U)
#define MC_CGM_MUX_6_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_6_CSC_SELCTL_WIDTH            (5U)
#define MC_CGM_MUX_6_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_6_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_6_CSS - Clock Mux 6 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_6_CSS_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_6_CSS_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_6_CSS_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_6_CSS_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_6_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_6_CSS_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_6_CSS_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_6_CSS_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_6_CSS_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_6_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_6_CSS_SWIP_MASK               (0x10000U)
#define MC_CGM_MUX_6_CSS_SWIP_SHIFT              (16U)
#define MC_CGM_MUX_6_CSS_SWIP_WIDTH              (1U)
#define MC_CGM_MUX_6_CSS_SWIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_CSS_SWIP_SHIFT)) & MC_CGM_MUX_6_CSS_SWIP_MASK)

#define MC_CGM_MUX_6_CSS_SWTRG_MASK              (0xE0000U)
#define MC_CGM_MUX_6_CSS_SWTRG_SHIFT             (17U)
#define MC_CGM_MUX_6_CSS_SWTRG_WIDTH             (3U)
#define MC_CGM_MUX_6_CSS_SWTRG(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_6_CSS_SWTRG_MASK)

#define MC_CGM_MUX_6_CSS_SELSTAT_MASK            (0x1F000000U)
#define MC_CGM_MUX_6_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_6_CSS_SELSTAT_WIDTH           (5U)
#define MC_CGM_MUX_6_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_6_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_6_DC_0 - Clock Mux 6 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_6_DC_0_DIV_MASK               (0xFF0000U)
#define MC_CGM_MUX_6_DC_0_DIV_SHIFT              (16U)
#define MC_CGM_MUX_6_DC_0_DIV_WIDTH              (8U)
#define MC_CGM_MUX_6_DC_0_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_DC_0_DIV_SHIFT)) & MC_CGM_MUX_6_DC_0_DIV_MASK)

#define MC_CGM_MUX_6_DC_0_DE_MASK                (0x80000000U)
#define MC_CGM_MUX_6_DC_0_DE_SHIFT               (31U)
#define MC_CGM_MUX_6_DC_0_DE_WIDTH               (1U)
#define MC_CGM_MUX_6_DC_0_DE(x)                  (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_DC_0_DE_SHIFT)) & MC_CGM_MUX_6_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_6_DIV_UPD_STAT - Clock Mux 6 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_6_DIV_UPD_STAT_DIV_STAT_MASK  (0x1U)
#define MC_CGM_MUX_6_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_6_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_6_DIV_UPD_STAT_DIV_STAT(x)    (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_6_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_6_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_7_CSC - Clock Mux 7 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_7_CSC_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_7_CSC_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_7_CSC_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_7_CSC_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_7_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_7_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_7_CSC_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_7_CSC_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_7_CSC_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_7_CSC_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_7_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_7_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_7_CSC_SELCTL_MASK             (0x1F000000U)
#define MC_CGM_MUX_7_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_7_CSC_SELCTL_WIDTH            (5U)
#define MC_CGM_MUX_7_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_7_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_7_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_7_CSS - Clock Mux 7 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_7_CSS_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_7_CSS_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_7_CSS_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_7_CSS_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_7_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_7_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_7_CSS_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_7_CSS_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_7_CSS_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_7_CSS_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_7_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_7_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_7_CSS_SWIP_MASK               (0x10000U)
#define MC_CGM_MUX_7_CSS_SWIP_SHIFT              (16U)
#define MC_CGM_MUX_7_CSS_SWIP_WIDTH              (1U)
#define MC_CGM_MUX_7_CSS_SWIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_7_CSS_SWIP_SHIFT)) & MC_CGM_MUX_7_CSS_SWIP_MASK)

#define MC_CGM_MUX_7_CSS_SWTRG_MASK              (0xE0000U)
#define MC_CGM_MUX_7_CSS_SWTRG_SHIFT             (17U)
#define MC_CGM_MUX_7_CSS_SWTRG_WIDTH             (3U)
#define MC_CGM_MUX_7_CSS_SWTRG(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_7_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_7_CSS_SWTRG_MASK)

#define MC_CGM_MUX_7_CSS_SELSTAT_MASK            (0x1F000000U)
#define MC_CGM_MUX_7_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_7_CSS_SELSTAT_WIDTH           (5U)
#define MC_CGM_MUX_7_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_7_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_7_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_8_CSC - Clock Mux 8 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_8_CSC_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_8_CSC_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_8_CSC_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_8_CSC_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_8_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_8_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_8_CSC_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_8_CSC_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_8_CSC_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_8_CSC_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_8_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_8_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_8_CSC_SELCTL_MASK             (0x1F000000U)
#define MC_CGM_MUX_8_CSC_SELCTL_SHIFT            (24U)
#define MC_CGM_MUX_8_CSC_SELCTL_WIDTH            (5U)
#define MC_CGM_MUX_8_CSC_SELCTL(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_8_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_8_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_8_CSS - Clock Mux 8 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_8_CSS_CLK_SW_MASK             (0x4U)
#define MC_CGM_MUX_8_CSS_CLK_SW_SHIFT            (2U)
#define MC_CGM_MUX_8_CSS_CLK_SW_WIDTH            (1U)
#define MC_CGM_MUX_8_CSS_CLK_SW(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_8_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_8_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_8_CSS_SAFE_SW_MASK            (0x8U)
#define MC_CGM_MUX_8_CSS_SAFE_SW_SHIFT           (3U)
#define MC_CGM_MUX_8_CSS_SAFE_SW_WIDTH           (1U)
#define MC_CGM_MUX_8_CSS_SAFE_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_8_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_8_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_8_CSS_SWIP_MASK               (0x10000U)
#define MC_CGM_MUX_8_CSS_SWIP_SHIFT              (16U)
#define MC_CGM_MUX_8_CSS_SWIP_WIDTH              (1U)
#define MC_CGM_MUX_8_CSS_SWIP(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_8_CSS_SWIP_SHIFT)) & MC_CGM_MUX_8_CSS_SWIP_MASK)

#define MC_CGM_MUX_8_CSS_SWTRG_MASK              (0xE0000U)
#define MC_CGM_MUX_8_CSS_SWTRG_SHIFT             (17U)
#define MC_CGM_MUX_8_CSS_SWTRG_WIDTH             (3U)
#define MC_CGM_MUX_8_CSS_SWTRG(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_8_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_8_CSS_SWTRG_MASK)

#define MC_CGM_MUX_8_CSS_SELSTAT_MASK            (0x1F000000U)
#define MC_CGM_MUX_8_CSS_SELSTAT_SHIFT           (24U)
#define MC_CGM_MUX_8_CSS_SELSTAT_WIDTH           (5U)
#define MC_CGM_MUX_8_CSS_SELSTAT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_8_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_8_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_12_CSC - Clock Mux 12 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_12_CSC_CLK_SW_MASK            (0x4U)
#define MC_CGM_MUX_12_CSC_CLK_SW_SHIFT           (2U)
#define MC_CGM_MUX_12_CSC_CLK_SW_WIDTH           (1U)
#define MC_CGM_MUX_12_CSC_CLK_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_12_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_12_CSC_SAFE_SW_MASK           (0x8U)
#define MC_CGM_MUX_12_CSC_SAFE_SW_SHIFT          (3U)
#define MC_CGM_MUX_12_CSC_SAFE_SW_WIDTH          (1U)
#define MC_CGM_MUX_12_CSC_SAFE_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_12_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_12_CSC_SELCTL_MASK            (0x1F000000U)
#define MC_CGM_MUX_12_CSC_SELCTL_SHIFT           (24U)
#define MC_CGM_MUX_12_CSC_SELCTL_WIDTH           (5U)
#define MC_CGM_MUX_12_CSC_SELCTL(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_12_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_12_CSS - Clock Mux 12 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_12_CSS_CLK_SW_MASK            (0x4U)
#define MC_CGM_MUX_12_CSS_CLK_SW_SHIFT           (2U)
#define MC_CGM_MUX_12_CSS_CLK_SW_WIDTH           (1U)
#define MC_CGM_MUX_12_CSS_CLK_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_12_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_12_CSS_SAFE_SW_MASK           (0x8U)
#define MC_CGM_MUX_12_CSS_SAFE_SW_SHIFT          (3U)
#define MC_CGM_MUX_12_CSS_SAFE_SW_WIDTH          (1U)
#define MC_CGM_MUX_12_CSS_SAFE_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_12_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_12_CSS_SWIP_MASK              (0x10000U)
#define MC_CGM_MUX_12_CSS_SWIP_SHIFT             (16U)
#define MC_CGM_MUX_12_CSS_SWIP_WIDTH             (1U)
#define MC_CGM_MUX_12_CSS_SWIP(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_CSS_SWIP_SHIFT)) & MC_CGM_MUX_12_CSS_SWIP_MASK)

#define MC_CGM_MUX_12_CSS_SWTRG_MASK             (0xE0000U)
#define MC_CGM_MUX_12_CSS_SWTRG_SHIFT            (17U)
#define MC_CGM_MUX_12_CSS_SWTRG_WIDTH            (3U)
#define MC_CGM_MUX_12_CSS_SWTRG(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_12_CSS_SWTRG_MASK)

#define MC_CGM_MUX_12_CSS_SELSTAT_MASK           (0x1F000000U)
#define MC_CGM_MUX_12_CSS_SELSTAT_SHIFT          (24U)
#define MC_CGM_MUX_12_CSS_SELSTAT_WIDTH          (5U)
#define MC_CGM_MUX_12_CSS_SELSTAT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_12_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_12_DC_0 - Clock Mux 12 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_12_DC_0_DIV_MASK              (0xFF0000U)
#define MC_CGM_MUX_12_DC_0_DIV_SHIFT             (16U)
#define MC_CGM_MUX_12_DC_0_DIV_WIDTH             (8U)
#define MC_CGM_MUX_12_DC_0_DIV(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_DC_0_DIV_SHIFT)) & MC_CGM_MUX_12_DC_0_DIV_MASK)

#define MC_CGM_MUX_12_DC_0_DE_MASK               (0x80000000U)
#define MC_CGM_MUX_12_DC_0_DE_SHIFT              (31U)
#define MC_CGM_MUX_12_DC_0_DE_WIDTH              (1U)
#define MC_CGM_MUX_12_DC_0_DE(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_DC_0_DE_SHIFT)) & MC_CGM_MUX_12_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_12_DIV_UPD_STAT - Clock Mux 12 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_12_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_MUX_12_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_12_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_12_DIV_UPD_STAT_DIV_STAT(x)   (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_12_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_12_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_14_CSC - Clock Mux 14 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_14_CSC_CLK_SW_MASK            (0x4U)
#define MC_CGM_MUX_14_CSC_CLK_SW_SHIFT           (2U)
#define MC_CGM_MUX_14_CSC_CLK_SW_WIDTH           (1U)
#define MC_CGM_MUX_14_CSC_CLK_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_14_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_14_CSC_SAFE_SW_MASK           (0x8U)
#define MC_CGM_MUX_14_CSC_SAFE_SW_SHIFT          (3U)
#define MC_CGM_MUX_14_CSC_SAFE_SW_WIDTH          (1U)
#define MC_CGM_MUX_14_CSC_SAFE_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_14_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_14_CSC_SELCTL_MASK            (0x1F000000U)
#define MC_CGM_MUX_14_CSC_SELCTL_SHIFT           (24U)
#define MC_CGM_MUX_14_CSC_SELCTL_WIDTH           (5U)
#define MC_CGM_MUX_14_CSC_SELCTL(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_14_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_14_CSS - Clock Mux 14 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_14_CSS_CLK_SW_MASK            (0x4U)
#define MC_CGM_MUX_14_CSS_CLK_SW_SHIFT           (2U)
#define MC_CGM_MUX_14_CSS_CLK_SW_WIDTH           (1U)
#define MC_CGM_MUX_14_CSS_CLK_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_14_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_14_CSS_SAFE_SW_MASK           (0x8U)
#define MC_CGM_MUX_14_CSS_SAFE_SW_SHIFT          (3U)
#define MC_CGM_MUX_14_CSS_SAFE_SW_WIDTH          (1U)
#define MC_CGM_MUX_14_CSS_SAFE_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_14_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_14_CSS_SWIP_MASK              (0x10000U)
#define MC_CGM_MUX_14_CSS_SWIP_SHIFT             (16U)
#define MC_CGM_MUX_14_CSS_SWIP_WIDTH             (1U)
#define MC_CGM_MUX_14_CSS_SWIP(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_CSS_SWIP_SHIFT)) & MC_CGM_MUX_14_CSS_SWIP_MASK)

#define MC_CGM_MUX_14_CSS_SWTRG_MASK             (0xE0000U)
#define MC_CGM_MUX_14_CSS_SWTRG_SHIFT            (17U)
#define MC_CGM_MUX_14_CSS_SWTRG_WIDTH            (3U)
#define MC_CGM_MUX_14_CSS_SWTRG(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_14_CSS_SWTRG_MASK)

#define MC_CGM_MUX_14_CSS_SELSTAT_MASK           (0x1F000000U)
#define MC_CGM_MUX_14_CSS_SELSTAT_SHIFT          (24U)
#define MC_CGM_MUX_14_CSS_SELSTAT_WIDTH          (5U)
#define MC_CGM_MUX_14_CSS_SELSTAT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_14_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_14_DC_0 - Clock Mux 14 Divider 0 Control Register */
/*! @{ */

#define MC_CGM_MUX_14_DC_0_DIV_MASK              (0xFF0000U)
#define MC_CGM_MUX_14_DC_0_DIV_SHIFT             (16U)
#define MC_CGM_MUX_14_DC_0_DIV_WIDTH             (8U)
#define MC_CGM_MUX_14_DC_0_DIV(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_DC_0_DIV_SHIFT)) & MC_CGM_MUX_14_DC_0_DIV_MASK)

#define MC_CGM_MUX_14_DC_0_DE_MASK               (0x80000000U)
#define MC_CGM_MUX_14_DC_0_DE_SHIFT              (31U)
#define MC_CGM_MUX_14_DC_0_DE_WIDTH              (1U)
#define MC_CGM_MUX_14_DC_0_DE(x)                 (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_DC_0_DE_SHIFT)) & MC_CGM_MUX_14_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_14_DIV_UPD_STAT - Clock Mux 14 Divider Update Status Register */
/*! @{ */

#define MC_CGM_MUX_14_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_MUX_14_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_MUX_14_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_MUX_14_DIV_UPD_STAT_DIV_STAT(x)   (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_14_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_MUX_14_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_16_CSC - Clock Mux 16 Select Control Register */
/*! @{ */

#define MC_CGM_MUX_16_CSC_CLK_SW_MASK            (0x4U)
#define MC_CGM_MUX_16_CSC_CLK_SW_SHIFT           (2U)
#define MC_CGM_MUX_16_CSC_CLK_SW_WIDTH           (1U)
#define MC_CGM_MUX_16_CSC_CLK_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_16_CSC_CLK_SW_SHIFT)) & MC_CGM_MUX_16_CSC_CLK_SW_MASK)

#define MC_CGM_MUX_16_CSC_SAFE_SW_MASK           (0x8U)
#define MC_CGM_MUX_16_CSC_SAFE_SW_SHIFT          (3U)
#define MC_CGM_MUX_16_CSC_SAFE_SW_WIDTH          (1U)
#define MC_CGM_MUX_16_CSC_SAFE_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_16_CSC_SAFE_SW_SHIFT)) & MC_CGM_MUX_16_CSC_SAFE_SW_MASK)

#define MC_CGM_MUX_16_CSC_SELCTL_MASK            (0x1F000000U)
#define MC_CGM_MUX_16_CSC_SELCTL_SHIFT           (24U)
#define MC_CGM_MUX_16_CSC_SELCTL_WIDTH           (5U)
#define MC_CGM_MUX_16_CSC_SELCTL(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_16_CSC_SELCTL_SHIFT)) & MC_CGM_MUX_16_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_16_CSS - Clock Mux 16 Select Status Register */
/*! @{ */

#define MC_CGM_MUX_16_CSS_CLK_SW_MASK            (0x4U)
#define MC_CGM_MUX_16_CSS_CLK_SW_SHIFT           (2U)
#define MC_CGM_MUX_16_CSS_CLK_SW_WIDTH           (1U)
#define MC_CGM_MUX_16_CSS_CLK_SW(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_16_CSS_CLK_SW_SHIFT)) & MC_CGM_MUX_16_CSS_CLK_SW_MASK)

#define MC_CGM_MUX_16_CSS_SAFE_SW_MASK           (0x8U)
#define MC_CGM_MUX_16_CSS_SAFE_SW_SHIFT          (3U)
#define MC_CGM_MUX_16_CSS_SAFE_SW_WIDTH          (1U)
#define MC_CGM_MUX_16_CSS_SAFE_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_16_CSS_SAFE_SW_SHIFT)) & MC_CGM_MUX_16_CSS_SAFE_SW_MASK)

#define MC_CGM_MUX_16_CSS_SWIP_MASK              (0x10000U)
#define MC_CGM_MUX_16_CSS_SWIP_SHIFT             (16U)
#define MC_CGM_MUX_16_CSS_SWIP_WIDTH             (1U)
#define MC_CGM_MUX_16_CSS_SWIP(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_16_CSS_SWIP_SHIFT)) & MC_CGM_MUX_16_CSS_SWIP_MASK)

#define MC_CGM_MUX_16_CSS_SWTRG_MASK             (0xE0000U)
#define MC_CGM_MUX_16_CSS_SWTRG_SHIFT            (17U)
#define MC_CGM_MUX_16_CSS_SWTRG_WIDTH            (3U)
#define MC_CGM_MUX_16_CSS_SWTRG(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_16_CSS_SWTRG_SHIFT)) & MC_CGM_MUX_16_CSS_SWTRG_MASK)

#define MC_CGM_MUX_16_CSS_SELSTAT_MASK           (0x1F000000U)
#define MC_CGM_MUX_16_CSS_SELSTAT_SHIFT          (24U)
#define MC_CGM_MUX_16_CSS_SELSTAT_WIDTH          (5U)
#define MC_CGM_MUX_16_CSS_SELSTAT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_MUX_16_CSS_SELSTAT_SHIFT)) & MC_CGM_MUX_16_CSS_SELSTAT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MC_CGM_Register_Masks */

/*!
 * @}
 */ /* end of group MC_CGM_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_MC_CGM_H_) */
