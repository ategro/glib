cmake_minimum_required(VERSION 2.8.3)
project(glib)
add_library(glib STATIC dfs.cpp)
target_link_libraries(glib gcov)
