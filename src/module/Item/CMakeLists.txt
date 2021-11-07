message("source code item class---${PROJECT_SOURCE_DIR}")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/lib) # 指定动态库输出目录

add_library(Item SHARED ./Item.h ./Item.cpp ./ItemType/ItemType.h) # 生成动态库 libapple.so

target_link_libraries(Item datetime date time) # 链接外部库