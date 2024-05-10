/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.2
*   Build Version        : S32_RTD_3_0_2_D2203_ASR_REL_4_4_REV_0000_20220331
*
*   (c) Copyright 2022 NXP Semiconductors
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
/*
* GCC Linker Command File:
* 0x20100000	0x2010FFFF	64KB	M7_0 TCM Backdoor
* 0x20180000	0x2018FFFF	64KB	M7_1 TCM Backdoor
* 0x20200000	0x2020FFFF	64KB	M7_2 TCM Backdoor
* 0x20280000	0x2028FFFF	64KB	M7_3 TCM Backdoor
* 0x24000000	0x33FFFFFF	262144	Standby RAM (32K)
* 0x34000000	0x353FFFFF	6144	Internal SRAM  
*
*
*
*
*
*/
HEAP_SIZE  = DEFINED(__heap_size__)  ? __heap_size__  : 0x00001000;

ENTRY(Reset_Handler)

MEMORY 
{         
    int_itcm                   : ORIGIN = 0x00000000, LENGTH = 0x00000000 /* 0KB - Not Supported */
    int_dtcm                   : ORIGIN = 0x20000000, LENGTH = 0x00010000 /* 64K */
    int_sram_shareable         : ORIGIN = 0x22C00000, LENGTH = 0x00004000 /* 16KB */
    int_sram_c0                : ORIGIN = 0x34000000, LENGTH = 0x00178000 /* 1.5MB - 8KB */
    int_sram_stack_c0          : ORIGIN = 0x34178000, LENGTH = 0x00002000 /* 8KB  */
	int_sram_no_cacheable_c0   : ORIGIN = 0x34180000, LENGTH = 0x00080000 /* 512KB, needs to include int_results  */
	ram_end_c0                 : ORIGIN = 0x34200000, LENGTH = 0x00000000 /* End of core 0 ram */
    int_sram_c1                : ORIGIN = 0x34200000, LENGTH = 0x00178000 /* 1.5MB - 8KB */
    int_sram_stack_c1          : ORIGIN = 0x34378000, LENGTH = 0x00002000 /* 8KB  */
	int_sram_no_cacheable_c1   : ORIGIN = 0x34380000, LENGTH = 0x00080000 /* 512KB, needs to include int_results  */
    ram_end_c1                 : ORIGIN = 0x34400000, LENGTH = 0x00000000 /* End of core 1 ram */
	int_sram_c2                : ORIGIN = 0x34400000, LENGTH = 0x00178000 /* 1.5MB - 8KB */
    int_sram_stack_c2          : ORIGIN = 0x34578000, LENGTH = 0x00002000 /* 8KB  */
	int_sram_no_cacheable_c2   : ORIGIN = 0x34580000, LENGTH = 0x00080000 /* 512KB, needs to include int_results  */
    ram_end_c2                 : ORIGIN = 0x34600000, LENGTH = 0x00000000 /* End of core 2 ram */
	int_sram_c3                : ORIGIN = 0x34600000, LENGTH = 0x00178000 /* 1.5MB - 8KB */
    int_sram_stack_c3          : ORIGIN = 0x34778000, LENGTH = 0x00002000 /* 8KB  */
	int_sram_no_cacheable_c3   : ORIGIN = 0x34780000, LENGTH = 0x00080000 /* 512KB, needs to include int_results  */
    ram_end_c3                 : ORIGIN = 0x34800000, LENGTH = 0x00000000 /* End of core 3 ram */
	ram_rsvd2                  : ORIGIN = 0x34800000, LENGTH = 0x00BFFFFF          /* End of SRAM */
							   
    LLCE_CAN_SHAREDMEMORY   : ORIGIN = 0x43800000 LENGTH = 0x3C800
    LLCE_LIN_SHAREDMEMORY   : ORIGIN = 0x4383C800 LENGTH = 0xa0
    LLCE_BOOT_END           : ORIGIN = 0x4383C8A0 LENGTH = 0x50 
	LLCE_MEAS_SHAREDMEMORY  : ORIGIN = 0x4384FFDF LENGTH = 0x20
}


SECTIONS
{
    
    .sram :
    {
        . = ALIGN(4);
        KEEP(*(.core_loop)) 
        . = ALIGN(4);
        *(.startup) 
        . = ALIGN(4);
        *(.text.startup) 
        . = ALIGN(4);
        *(.text)
        *(.text*) 
        . = ALIGN(4);
        *(.mcal_text) 
        . = ALIGN(4);
        KEEP(*(.init))
        . = ALIGN(4);
        KEEP(*(.fini)) 
         
        . = ALIGN(4);
        *(.rodata)  
        *(.rodata*)  
        . = ALIGN(4);
        *(.mcal_const_cfg)  
        . = ALIGN(4);
        *(.mcal_const)  
        . = ALIGN(4);
        __init_table = .;
        KEEP(*(.init_table))  
        . = ALIGN(4);
        __zero_table = .;
        KEEP(*(.zero_table))
        
        . = ALIGN(4);
        *(.acfls_code_rom) 
        . = ALIGN(4);
        *(.aceep_code_rom) 
        . = ALIGN(4);
        *(.acmcu_code_rom) 
        . = ALIGN(4);
        *(.ramcode)    
        . = ALIGN(4);
        *(.data)  
        *(.data*)
        . = ALIGN(4);
        *(.mcal_data)  
        . = ALIGN(16);
        __sram_bss_start = .;
        *(.bss)
        *(.bss*)
        . = ALIGN(16);
        *(.mcal_bss)
        . = ALIGN(4);
        __sram_bss_end = .;
    } > int_sram_c1

    .non_cacheable :
    {
        . = ALIGN(4);
        KEEP(*(.int_results))  
        . += 0x100;
        . = ALIGN(4096);
        __interrupts_ram_start = .;
        KEEP(*(.intc_vector))    
        . = ALIGN(4);
        __interrupts_ram_end = .;
        . = ALIGN(16);
        __non_cacheable_bss_start = .;
        *(.mcal_bss_no_cacheable)      
        . = ALIGN(4);
        __non_cacheable_bss_end = .;
        . = ALIGN(4);
        *(.mcal_data_no_cacheable)        
        . = ALIGN(4);
        *(.mcal_const_no_cacheable)
        HSE_LOOP_ADDR = .;
        LONG(0x0);
        . = ALIGN(0x40000);
        KEEP(*(.pfe_bmu_mem))
        . = ALIGN(4);
        KEEP(*(.pfe_bd_mem))
        . = ALIGN(4);
        KEEP(*(.pfe_buf_mem))
    } > int_sram_no_cacheable_c1
    /* heap section */        
    .heap (NOLOAD):
    {
    	. += ALIGN(4);
	    _end = .;
	    end = .;
        _heap_start = .;
        . += HEAP_SIZE;
        _heap_end = .;
    } > int_sram_no_cacheable_c0

    .llce_boot_end (NOLOAD) :
    {
        /* ------------------------------------   llce_boot_end sections ------------------------------------ */
        . = ALIGN(0x4);
        *(.llce_boot_end)
    } > LLCE_BOOT_END

    .can_43_llce_sharedmemory (NOLOAD) :
    {
        /* ------------------------------------   can_43_llce_sharedmemory sections ------------------------------------ */
        . = ALIGN(0x4);
        *(.can_43_llce_sharedmemory)
    } > LLCE_CAN_SHAREDMEMORY

    .lin_43_llce_sharedmemory (NOLOAD) :
    {
        /* ------------------------------------   lin_43_llce_sharedmemory sections ------------------------------------ */
        . = ALIGN(0x4);
        *(.lin_43_llce_sharedmemory)
    } > LLCE_LIN_SHAREDMEMORY

    .llce_meas_sharedmemory (NOLOAD) :
    {
        /* ------------------------------------   llce_meas_sharedmemory sections ------------------------------------ */
        . = ALIGN(0x4);
        *(.llce_meas_sharedmemory)
    } > LLCE_MEAS_SHAREDMEMORY
    
    .shareable_ram_bss (NOLOAD):
    {
    	. = ALIGN(16);
    	__shareable_bss_start = .;
    	KEEP(*(.mcal_shared_bss))
    	. = ALIGN(4);
    	__shareable_bss_end = .;
    } > int_sram_shareable

    .shareable_ram_data (NOLOAD) : 
    {
        . = ALIGN(16);
	__shareable_data_start = .;
    	KEEP(*(.mcal_shared_data))
	. = ALIGN(4);
	__shareable_data_end = .;
    } > int_sram_shareable

    __Stack_end_c0           = ORIGIN(int_sram_stack_c0);
    __Stack_start_c0         = ORIGIN(int_sram_stack_c0) + LENGTH(int_sram_stack_c0);
    __Stack_end_c1           = ORIGIN(int_sram_stack_c1);
    __Stack_start_c1         = ORIGIN(int_sram_stack_c1) + LENGTH(int_sram_stack_c1);  
    __Stack_end_c2           = ORIGIN(int_sram_stack_c2);
    __Stack_start_c2         = ORIGIN(int_sram_stack_c2) + LENGTH(int_sram_stack_c2); 
    __Stack_end_c3           = ORIGIN(int_sram_stack_c3);
    __Stack_start_c3         = ORIGIN(int_sram_stack_c3) + LENGTH(int_sram_stack_c3);
    
    __INT_SRAM_START         = ORIGIN(int_sram_c1);
    __INT_SRAM_END           = ORIGIN(ram_end_c1);
    
    __INT_ITCM_START         = ORIGIN(int_itcm);
    __INT_ITCM_END           = ORIGIN(int_itcm) + LENGTH(int_itcm);
    
    __INT_DTCM_START         = ORIGIN(int_dtcm);
    __INT_DTCM_END           = ORIGIN(int_dtcm) + LENGTH(int_dtcm);
    
    __RAM_SHAREABLE_START    = ORIGIN(int_sram_shareable);
    __RAM_SHAREABLE_END      = ORIGIN(int_sram_shareable) + LENGTH(int_sram_shareable) - 1;
    __ROM_SHAREABLE_START    = 0;
    __ROM_SHAREABLE_END      = 0;
    __RAM_NO_CACHEABLE_START = ORIGIN(int_sram_no_cacheable_c1);
    __RAM_NO_CACHEABLE_END   = ORIGIN(int_sram_no_cacheable_c1) + LENGTH(int_sram_no_cacheable_c1) - 1;
    __ROM_NO_CACHEABLE_START = 0;
    __ROM_NO_CACHEABLE_END   = 0;
    __RAM_CACHEABLE_START    = ORIGIN(int_sram_c1);
    __RAM_CACHEABLE_END      = ORIGIN(int_sram_c1) + LENGTH(int_sram_c1) - 1;
    __ROM_CACHEABLE_START    = 0;
    __ROM_CACHEABLE_END      = 0;
    
    __BSS_SRAM_START         = __sram_bss_start;
    __BSS_SRAM_END           = __sram_bss_end;
    __BSS_SRAM_SIZE          = __sram_bss_end - __sram_bss_start;
    
    __BSS_SRAM_NC_START      = __non_cacheable_bss_start;
    __BSS_SRAM_NC_SIZE       = __non_cacheable_bss_end - __non_cacheable_bss_start;
    __BSS_SRAM_NC_END        = __non_cacheable_bss_end;

    __BSS_SRAM_SH_START       = __shareable_bss_start;
    __BSS_SRAM_SH_SIZE        = __shareable_bss_end - __shareable_bss_start;
    __BSS_SRAM_SH_END         = __shareable_bss_end;

    __RAM_INTERRUPT_START    = __interrupts_ram_start;
    __ROM_INTERRUPT_START    = 0;
    __ROM_INTERRUPT_END      = 0;

    __INIT_TABLE             = __init_table;
    __ZERO_TABLE             = __zero_table;
    
    __RAM_INIT               = 0;
    __ITCM_INIT              = 0;
    __DTCM_INIT              = 1;
   /* Discard boot header in RAM */
   /DISCARD/ : { *(.boot_header) }

}
