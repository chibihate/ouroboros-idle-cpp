#!/bin/bash
alias build_src='cmake -S ./src -B ./build/src && cmake --build ./build/src'
alias run='./build/src/ouroboros_idle'
alias build_test='cmake -S ./test -B ./build/test && cmake --build ./build/test'
alias test='./build/test/unittest'