cmake_minimum_required (VERSION 3.16)

project(TestDate)

# aux_source_directory(/home/github/MyNotion/src) # 指定源码目录

# link_directories(../../../../build/product/lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/test) # 指定可执行文件输出目录

link_directories(../../../../lib/googletest/lib)
include_directories(../../../../lib/googletest/include)

add_executable(TestDate TestDate.h TestDate.cpp ../../../../../src/common/timeType/date/date.cpp)

target_link_libraries(TestDate gtest gtest_main gmock gmock_main)

target_link_libraries(TestDate pthread)

