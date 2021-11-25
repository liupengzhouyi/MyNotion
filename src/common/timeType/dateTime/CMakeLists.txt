cmake_minimum_required(VERSION 3.20)

message("source code datetime---${PROJECT_SOURCE_DIR}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

add_library(datetime SHARED ./dateTime.h ./dateTime.cpp)

target_link_libraries(datetime date time)