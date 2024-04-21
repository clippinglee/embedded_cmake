cmake_minimum_required(VERSION 3.16)
set(PROJECT_NAME add)

project(${PROJECT_NAME} CXX C)
# SET HERE THE PATH TO YOUR C99 AND C++ COMPILERS
set(CMAKE_C_COMPILER /tool/gcc_linaro/gcc-arm-none-eabi-7.3.1/bin/arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER /tool/gcc_linaro/gcc-arm-none-eabi-7.3.1/bin/arm-none-eabi-g++)
set(CMAKE_LINKER "arm-none-eabi-ld") # set linkfile path

set(CMAKE_C_COMPILER_WORKS 1 CACHE INTERNAL "")
set(CMAKE_CXX_COMPILER_WORKS 1 CACHE INTERNAL "")

set(SOURCE_FILES
    CtIpcIcc.cpp
    IccIrq.cpp
    IccHelper.cpp
)

#detal: library type STATIC|SHARED|MODULE
add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

# SET HERE YOUR BUILDING FLAGS
set(FLAGS "-O2 -ffunction-sections -mno-unaligned-access \
    -g -finline -Wall -Wsign-compare -Wno-multichar \
    -Wno-unused-parameter -Wno-unused-function -Wno-unused-label -Wno-tautological-compare \
    -fno-short-enums -fno-common -fdata-sections -fno-exceptions \
    -mcpu=cortex-r5 -mfpu=vfpv3-d16 -mfloat-abi=hard \
    -nostdlib" CACHE STRING "" FORCE)

set(CMAKE_C_FLAGS_INIT "-std=c11 ${FLAGS} -Wstrict-prototypes -Wwrite-strings \
-DCLOCK_MONOTONIC=0 -D'__attribute__(x)='" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS_INIT "-std=c++11 ${FLAGS} -fno-exceptions -fno-rtti -fno-threadsafe-statics \
    -DCLOCK_MONOTONIC=0 -D'__attribute__(x)='" CACHE STRING "" FORCE)


#set library genric path
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/lib)

# add include header path
include_directories(${PROJECT_SOURCE_DIR}/src/include)
#include directories path
target_include_directories(
    ${PROJECT_NAME}
PUBLIC 
    INTERFACE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src/include>
    $<INSTALL_INTERFACE:include>
PRIVATE

)

#add ather libraries
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
    time_sync

    
    )

# set compile opation
target_compile_definitions(${PROJECT_NAME}
    PRIVATE 

    )

set(OUT_FILE_BASENAME ${SOURCE_FILES}.elf)
add_executable(${OUT_FILE_BASENAME} ${SOURCE_FILES})
set_target_properties(${OUT_FILE_BASENAME} PROPERTIES LINKER_LANGUAGE C SUFFIX ${OUT_FILE_EXT})



