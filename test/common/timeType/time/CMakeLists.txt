cmake_minimum_required (VERSION 3.16)

project(TestTime)

set(SRC_DIR ../../../../src/common/timeType/time/time.cpp)

aux_source_directory(SRC_DIR SRC_CODE)

message(${SRC_DIR})

# message(${SRC_CODE})

link_directories(../../../../lib/googletest/lib)
include_directories(../../../../lib/googletest/include)

add_executable(TestDate TestTime.h TestTime.cpp ${SRC_DIR})

# add_library(TestDate Date.h Date.cpp)

target_link_libraries(TestDate gtest gtest_main gmock gmock_main)

target_link_libraries(TestDate pthread)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)