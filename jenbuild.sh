#!/bin/sh

rm -rf build
mkdir build
cd build
cmake .. -DGCOV_COVERAGE=y -DCMAKE_BUILD_TYPE=Debug
make -j2

lcov --zerocounters --directory .
lcov --capture --initial --directory . --output-file app
./tests/utest --gtest_output="xml:utest_testreport.xml"
lcov --no-checksum --directory . --capture --output-file app.info
mkdir -p lcov_html
genhtml -o lcov_html app.info

cd ../doc
doxygen ./Doxyfile

cd ..
cppcheck --enable=all --inconclusive --xml --xml-version=2 --suppress=missingIncludeSystem -Iinclude/ src/ tests/*.cpp 2> build/cppcheck.xml
