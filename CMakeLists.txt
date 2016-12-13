cmake_minimum_required(VERSION 2.8.3)
project(glib)
set(CMAKE_CXX_FLAGS "-std=c++11")

enable_testing()
if(GCOV_COVERAGE)
    set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g -O0 --coverage" )
    set( CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -g -O0 --coverage -lgcov" )
    set( CMAKE_SHARED_LINKER_FLAGS  "${CMAKE_SHARED_LINKER_FLAGS} -g -O0 -fprofile-arcs -ftest-coverage -lgcov" )
endif()

include_directories(include)

add_subdirectory(tests)
add_subdirectory(src)
