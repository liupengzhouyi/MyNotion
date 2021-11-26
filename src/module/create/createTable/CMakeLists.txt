message("make ${PROJECT_SOURCE_DIR}/sec/module/create/createTable")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

add_library(createTable SHARED ./createTable.h ./createTable.cpp) # 生成动态库 libapple.so

# add_subdirectory(./common) # 指定 编译子目录
# add_subdirectory(./module) # 指定 编译子目录