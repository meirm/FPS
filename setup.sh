#!/bin/bash

mkdir -p build
cd build
g++ -fPIC -shared  ../src/FPS.cpp -o libFPS.so
