#!/usr/bin/env bash
set -e

mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug > /dev/null
make store_app

echo "----------------------------------------"
echo "Running store_app"
echo "----------------------------------------"
./store_app
