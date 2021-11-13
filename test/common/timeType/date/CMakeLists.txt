cmake_minimum_required (VERSION 3.16)

project(TestDate)

# aux_source_directory(/home/github/MyNotion/src) # 指定源码目录

# link_directories(../../../../build/product/lib)

link_directories(../../../../lib/googletest/lib)
include_directories(../../../../lib/googletest/include)

add_executable(TestDate TestDate.h TestDate.cpp /home/github/MyNotion/src/common/timeType/date/date.cpp)

# add_library(TestDate Date.h Date.cpp)

target_link_libraries(TestDate gtest gtest_main gmock gmock_main)

target_link_libraries(TestDate pthread)