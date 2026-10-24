#!/usr/bin/env bash
set -e

mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug > /dev/null
make library_tests

echo "----------------------------------------"
echo "Running library_tests"
echo "----------------------------------------"
./library_tests
