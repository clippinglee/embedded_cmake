/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32CC
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.2
*   Build Version        : S32_RTD_D2203_ASR_REL_4_4_REV_0000_20220331
*
*   (c) Copyright 2020-2022 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
/**
*   @file       Clock_Ip_Cfg_Defines.h
*   @version    3.0.2
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Driver
*   @{
*/

#ifndef CLOCK_IP_CFG_DEFINES_H
#define CLOCK_IP_CFG_DEFINES_H


#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_CFG_DEFINES_VENDOR_ID                       43
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION        4
#define CLOCK_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define CLOCK_IP_CFG_DEFINES_SW_MAJOR_VERSION                3
#define CLOCK_IP_CFG_DEFINES_SW_MINOR_VERSION                0
#define CLOCK_IP_CFG_DEFINES_SW_PATCH_VERSION                2

/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/
/**
* @brief            Platform used.
*/
#define CLOCK_IP_PLATFORM_SPECIFIC1

/**
* @brief            Max number of internal oscillators
*/
#define CLOCK_IP_IRCOSCS_COUNT       (2U)

/**
* @brief            Max number of external oscillators
*/
#define CLOCK_IP_XOSCS_COUNT       (1U)

/**
* @brief            Max number of pll devices
*/
#define CLOCK_IP_PLLS_COUNT       (4U)

/**
* @brief            Max number of selectors
*/
#define CLOCK_IP_SELECTORS_COUNT       (23U)

/**
* @brief            Max number of dividers
*/
#define CLOCK_IP_DIVIDERS_COUNT       (28U)

/**
* @brief            Max number of divider triggers
*/
#define CLOCK_IP_DIVIDER_TRIGGERS_COUNT       (0U)

/**
* @brief            Max number of fractional dividers
*/
#define CLOCK_IP_FRACTIONAL_DIVIDERS_COUNT       (12U)

/**
* @brief            Max number of external clocks
*/
#define CLOCK_IP_EXT_CLKS_COUNT       (13U)

/**
* @brief            Max number of pcfs
*/
#define CLOCK_IP_PCFS_COUNT       (5U)

/**
* @brief            Max number of clock gates
*/
#define CLOCK_IP_GATES_COUNT       (3U)

/**
* @brief            Max number of clock monitoring units
*/
#define CLOCK_IP_CMUS_COUNT       (28U)

/**
* @brief            Max number of configured frequencies values
*/
#define CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT       (4U)

/**
* @brief            Max number of specific peripheral (eMIOS) units
*/
#define CLOCK_IP_SPECIFIC_PERIPH_COUNT       (0U)

/**
* @brief            Supported power mode.
*/
#define CLOCK_IP_HAS_RUN_MODE                0U

/**
* @brief            Firc frequency.
*/
#define CLOCK_IP_FIRC_FREQUENCY                48000000U

/**
* @brief            Sirc frequency.
*/
#define CLOCK_IP_SIRC_FREQUENCY                32000U

/**
* @brief            Clock ip supports clock frequency.
*/
#define CLOCK_IP_GET_FREQUENCY_API                (STD_OFF)

/**
* @brief            Default fxosc frequency.
*/
#define CLOCK_IP_DEFAULT_FXOSC_FREQUENCY                40000000U

/**
* @brief            Supported clocks.
*/
#define CLOCK_IP_HAS_FIRC_CLK         0U
#define CLOCK_IP_HAS_FXOSC_CLK         1U
#define CLOCK_IP_HAS_SIRC_CLK         2U
#define CLOCK_IP_HAS_COREPLL_CLK         3U
#define CLOCK_IP_HAS_PERIPHPLL_CLK         4U
#define CLOCK_IP_HAS_DDRPLL_CLK         5U
#define CLOCK_IP_HAS_ACCELPLL_CLK         6U
#define CLOCK_IP_HAS_CORE_PLL_PHI0_CLK         7U
#define CLOCK_IP_HAS_CORE_PLL_PHI1_CLK         8U
#define CLOCK_IP_HAS_CORE_PLL_DFS1_CLK         9U
#define CLOCK_IP_HAS_CORE_PLL_DFS2_CLK         10U
#define CLOCK_IP_HAS_CORE_PLL_DFS3_CLK         11U
#define CLOCK_IP_HAS_CORE_PLL_DFS4_CLK         12U
#define CLOCK_IP_HAS_CORE_PLL_DFS5_CLK         13U
#define CLOCK_IP_HAS_CORE_PLL_DFS6_CLK         14U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI0_CLK         15U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI1_CLK         16U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI2_CLK         17U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI3_CLK         18U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI4_CLK         19U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI5_CLK         20U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI6_CLK         21U
#define CLOCK_IP_HAS_PERIPH_PLL_PHI7_CLK         22U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS1_CLK         23U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS2_CLK         24U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS3_CLK         25U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS4_CLK         26U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS5_CLK         27U
#define CLOCK_IP_HAS_PERIPH_PLL_DFS6_CLK         28U
#define CLOCK_IP_HAS_DDR_PLL_PHI0_CLK         29U
#define CLOCK_IP_HAS_ACCEL_PLL_PHI0_CLK         30U
#define CLOCK_IP_HAS_ACCEL_PLL_PHI1_CLK         31U
#define CLOCK_IP_HAS_FTM_0_EXT_REF_CLK         32U
#define CLOCK_IP_HAS_FTM_1_EXT_REF_CLK         33U
#define CLOCK_IP_HAS_GMAC_0_EXT_REF_CLK         34U
#define CLOCK_IP_HAS_GMAC_0_EXT_RX_CLK         35U
#define CLOCK_IP_HAS_GMAC_0_EXT_TX_CLK         36U
#define CLOCK_IP_HAS_GMAC_EXT_TS_CLK         37U
#define CLOCK_IP_HAS_GMAC_1_EXT_TX_CLK         38U
#define CLOCK_IP_HAS_GMAC_1_EXT_RX_CLK         39U
#define CLOCK_IP_HAS_GMAC_1_EXT_REF_CLK         40U
#define CLOCK_IP_HAS_SERDES_0_LANE_0_TX         41U
#define CLOCK_IP_HAS_SERDES_0_LANE_0_CDR         42U
#define CLOCK_IP_HAS_SERDES_1_LANE_0_TX         43U
#define CLOCK_IP_HAS_SERDES_1_LANE_0_CDR         44U
#define CLOCK_IP_HAS_XBAR_2X_CLK         45U
#define CLOCK_IP_HAS_XBAR_CLK         46U
#define CLOCK_IP_HAS_XBAR_DIV2_CLK         47U
#define CLOCK_IP_HAS_XBAR_DIV3_CLK         48U
#define CLOCK_IP_HAS_XBAR_DIV4_CLK         49U
#define CLOCK_IP_HAS_XBAR_DIV6_CLK         50U
#define CLOCK_IP_HAS_A53_CORE_CLK         51U
#define CLOCK_IP_HAS_A53_CORE_DIV2_CLK         52U
#define CLOCK_IP_HAS_A53_CORE_DIV10_CLK         53U
#define CLOCK_IP_HAS_ACCEL3_CLK         54U
#define CLOCK_IP_HAS_ACCEL3_DIV3_CLK         55U
#define CLOCK_IP_HAS_ACCEL4_CLK         56U
#define CLOCK_IP_HAS_DDR_CLK         57U
#define CLOCK_IP_HAS_PER_CLK         58U
#define CLOCK_IP_HAS_GMAC0_REF_CLK         59U
#define CLOCK_IP_HAS_GMAC0_REF_DIV_CLK         60U
#define CLOCK_IP_HAS_GMAC1_REF_DIV_CLK         61U
#define CLOCK_IP_HAS_SERDES0_REF_CLK         62U
#define CLOCK_IP_HAS_SERDES1_REF_CLK         63U
#define CLOCK_IP_FEATURE_PRODUCERS_NO         64U
#define CLOCK_IP_HAS_ACCEL4_LAX0_CLK         65U
#define CLOCK_IP_HAS_ACCEL4_LAX1_CLK         66U
#define CLOCK_IP_HAS_ADC0_CLK         67U
#define CLOCK_IP_HAS_ADC1_CLK         68U
#define CLOCK_IP_HAS_CLKOUT0_CLK         69U
#define CLOCK_IP_HAS_CLKOUT1_CLK         70U
#define CLOCK_IP_HAS_CORE_A53_CLUSTER_0_CLK         71U
#define CLOCK_IP_HAS_CORE_A53_CLUSTER_1_CLK         72U
#define CLOCK_IP_HAS_CORE_M7_0_CLK         73U
#define CLOCK_IP_HAS_CORE_M7_1_CLK         74U
#define CLOCK_IP_HAS_CORE_M7_2_CLK         75U
#define CLOCK_IP_HAS_CRC0_CLK         76U
#define CLOCK_IP_HAS_CTU0_CLK         77U
#define CLOCK_IP_HAS_DDR0_CLK         78U
#define CLOCK_IP_HAS_DMA0_CLK         79U
#define CLOCK_IP_HAS_DMA1_CLK         80U
#define CLOCK_IP_HAS_DMAMUX0_CLK         81U
#define CLOCK_IP_HAS_DMAMUX1_CLK         82U
#define CLOCK_IP_HAS_DMAMUX2_CLK         83U
#define CLOCK_IP_HAS_DMAMUX3_CLK         84U
#define CLOCK_IP_HAS_DMA_CRC0_CLK         85U
#define CLOCK_IP_HAS_DMA_CRC1_CLK         86U
#define CLOCK_IP_HAS_EIM0_CLK         87U
#define CLOCK_IP_HAS_EIM1_CLK         88U
#define CLOCK_IP_HAS_EIM2_CLK         89U
#define CLOCK_IP_HAS_EIM3_CLK         90U
#define CLOCK_IP_HAS_EIM_BBE32DSP_CLK         91U
#define CLOCK_IP_HAS_EIM_LAX0_CLK         92U
#define CLOCK_IP_HAS_EIM_LAX1_CLK         93U
#define CLOCK_IP_HAS_EIM_PER1_CLK         94U
#define CLOCK_IP_HAS_EIM_CLK         95U
#define CLOCK_IP_HAS_ERM_CPU0_CLK         96U
#define CLOCK_IP_HAS_ERM_CPU1_CLK         97U
#define CLOCK_IP_HAS_ERM_CPU2_CLK         98U
#define CLOCK_IP_HAS_ERM_EDMA0_CLK         99U
#define CLOCK_IP_HAS_ERM_EDMA1_CLK         100U
#define CLOCK_IP_HAS_ERM_LAX0_CLK         101U
#define CLOCK_IP_HAS_ERM_LAX1_CLK         102U
#define CLOCK_IP_HAS_ERM_PER_CLK         103U
#define CLOCK_IP_HAS_ERM_PER1_CLK         104U
#define CLOCK_IP_HAS_ERM0_CLK         105U
#define CLOCK_IP_HAS_FDMA0_CLK         106U
#define CLOCK_IP_HAS_FLEXCAN_CLK         107U
#define CLOCK_IP_HAS_FLEXCAN0_CLK         108U
#define CLOCK_IP_HAS_FLEXCAN1_CLK         109U
#define CLOCK_IP_HAS_FLEXCAN2_CLK         110U
#define CLOCK_IP_HAS_FLEXCAN3_CLK         111U
#define CLOCK_IP_HAS_FLEXCAN4_CLK         112U
#define CLOCK_IP_HAS_FLEXCAN5_CLK         113U
#define CLOCK_IP_HAS_FLEXCAN6_CLK         114U
#define CLOCK_IP_HAS_FLEXCAN7_CLK         115U
#define CLOCK_IP_HAS_FLEXRAY_CLK         116U
#define CLOCK_IP_HAS_FRAY0_CLK         117U
#define CLOCK_IP_HAS_FLEXTIMERA_CLK         118U
#define CLOCK_IP_HAS_FTIMER0_CLK         119U
#define CLOCK_IP_HAS_FLEXTIMERB_CLK         120U
#define CLOCK_IP_HAS_FTIMER1_CLK         121U
#define CLOCK_IP_HAS_GMAC_TS_CLK         122U
#define CLOCK_IP_HAS_GMAC0_TS_CLK         123U
#define CLOCK_IP_HAS_GMAC0_RX_CLK         124U
#define CLOCK_IP_HAS_GMAC0_TX_CLK         125U
#define CLOCK_IP_HAS_GMAC1_TS_CLK         126U
#define CLOCK_IP_HAS_GMAC1_RX_CLK         127U
#define CLOCK_IP_HAS_GMAC1_TX_CLK         128U
#define CLOCK_IP_HAS_IIC0_CLK         129U
#define CLOCK_IP_HAS_IIC1_CLK         130U
#define CLOCK_IP_HAS_LBIST_CLK         131U
#define CLOCK_IP_HAS_LBIST0_CLK         132U
#define CLOCK_IP_HAS_LBIST1_CLK         133U
#define CLOCK_IP_HAS_LBIST2_CLK         134U
#define CLOCK_IP_HAS_LBIST3_CLK         135U
#define CLOCK_IP_HAS_LBIST4_CLK         136U
#define CLOCK_IP_HAS_LBIST5_CLK         137U
#define CLOCK_IP_HAS_LBIST6_CLK         138U
#define CLOCK_IP_HAS_LBIST7_CLK         139U
#define CLOCK_IP_HAS_LIN_BAUD_CLK         140U
#define CLOCK_IP_HAS_LINFLEXD_CLK         141U
#define CLOCK_IP_HAS_LIN0_CLK         142U
#define CLOCK_IP_HAS_LIN1_CLK         143U
#define CLOCK_IP_HAS_OCOTP0_CLK         144U
#define CLOCK_IP_HAS_PIT0_CLK         145U
#define CLOCK_IP_HAS_PIT1_CLK         146U
#define CLOCK_IP_HAS_QSPI_2X_CLK         147U
#define CLOCK_IP_HAS_QSPI_1X_CLK         148U
#define CLOCK_IP_HAS_QSPI0_CLK         149U
#define CLOCK_IP_HAS_SIUL0_CLK         150U
#define CLOCK_IP_HAS_SIUL1_CLK         151U
#define CLOCK_IP_HAS_SPI_CLK         152U
#define CLOCK_IP_HAS_SPI0_CLK         153U
#define CLOCK_IP_HAS_SPI1_CLK         154U
#define CLOCK_IP_HAS_SPI2_CLK         155U
#define CLOCK_IP_HAS_SPI3_CLK         156U
#define CLOCK_IP_HAS_SPI4_CLK         157U
#define CLOCK_IP_HAS_SPI5_CLK         158U
#define CLOCK_IP_HAS_STM0_CLK         159U
#define CLOCK_IP_HAS_STM1_CLK         160U
#define CLOCK_IP_HAS_STM2_CLK         161U
#define CLOCK_IP_HAS_STM3_CLK         162U
#define CLOCK_IP_HAS_STM4_CLK         163U
#define CLOCK_IP_HAS_STM5_CLK         164U
#define CLOCK_IP_HAS_STM6_CLK         165U
#define CLOCK_IP_HAS_STM7_CLK         166U
#define CLOCK_IP_HAS_SWT0_CLK         167U
#define CLOCK_IP_HAS_SWT1_CLK         168U
#define CLOCK_IP_HAS_SWT2_CLK         169U
#define CLOCK_IP_HAS_SWT3_CLK         170U
#define CLOCK_IP_HAS_SWT4_CLK         171U
#define CLOCK_IP_HAS_SWT5_CLK         172U
#define CLOCK_IP_HAS_SWT6_CLK         173U
#define CLOCK_IP_HAS_SDHC_CLK         174U
#define CLOCK_IP_HAS_USDHC0_CLK         175U
#define CLOCK_IP_HAS_WKPU0_CLK         176U
#define CLOCK_IP_HAS_XBAR_DIV3_FAIL_CLK         177U
#define CLOCK_IP_HAS_XBAR_MIPICSI201_CLK         178U
#define CLOCK_IP_HAS_XBAR_MIPICSI223_CLK         179U
#define CLOCK_IP_FEATURE_NAMES_NO         180U

/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/



#ifdef __cplusplus
}
#endif

#endif /* #ifndef CLOCK_IP_CFG_DEFINES_H */

/** @} */


