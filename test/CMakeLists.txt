cmake_minimum_required (VERSION 3.16)
project(code-for-blog)

link_directories(/home/github/MyNotion/lib/googletest/lib)

include_directories(/home/github/MyNotion/lib/googletest/include)

add_executable(MyTests main.cpp)

target_link_libraries(MyTests gtest gtest_main gmock gmock_main)

target_link_libraries(MyTests pthread)

add_test(Test MyTests)

enable_testing()