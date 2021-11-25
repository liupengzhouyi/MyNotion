cmake_minimum_required (VERSION 3.16)

project(TestTime)

set(SRC_DIR ../../../../../src/common/timeType/dateTime/dateTime.cpp)

aux_source_directory(SRC_DIR SRC_CODE)

message(${SRC_DIR})

# message(${SRC_CODE})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/test) # 指定可执行文件输出目录

link_directories(../../../../lib/googletest/lib)
link_directories(../../../../build/product/lib)
include_directories(../../../../lib/googletest/include)

add_executable(TestDateTime TestDateTime.h TestDateTime.cpp ${SRC_DIR})

# add_library(TestDate Date.h Date.cpp)

target_link_libraries(TestDateTime gtest gtest_main gmock gmock_main)

target_link_libraries(TestDateTime pthread)

target_link_libraries(TestDateTime date time)

# set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)