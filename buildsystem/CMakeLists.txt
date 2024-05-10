cmake_minimum_required(VERSION 3.16)

set(COMPILERS_PATH  /home/ubuntu/workspace)

# SET HERE THE PATH TO YOUR C99 AND C++ COMPILERS
set(CMAKE_C_COMPILER ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/bin/arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/bin/arm-none-eabi-g++)
set(CMAKE_LINKER ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/bin/arm-none-eabi-gcc) # set linkfile path
set(CMAKE_ASM_COMPILER ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/bin/arm-none-eabi-gcc)

set(CMAKE_C_COMPILER_WORKS TRUE CACHE INTERNAL "")
set(CMAKE_CXX_COMPILER_WORKS 1 CACHE INTERNAL "")
set(CMAKE_ASM_COMPILER_WORKS TRUE CACHE INTERNAL "")

set(PROJECT_NAME S32G)
project(${PROJECT_NAME} CXX C ASM)


set(SOURCE_FILES
    example/src/main.c
)


# SET HERE YOUR BUILDING FLAGS
set(FLAGS "-O2 -ffunction-sections -mno-unaligned-access \
    -g -finline -Wall -Wsign-compare -Wno-multichar \
    -Wno-unused-parameter -Wno-unused-function -Wno-unused-label -Wno-tautological-compare \
    -fno-short-enums -fno-common -fdata-sections -fno-exceptions \
    -mcpu=cortex-m7 -mfpu=fpv5-sp-d16 -mfloat-abi=softfp -nostdlib \
    --sysroot=${COMPILERS_PATH}/gcc-9.2-arm32-eabi/arm-none-eabi/newlib " CACHE STRING "" FORCE)

set(CMAKE_C_FLAGS "-std=c11 ${FLAGS} -Wstrict-prototypes -Wwrite-strings \
" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS "-std=c++11 ${FLAGS} -fno-exceptions -fno-rtti -fno-threadsafe-statics \
    -" CACHE STRING "" FORCE)
set(CMAKE_ASM_FLAGS " ${FLAGS} -x assembler-with-cpp " CACHE STRING "" FORCE)



#set library genric path
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/lib)
# set executed path  
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

set(CMAKE_MAP_FILE_NAME "${PROJECT_SOURCE_DIR}/bin/${PROJECT_NAME}.map")

set(CMAKE_SYSROOT ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/arm-none-eabi/newlib)

set(OUT_FILE_EXT .elf)
set(MAP_FILE_EXT .map)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE C SUFFIX ${OUT_FILE_EXT})

target_link_options(${PROJECT_NAME}
PRIVATE
    -eReset_Handler
    -Wl,-Map,${CMAKE_MAP_FILE_NAME}
PRIVATE
    -T${PROJECT_SOURCE_DIR}/example/Project_Settings/Linker_Files/linker_ram.ld
)

#add anther libraries
target_link_libraries(${PROJECT_NAME}
PRIVATE
   ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/arm-none-eabi/newlib/lib/libc.a  
   ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/lib/gcc/arm-none-eabi/9.2.0/libgcc.a
   ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/arm-none-eabi/newlib/lib/libm.a
PUBLIC 
   example
)

# set compile opation
target_compile_definitions(${PROJECT_NAME}
PUBLIC 
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

#link_directories(${COMPILERS_PATH}/gcc-9.2-arm32-eabi/arm-none-eabi/newlib/lib/crt0.o/directory)


set(INCLUDE_PATHS
#${COMPILERS_PATH}/gcc-9.2-arm32-eabi/arm-none-eabi/include
#${COMPILERS_PATH}/gcc-9.2-arm32-eabi/arm-none-eabi/usr/include
#${COMPILERS_PATH}/gcc-9.2-arm32-eabi/lib/gcc/arm-none-eabi/9.2.0/include
#${COMPILERS_PATH}/gcc-9.2-arm32-eabi/lib/gcc/arm-none-eabi/9.2.0/include-fixed
/home/ubuntu/workspace/embedded_cmake/buildsystem/example/Include/Base_TS_T40D11M30I2R0/header
/home/ubuntu/workspace/embedded_cmake/buildsystem/example/Include/Base_TS_T40D11M30I2R0/include
/home/ubuntu/workspace/embedded_cmake/buildsystem/example/Include/Platform_TS_T40D11M30I2R0/startup/include
)

foreach(i ${INCLUDE_PATHS})
    list(APPEND CMAKE_INCLUDE_PATHS "$<BUILD_INTERFACE:${i}>")
    list(APPEND CMDLINE_INCLUDE_PATHS "-I${i}")    
endforeach(i ${INCLUDE_PATHS})


#include directories path
target_include_directories(
    ${PROJECT_NAME}
PUBLIC 
    ${COMPILERS_PATH}/gcc-9.2-arm32-eabi/lib/gcc/arm-none-eabi/9.2.0/include
PRIVATE
    ${PROJECT_SOURCE_DIR}/example/generate/include
    PRIVATE ${CMAKE_INCLUDE_PATHS}
)


add_subdirectory(example)