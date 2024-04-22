/*==================================================================================================

   @file        autosar_flash.ld
   @version     1.0.0

   @brief       GHS Linker Command File for Internal FLASH for XPC574XP
   @details     GHS Linker Command File for Internal FLASH for XPC574XP.
====================================================================================================
   Project      : AUTOSAR 4.0 MCAL
   Platform     : PA
   Peripheral   : 
   Dependencies : Base Det Dem Port Dio Mcu Rte Wdg WdgIf CanIf LinIf FrIf EcuM

   Autosar Version       : 4.0.3
   Autosar Revision      : ASR_REL_4_0_REV_0003
   Autosar Conf. Variant :
   Software Version      : 1.0.0
   Build Version         : MPC57xxP_sMCAL_1_0_0_RTM_ASR_REL_4_0_REV_0003_20141024

   (c) Copyright 2006-2014 Freescale Semiconductor Inc and STMicroelectronics
   All Rights Reserved.

    This file contains sample code only. It is not part of the production code deliverables.

===================================================================================================

==================================================================================================*/

MEMORY {
    /* 5744P - Flash 2.0 MB - 0x01000000 - 0x011FFFFF */
    
	flash_rsvd0         : ORIGIN = 0x00f98000, LENGTH = 0x20
    flash_calib         : ORIGIN = 0x00fe0020, LENGTH = 0x1ffdf
 RESETWORD   : org = 0x01000000, len = 0x00000010
 ROM1        : org = 0x01000010, len = 0x00000FF0
 INTTABLE    : org = 0x01001000, len = 0x00003000
 MCALROM     : org = 0x01004000, len = 0x00001000 
 ROM2        : org = 0x01005000, len = 0x001FD000
    flash_rsvd2         : ORIGIN = .,          LENGTH = 0

    /* 5744P - SRAM 384 KB : 0x40000000 - 0x4005FFFF */
    
    ram_rsvd1           : ORIGIN = 0x20000000, LENGTH = 0
 RAM_FLEXRAY_ETH : org = 0x40000000, len = 0x0000FFF0
	RAM_BOOT_RSV  : org = 0x4000FFF0, len = 0x00000010
 RAM             : org = 0x40010000, len = 0x00040000
 STACK           : org = 0x40050000, len = 0x00010000
 ram_rsvd2             : ORIGIN = .,          LENGTH = 0
}

//
// Program layout for starting in ROM, copying data to RAM,
// and continuing to execute out of ROM.
//

SECTIONS
{

    .ramcode                                      : > .
    .mcal_data                                      : > .
    .acfls_code_ram                        ALIGN(4) : {. += SIZEOF(.acfls_code_rom);} > .
    // make sure the size of the reserved space is 4-bytes aligned     
    .acfls_code_ram_end                    ALIGN(4) : > .
    .mcal_bss_no_cacheable                          : > .
    .mcal_data_no_cacheable                         : > . 
	
	
.EthRamDesc                     ALIGN(16) : > .                            
.EthRamBuf                      ALIGN(16) : > .                                                                                                                       
	
	
 .PPC.EMB.sdata0                        ABS : > RAM
 .PPC.EMB.sbss0                   CLEAR ABS : > .
 .sdabase                          ALIGN(4) : > .
 .sdata                            ALIGN(4) : > .
 .sbss                             ALIGN(4) : > .
 .data                             ALIGN(4) : > .
 .bss                              ALIGN(4) : > .
 .osdata                           ALIGN(4) : > .
 .ossdata                          ALIGN(4) : > .
 .osudata                          ALIGN(4) : > .
 .osccbudata_c0                    align(4) : > .
 .EthDesc                         ALIGN(16) :> .
 .EthBuffers                      ALIGN(16) :> .                                                                                                                                               


 .heap                            ALIGN(16) : > STACK
 .stack                           ALIGN(16) : > .
 .osstack                         ALIGN(16) : > .
 .osstackprepost				  ALIGN(16) : > .
 .osstackidl                      ALIGN(16) : > .
 .osstacksys                      ALIGN(16) : > .
 .osstackerr                      ALIGN(16) : > .
 .osLevelStackCore0Level0         ALIGN(16) : > .
 .osLevelStackCore0Level1         ALIGN(16) : > .
 .osLevelStackCore0Level2         ALIGN(16) : > .
 .osstackshdn                     ALIGN(16) : > .
 .osTaskStack0                    ALIGN(16) : > .
 .osTaskStack1                    ALIGN(16) : > .
 .osTaskStack2                    ALIGN(16) : > .
 .osTaskStack3                    ALIGN(16) : > .
 .osTaskStack4                    ALIGN(16) : > .
 .osTaskStack5                    ALIGN(16) : > .
 .osTaskStack6                    ALIGN(16) : > .
 .osTaskStack7                    ALIGN(16) : > .
 .osTaskStack8                    ALIGN(16) : > .
 .osTaskStack9                    ALIGN(16) : > .
 .osTaskStackPrio2				  ALIGN(16) : > .
 . : > .
 
                                           


// ROM SECTIONS
 .resetword                      NOCHECKSUM : > RESETWORD
    .rcw                                            : > .
    .rcw0                                           : > flash_rsvd0
    .calibdata                                          : > flash_calib
	
	
	
    .startup                       ALIGN(16) : > ROM1

 .emptyptr             : > INTTABLE
                                    
                                                                                                                            
                                                                                       
                                                    
 
 
// These special symbols mark the bounds of RAM and ROM memory.
_RAM_START_ADDR = 0x40000000;


SECTIONS my_custom_section
{
    .my_custom_section : { *(.my_custom_section) } > ROM1
}
  
//
// ROM SECTIONS
//

    .mcal_text                                      : > MCALROM

    .ROM.ramcode               ROM(.ramcode) ALIGN(0x10) : > .
    .ROM.mcal_data                  ROM(.mcal_data) : > .
    .ROM.mcal_data_no_cacheable  ROM(.mcal_data_no_cacheable ) : > .
    .mcal_const_cfg                                 : > .
    .mcal_const                                     : > .    
    .acfls_code_rom                        ALIGN(4) : > .



}

