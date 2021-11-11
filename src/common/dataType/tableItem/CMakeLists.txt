message("source code item class---${PROJECT_SOURCE_DIR}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

add_library(tableItem SHARED ./TableItem.h ./TableItem.cpp) # 生成动态库 

target_link_libraries(tableItem tableData) # 链接外部库