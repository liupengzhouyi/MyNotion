message("source code---${PROJECT_SOURCE_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/test) # 指定可执行文件输出目录

# add_library(apple SHARED ./apple.c) # 生成动态库 libapple.so

add_subdirectory(./data) # 指定 编译子目录
add_subdirectory(./item) # 指定 编译子目录
add_subdirectory(./table) # 指定 编译子目录