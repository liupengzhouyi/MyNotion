message("Staart build ${PROJECT_SOURCE_DIR}/module/ItemData")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

add_library(itemData SHARED ./ItemData.h ./ItemData.cpp) # 生成动态库 libapple.so

target_link_libraries(itemData item) # 链接外部库