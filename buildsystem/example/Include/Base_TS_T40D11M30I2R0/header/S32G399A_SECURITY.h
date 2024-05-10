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
 * @file S32G399A_SECURITY.h
 * @version 2.3
 * @date 2021-11-24
 * @brief Peripheral Access Layer for S32G399A_SECURITY
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
#if !defined(S32G399A_SECURITY_H_)  /* Check if memory map has not been already included */
#define S32G399A_SECURITY_H_

#include "S32G399A_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SECURITY Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SECURITY_Peripheral_Access_Layer SECURITY Peripheral Access Layer
 * @{
 */

/** SECURITY - Size of Registers Arrays */
#define SECURITY_HSE_GPR_3TO11_COUNT              9u

/** SECURITY - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[8];
  __I  uint32_t EXT_DBGSTAT;                       /**< External Debugger Status, offset: 0x8 */
  uint8_t RESERVED_1[16];
  __IO uint32_t HSE_GPR0;                          /**< HSE GPR 0, offset: 0x1C */
  __IO uint32_t HSE_GPR1;                          /**< HSE GPR n, offset: 0x20 */
  __IO uint32_t HSE_GPR2;                          /**< HSE GPR n, offset: 0x24 */
  __IO uint32_t HSE_GPR[SECURITY_HSE_GPR_3TO11_COUNT]; /**< HSE GPR n, array offset: 0x28, array step: 0x4 */
} SECURITY_Type, *SECURITY_MemMapPtr;

/** Number of instances of the SECURITY module. */
#define SECURITY_INSTANCE_COUNT                  (1u)

/* SECURITY - Peripheral instance base addresses */
/** Peripheral SECURITY_CC base address */
#define IP_SECURITY_CC_BASE                      (0x4007C900u)
/** Peripheral SECURITY_CC base pointer */
#define IP_SECURITY_CC                           ((SECURITY_Type *)IP_SECURITY_CC_BASE)
/** Array initializer of SECURITY peripheral base addresses */
#define IP_SECURITY_BASE_ADDRS                   { IP_SECURITY_CC_BASE }
/** Array initializer of SECURITY peripheral base pointers */
#define IP_SECURITY_BASE_PTRS                    { IP_SECURITY_CC }

/* ----------------------------------------------------------------------------
   -- SECURITY Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SECURITY_Register_Masks SECURITY Register Masks
 * @{
 */

/*! @name EXT_DBGSTAT - External Debugger Status */
/*! @{ */

#define SECURITY_EXT_DBGSTAT_EDB_MASK            (0x1U)
#define SECURITY_EXT_DBGSTAT_EDB_SHIFT           (0U)
#define SECURITY_EXT_DBGSTAT_EDB_WIDTH           (1U)
#define SECURITY_EXT_DBGSTAT_EDB(x)              (((uint32_t)(((uint32_t)(x)) << SECURITY_EXT_DBGSTAT_EDB_SHIFT)) & SECURITY_EXT_DBGSTAT_EDB_MASK)
/*! @} */

/*! @name HSE_GPR0 - HSE GPR 0 */
/*! @{ */

#define SECURITY_HSE_GPR0_DATA0_MASK             (0x3FU)
#define SECURITY_HSE_GPR0_DATA0_SHIFT            (0U)
#define SECURITY_HSE_GPR0_DATA0_WIDTH            (6U)
#define SECURITY_HSE_GPR0_DATA0(x)               (((uint32_t)(((uint32_t)(x)) << SECURITY_HSE_GPR0_DATA0_SHIFT)) & SECURITY_HSE_GPR0_DATA0_MASK)

#define SECURITY_HSE_GPR0_DATA1_MASK             (0xFFFFFF80U)
#define SECURITY_HSE_GPR0_DATA1_SHIFT            (7U)
#define SECURITY_HSE_GPR0_DATA1_WIDTH            (25U)
#define SECURITY_HSE_GPR0_DATA1(x)               (((uint32_t)(((uint32_t)(x)) << SECURITY_HSE_GPR0_DATA1_SHIFT)) & SECURITY_HSE_GPR0_DATA1_MASK)
/*! @} */

/*! @name HSE_GPR1 - HSE GPR n */
/*! @{ */

#define SECURITY_HSE_GPR1_DATA_MASK              (0xFFFFFFFFU)
#define SECURITY_HSE_GPR1_DATA_SHIFT             (0U)
#define SECURITY_HSE_GPR1_DATA_WIDTH             (32U)
#define SECURITY_HSE_GPR1_DATA(x)                (((uint32_t)(((uint32_t)(x)) << SECURITY_HSE_GPR1_DATA_SHIFT)) & SECURITY_HSE_GPR1_DATA_MASK)
/*! @} */

/*! @name HSE_GPR2 - HSE GPR n */
/*! @{ */

#define SECURITY_HSE_GPR2_DATA_MASK              (0xFFFFFFFFU)
#define SECURITY_HSE_GPR2_DATA_SHIFT             (0U)
#define SECURITY_HSE_GPR2_DATA_WIDTH             (32U)
#define SECURITY_HSE_GPR2_DATA(x)                (((uint32_t)(((uint32_t)(x)) << SECURITY_HSE_GPR2_DATA_SHIFT)) & SECURITY_HSE_GPR2_DATA_MASK)
/*! @} */

/*! @name HSE_GPR - HSE GPR n */
/*! @{ */

#define SECURITY_HSE_GPR_DATA_MASK               (0xFFFFFFFFU)
#define SECURITY_HSE_GPR_DATA_SHIFT              (0U)
#define SECURITY_HSE_GPR_DATA_WIDTH              (32U)
#define SECURITY_HSE_GPR_DATA(x)                 (((uint32_t)(((uint32_t)(x)) << SECURITY_HSE_GPR_DATA_SHIFT)) & SECURITY_HSE_GPR_DATA_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SECURITY_Register_Masks */

/*!
 * @}
 */ /* end of group SECURITY_Peripheral_Access_Layer */

#endif  /* #if !defined(S32G399A_SECURITY_H_) */
