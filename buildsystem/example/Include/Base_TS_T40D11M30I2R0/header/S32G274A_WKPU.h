/*
** ###################################################################
**     Processor:           S32G274A_M7
**     Reference manual:    S32G274A RM Rev.4
**     Version:             rev. 2.0, 2021-11-22
**     Build:               b211122
**
**     Abstract:
**         Peripheral Access Layer for S32G274A_M7
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
 * @file S32G274A_WKPU.h
 * @version 2.0
 * @date 2021-11-22
 * @brief Peripheral Access Layer for S32G274A_WKPU
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
#if !defined(S32G274A_WKPU_H_)  /* Check if memory map has not been already included */
#define S32G274A_WKPU_H_

#include "S32G274A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- WKPU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WKPU_Peripheral_Access_Layer WKPU Peripheral Access Layer
 * @{
 */

/** WKPU - Register Layout Typedef */
typedef struct {
  __IO uint32_t NSR;                               /**< NMI Status Flag Register, offset: 0x0 */
  uint8_t RESERVED_0[4];
  __IO uint32_t NCR;                               /**< NMI Configuration Register, offset: 0x8 */
  uint8_t RESERVED_1[4];
  __IO uint32_t WBMSR;                             /**< Wakeup Boot Mode Select Register, offset: 0x10 */
  __IO uint32_t WISR;                              /**< Wakeup/Interrupt Status Flag Register, offset: 0x14 */
  __IO uint32_t IRER;                              /**< Interrupt Request Enable Register, offset: 0x18 */
  __IO uint32_t WRER;                              /**< Wakeup Request Enable Register, offset: 0x1C */
  uint8_t RESERVED_2[8];
  __IO uint32_t WIREER;                            /**< Wakeup/Interrupt Rising-Edge Event Enable Register, offset: 0x28 */
  __IO uint32_t WIFEER;                            /**< Wakeup/Interrupt Falling-Edge Event Enable Register, offset: 0x2C */
  __IO uint32_t WIFER;                             /**< Wakeup/Interrupt Filter Enable Register, offset: 0x30 */
  __IO uint32_t WIPUER_WIPDER;                     /**< Wakeup/Interrupt Pull Enable Register, offset: 0x34 */
} WKPU_Type, *WKPU_MemMapPtr;

/** Number of instances of the WKPU module. */
#define WKPU_INSTANCE_COUNT                      (1u)

/* WKPU - Peripheral instance base addresses */
/** Peripheral WKPU base address */
#define IP_WKPU_BASE                             (0x40090000u)
/** Peripheral WKPU base pointer */
#define IP_WKPU                                  ((WKPU_Type *)IP_WKPU_BASE)
/** Array initializer of WKPU peripheral base addresses */
#define IP_WKPU_BASE_ADDRS                       { IP_WKPU_BASE }
/** Array initializer of WKPU peripheral base pointers */
#define IP_WKPU_BASE_PTRS                        { IP_WKPU }

/* ----------------------------------------------------------------------------
   -- WKPU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup WKPU_Register_Masks WKPU Register Masks
 * @{
 */

/*! @name NSR - NMI Status Flag Register */
/*! @{ */

#define WKPU_NSR_NOVF0_MASK                      (0x40000000U)
#define WKPU_NSR_NOVF0_SHIFT                     (30U)
#define WKPU_NSR_NOVF0_WIDTH                     (1U)
#define WKPU_NSR_NOVF0(x)                        (((uint32_t)(((uint32_t)(x)) << WKPU_NSR_NOVF0_SHIFT)) & WKPU_NSR_NOVF0_MASK)

#define WKPU_NSR_NIF0_MASK                       (0x80000000U)
#define WKPU_NSR_NIF0_SHIFT                      (31U)
#define WKPU_NSR_NIF0_WIDTH                      (1U)
#define WKPU_NSR_NIF0(x)                         (((uint32_t)(((uint32_t)(x)) << WKPU_NSR_NIF0_SHIFT)) & WKPU_NSR_NIF0_MASK)
/*! @} */

/*! @name NCR - NMI Configuration Register */
/*! @{ */

#define WKPU_NCR_NFE0_MASK                       (0x1000000U)
#define WKPU_NCR_NFE0_SHIFT                      (24U)
#define WKPU_NCR_NFE0_WIDTH                      (1U)
#define WKPU_NCR_NFE0(x)                         (((uint32_t)(((uint32_t)(x)) << WKPU_NCR_NFE0_SHIFT)) & WKPU_NCR_NFE0_MASK)

#define WKPU_NCR_NFEE0_MASK                      (0x2000000U)
#define WKPU_NCR_NFEE0_SHIFT                     (25U)
#define WKPU_NCR_NFEE0_WIDTH                     (1U)
#define WKPU_NCR_NFEE0(x)                        (((uint32_t)(((uint32_t)(x)) << WKPU_NCR_NFEE0_SHIFT)) & WKPU_NCR_NFEE0_MASK)

#define WKPU_NCR_NREE0_MASK                      (0x4000000U)
#define WKPU_NCR_NREE0_SHIFT                     (26U)
#define WKPU_NCR_NREE0_WIDTH                     (1U)
#define WKPU_NCR_NREE0(x)                        (((uint32_t)(((uint32_t)(x)) << WKPU_NCR_NREE0_SHIFT)) & WKPU_NCR_NREE0_MASK)

#define WKPU_NCR_NWRE0_MASK                      (0x10000000U)
#define WKPU_NCR_NWRE0_SHIFT                     (28U)
#define WKPU_NCR_NWRE0_WIDTH                     (1U)
#define WKPU_NCR_NWRE0(x)                        (((uint32_t)(((uint32_t)(x)) << WKPU_NCR_NWRE0_SHIFT)) & WKPU_NCR_NWRE0_MASK)

#define WKPU_NCR_NDSS0_MASK                      (0x60000000U)
#define WKPU_NCR_NDSS0_SHIFT                     (29U)
#define WKPU_NCR_NDSS0_WIDTH                     (2U)
#define WKPU_NCR_NDSS0(x)                        (((uint32_t)(((uint32_t)(x)) << WKPU_NCR_NDSS0_SHIFT)) & WKPU_NCR_NDSS0_MASK)

#define WKPU_NCR_NLOCK0_MASK                     (0x80000000U)
#define WKPU_NCR_NLOCK0_SHIFT                    (31U)
#define WKPU_NCR_NLOCK0_WIDTH                    (1U)
#define WKPU_NCR_NLOCK0(x)                       (((uint32_t)(((uint32_t)(x)) << WKPU_NCR_NLOCK0_SHIFT)) & WKPU_NCR_NLOCK0_MASK)
/*! @} */

/*! @name WBMSR - Wakeup Boot Mode Select Register */
/*! @{ */

#define WKPU_WBMSR_WBMS_32_MASK                  (0xFFFFFFFFU)
#define WKPU_WBMSR_WBMS_32_SHIFT                 (0U)
#define WKPU_WBMSR_WBMS_32_WIDTH                 (32U)
#define WKPU_WBMSR_WBMS_32(x)                    (((uint32_t)(((uint32_t)(x)) << WKPU_WBMSR_WBMS_32_SHIFT)) & WKPU_WBMSR_WBMS_32_MASK)
/*! @} */

/*! @name WISR - Wakeup/Interrupt Status Flag Register */
/*! @{ */

#define WKPU_WISR_EIF_MASK                       (0xFFFFFFFFU)
#define WKPU_WISR_EIF_SHIFT                      (0U)
#define WKPU_WISR_EIF_WIDTH                      (32U)
#define WKPU_WISR_EIF(x)                         (((uint32_t)(((uint32_t)(x)) << WKPU_WISR_EIF_SHIFT)) & WKPU_WISR_EIF_MASK)
/*! @} */

/*! @name IRER - Interrupt Request Enable Register */
/*! @{ */

#define WKPU_IRER_EIRE_MASK                      (0xFFFFFFFFU)
#define WKPU_IRER_EIRE_SHIFT                     (0U)
#define WKPU_IRER_EIRE_WIDTH                     (32U)
#define WKPU_IRER_EIRE(x)                        (((uint32_t)(((uint32_t)(x)) << WKPU_IRER_EIRE_SHIFT)) & WKPU_IRER_EIRE_MASK)
/*! @} */

/*! @name WRER - Wakeup Request Enable Register */
/*! @{ */

#define WKPU_WRER_WRE_MASK                       (0xFFFFFFFFU)
#define WKPU_WRER_WRE_SHIFT                      (0U)
#define WKPU_WRER_WRE_WIDTH                      (32U)
#define WKPU_WRER_WRE(x)                         (((uint32_t)(((uint32_t)(x)) << WKPU_WRER_WRE_SHIFT)) & WKPU_WRER_WRE_MASK)
/*! @} */

/*! @name WIREER - Wakeup/Interrupt Rising-Edge Event Enable Register */
/*! @{ */

#define WKPU_WIREER_IREE_MASK                    (0xFFFFFFFFU)
#define WKPU_WIREER_IREE_SHIFT                   (0U)
#define WKPU_WIREER_IREE_WIDTH                   (32U)
#define WKPU_WIREER_IREE(x)                      (((uint32_t)(((uint32_t)(x)) << WKPU_WIREER_IREE_SHIFT)) & WKPU_WIREER_IREE_MASK)
/*! @} */

/*! @name WIFEER - Wakeup/Interrupt Falling-Edge Event Enable Register */
/*! @{ */

#define WKPU_WIFEER_IFEEx_MASK                   (0xFFFFFFFFU)
#define WKPU_WIFEER_IFEEx_SHIFT                  (0U)
#define WKPU_WIFEER_IFEEx_WIDTH                  (32U)
#define WKPU_WIFEER_IFEEx(x)                     (((uint32_t)(((uint32_t)(x)) << WKPU_WIFEER_IFEEx_SHIFT)) & WKPU_WIFEER_IFEEx_MASK)
/*! @} */

/*! @name WIFER - Wakeup/Interrupt Filter Enable Register */
/*! @{ */

#define WKPU_WIFER_IFE_MASK                      (0x7FFFFFFFU)
#define WKPU_WIFER_IFE_SHIFT                     (0U)
#define WKPU_WIFER_IFE_WIDTH                     (31U)
#define WKPU_WIFER_IFE(x)                        (((uint32_t)(((uint32_t)(x)) << WKPU_WIFER_IFE_SHIFT)) & WKPU_WIFER_IFE_MASK)
/*! @} */

/*! @name WIPUER_WIPDER - Wakeup/Interrupt Pull Enable Register */
/*! @{ */

#define WKPU_WIPUER_WIPDER_IPUE_MASK             (0x7FFFFFFFU)
#define WKPU_WIPUER_WIPDER_IPUE_SHIFT            (0U)
#define WKPU_WIPUER_WIPDER_IPUE_WIDTH            (31U)
#define WKPU_WIPUER_WIPDER_IPUE(x)               (((uint32_t)(((uint32_t)(x)) << WKPU_WIPUER_WIPDER_IPUE_SHIFT)) & WKPU_WIPUER_WIPDER_IPUE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group WKPU_Register_Masks */

/*!
 * @}
 */ /* end of group WKPU_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G274A_WKPU_H_) */
