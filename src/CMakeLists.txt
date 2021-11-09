message("source code---${PROJECT_SOURCE_DIR}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

# add_library(apple SHARED ./apple.c) # 生成动态库 libapple.so

add_subdirectory(./common) # 指定 编译子目录
# add_subdirectory(./module) # 指定 编译子目录