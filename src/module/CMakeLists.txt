message("source code item ---${PROJECT_SOURCE_DIR}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

add_subdirectory(./Item) # 指定 编译子目录

