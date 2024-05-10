
set(PROJECT_NAME example)

set(SOURCE_FILES
    board/Siul2_Port_Ip_Cfg.c
    generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.c
    generate/src/Clock_Ip_Cfg.c
    generate/src/OsIf_Cfg.c
    RTD/src/Clock_Ip.c
    RTD/src/Clock_Ip_Data.c
    RTD/src/Clock_Ip_Divider.c
    RTD/src/Clock_Ip_DividerTrigger.c
    RTD/src/Clock_Ip_ExtOsc.c
    RTD/src/Clock_Ip_FracDiv.c
    RTD/src/Clock_Ip_Gate.c
    RTD/src/Clock_Ip_IntOsc.c
    RTD/src/Clock_Ip_Monitor.c
    RTD/src/Clock_Ip_Pll.c
    RTD/src/Clock_Ip_ProgFreqSwitch.c
    RTD/src/Clock_Ip_Selector.c
    RTD/src/Clock_Ip_Specific.c
    RTD/src/OsIf_Timer.c
    RTD/src/OsIf_Timer_System.c
    RTD/src/SchM_Mcu.c
    RTD/src/SchM_Port.c
    RTD/src/Siul2_Port_Ip.c
    Project_Settings/Startup_Code/exceptions.c
    Project_Settings/Startup_Code/nvic.c
    Project_Settings/Startup_Code/startup.c
    Project_Settings/Startup_Code/startup_cm7.s
    Project_Settings/Startup_Code/system.c
    Project_Settings/Startup_Code/Vector_Table.s
)

#detal: library type STATIC|SHARED|MODULE
add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})


#include directories path
target_include_directories(
    ${PROJECT_NAME}
PUBLIC 
    ${CMAKE_INCLUDE_PATHS}
PRIVATE
    ${PROJECT_SOURCE_DIR}/example/board
    ${PROJECT_SOURCE_DIR}/example/generate/include
    ${PROJECT_SOURCE_DIR}/example/RTD/include
)

#add ather libraries
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
    
    )

# set compile opation
target_compile_definitions(${PROJECT_NAME}
    PRIVATE 
    USE_SW_VECTOR_MODE
    D_CACHE_ENABLE
    I_CACHE_ENABLE
    ENABLE_FPU
    MPU_ENABLE
    GCC
    CPU_S32G274A
    S32G2XX
    CPU_CORTEX_M7
    )
