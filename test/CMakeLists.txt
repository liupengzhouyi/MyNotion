cmake_minimum_required (VERSION 3.16)
project(code-for-blog)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11 -Wall")

# find_package(GTest REQUIRED)
# find_package(Threads REQUIRED)

link_directories(/home/github/MyNotion/lib/googletest/lib)

include_directories(/home/github/MyNotion/lib/googletest/include)

add_executable(MyTests main.cpp)

target_link_libraries(MyTests gtest gtest_main gmock gmock_main)

target_link_libraries(MyTests pthread)

# target_link_libraries(MyTests ${GTEST_BOTH_LIBRARIES})

# target_link_libraries(MyTests ${CMAKE_THREAD_LIBS_INIT})

add_test(Test MyTests)

enable_testing()