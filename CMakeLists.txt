cmake_minimum_required(VERSION 3.20)

project(MyNotion)

set(CMAKE_CXX_STANDARD 17)

CMAKE_MINIMUM_REQUIRED(VERSION 3.12)
cmake_policy(SET CMP0048 NEW)
project(test06 VERSION "1.0.0.0")

include_directories(${PROJECT_SOURCE_DIR}/src) # 指定头文件搜索路径

aux_source_directory(${PROJECT_SOURCE_DIR}/src src_dirs) # 指定源码目录

link_directories(${PROJECT_SOURCE_DIR}/build/product/lib) # 指定库搜索路径

add_subdirectory(./src) # 指定 编译子目录

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/bin) # 指定可执行文件输出目录

add_executable(MyNotion ${src_dirs}) # 指定可执行文件名及源码

target_link_libraries(MyNotion item table) # 链接外部库


