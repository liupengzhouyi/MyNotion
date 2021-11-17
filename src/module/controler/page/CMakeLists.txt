message("source code item class---${PROJECT_SOURCE_DIR}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

add_library(page SHARED ./page.h ./page.cpp) # 生成动态库 

target_link_libraries(item) # 链接外部库