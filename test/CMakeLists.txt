cmake_minimum_required (VERSION 3.16)
project(code-for-blog)

# link_directories(/home/github/MyNotion/lib/googletest/lib)

# include_directories(/home/github/MyNotion/lib/googletest/include)

# add_executable(MyTests main.cpp)

# target_link_libraries(MyTests gtest gtest_main gmock gmock_main)

# target_link_libraries(MyTests pthread)

# message("source code---${PROJECT_SOURCE_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/product/test) # 指定可执行文件输出目录

add_subdirectory(./common) # 指定 编译子目录
# add_subdirectory(./timeType) # 指定 编译子目录