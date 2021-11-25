message("source code---${PROJECT_SOURCE_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/test) # 指定可执行文件输出目录

# add_subdirectory(./dateType) # 指定 编译子目录
add_subdirectory(./timeType) # 指定 编译子目录