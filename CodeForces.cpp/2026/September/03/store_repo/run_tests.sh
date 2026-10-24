#!/usr/bin/env bash
set -e

mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug > /dev/null
make store_tests

echo "----------------------------------------"
echo "Running store_tests"
echo "----------------------------------------"
./store_tests
