#!/usr/bin/env bash
set -e

mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug > /dev/null
make library_app

echo "----------------------------------------"
echo "Running library_app"
echo "----------------------------------------"
./library_app
