cmake_minimum_required(VERSION 3.16)

# SET HERE THE PATH TO YOUR C99 AND C++ COMPILERS
set(CMAKE_C_COMPILER /home/ubuntu/workspace/gcc-9.2-arm32-eabi/bin/arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER /home/ubuntu/workspace/gcc-9.2-arm32-eabi/bin/arm-none-eabi-g++)

set(CMAKE_C_COMPILER_WORKS 1 CACHE INTERNAL "")
set(CMAKE_CXX_COMPILER_WORKS 1 CACHE INTERNAL "")

set(PROJECT_NAME hello_world)

project(${PROJECT_NAME} CXX C)

set(SOURCE_FILES
    example/hello.c
)

#detal: library type STATIC|SHARED|MODULE
add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

# SET HERE YOUR BUILDING FLAGS
set(FLAGS "-O2 -ffunction-sections -mno-unaligned-access \
    -g -finline -Wall -Wsign-compare -Wno-multichar \
    -Wno-unused-parameter -Wno-unused-function -Wno-unused-label -Wno-tautological-compare \
    -fno-short-enums -fno-common -fdata-sections -fno-exceptions \
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

PRIVATE
    ${PROJECT_SOURCE_DIR}/example/include

)

#add ather libraries
target_link_libraries(${PROJECT_NAME} 
PUBLIC 
    
    )

# set compile opation
target_compile_definitions(${PROJECT_NAME}
    PRIVATE 

    )
install(TARGETS ${PROJECT_NAME} 
    DESTINATION ${LIBRARY_OUTPUT_PATH}
    EXPORT ${PROJECT_NAME}Targets
)

install(DIRECTORY  
    ${PROJECT_SOURCE_DIR}/example/include
    DESTINATION 
    ${LIBRARY_OUTPUT_PATH}
    FILES_MATCHING PATTERN "*.h"
    PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ
)