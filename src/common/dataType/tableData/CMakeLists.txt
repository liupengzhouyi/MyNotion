
message("source code item class---${PROJECT_SOURCE_DIR}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

add_library(tableData SHARED ./TableData.h ./TableData.cpp) # 生成动态库 