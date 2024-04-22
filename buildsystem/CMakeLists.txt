cmake_minimum_required(VERSION 3.16)


# SET HERE THE PATH TO YOUR C99 AND C++ COMPILERS
set(CMAKE_C_COMPILER /home/ubuntu/workspace/gcc-9.2-arm32-eabi/bin/arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER /home/ubuntu/workspace/gcc-9.2-arm32-eabi/bin/arm-none-eabi-g++)
set(CMAKE_LINKER /home/ubuntu/workspace/gcc-9.2-arm32-eabi/bin/arm-none-eabi-ld) # set linkfile path

set(CMAKE_C_COMPILER_WORKS TRUE)
set(CMAKE_CXX_COMPILER_WORKS 1 CACHE INTERNAL "")

project(${PROJECT_NAME} CXX C)
set(PROJECT_NAME hello_world)

set(SOURCE_FILES
    example/hello.c
)


# SET HERE YOUR BUILDING FLAGS
set(FLAGS "-O2 -ffunction-sections -mno-unaligned-access \
    -g -finline -Wall -Wsign-compare -Wno-multichar \
    -Wno-unused-parameter -Wno-unused-function -Wno-unused-label -Wno-tautological-compare \
    -fno-short-enums -fno-common -fdata-sections -fno-exceptions \
    -mcpu=cortex-m7 -mfpu=vfpv5-sp-d16 -mfloat-abi=softfp -specs=nosys.specs  \
    --sysroot=/home/ubuntu/workspace/gcc-9.2-arm32-eabi/arm-none-eabi/newlib \
    -nostdlib" CACHE STRING "" FORCE)

set(CMAKE_C_FLAGS_INIT "-std=c11 ${FLAGS} -Wstrict-prototypes -Wwrite-strings \
-DCLOCK_MONOTONIC=0 -D'__attribute__(x)='" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS_INIT "-std=c++11 ${FLAGS} -fno-exceptions -fno-rtti -fno-threadsafe-statics \
    -DCLOCK_MONOTONIC=0 -D'__attribute__(x)='" CACHE STRING "" FORCE)


#set library genric path
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/lib)

# add include header path
include_directories(${PROJECT_SOURCE_DIR}/example/include)



set(CMAKE_SYSROOT /home/ubuntu/workspace/gcc-9.2-arm32-eabi/arm-none-eabi/newlib)



set(OUT_FILE_BASENAME ${PROJECT_NAME}.elf)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

set_target_properties(${PROJECT_NAME} PROPERTIES "-Texample/example.ld" SUFFIX ${OUT_FILE_EXT})
#add anther libraries
target_link_libraries(${PROJECT_NAME}
PRIVATE
   /home/ubuntu/workspace/gcc-9.2-arm32-eabi/arm-none-eabi/newlib/lib/libc.a   
)

# set compile opation
target_compile_definitions(${PROJECT_NAME}
    PRIVATE 

    )

link_directories(/home/ubuntu/workspace/gcc-9.2-arm32-eabi/arm-none-eabi/newlib/lib/crt0.o/directory)
#include directories path
target_include_directories(
    ${PROJECT_NAME}
PUBLIC 
    ${PROJECT_SOURCE_DIR}/example/include
    /home/ubuntu/workspace/gcc-9.2-arm32-eabi/arm-none-eabi/include
PRIVATE

)


