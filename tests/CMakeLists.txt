cmake_minimum_required(VERSION 2.8.3)
project(glib)

add_subdirectory(googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(utest utest_bfs.cpp utest_dfs.cpp utest_dijkstra.cpp)

target_link_libraries (utest gtest gtest_main glib)
add_test(utest utest)
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} DEPENDS utest)
