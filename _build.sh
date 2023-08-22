#!/bin/bash
alias build='cmake -S ./src -B ./build && make -C ./build'
alias run='./build/ouroboros_idle'
