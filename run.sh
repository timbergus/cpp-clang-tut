#!/bin/bash

path=./output/cppclangtut

if [ ! -f $path ]; then
    make && ./output/cppclangtut # Build
else
    make clean && make && ./output/cppclangtut # Rebuild
fi

em++ src/main.cpp -s WASM=1 -o output/index.html
