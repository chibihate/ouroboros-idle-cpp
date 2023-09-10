#!/bin/bash
_ROOT_DIR=$(pwd)
alias build_src='cmake -S $_ROOT_DIR/src -B $_ROOT_DIR/build/src && cmake --build $_ROOT_DIR/build/src'
alias clean_src='rm -rf $_ROOT_DIR/build/src/*'
alias run='$_ROOT_DIR/build/src/ouroboros_idle'
alias build_unittest='cmake -S $_ROOT_DIR/test -B $_ROOT_DIR/build/test/unittest && cmake --build $_ROOT_DIR/build/test/unittest'
alias unittest='$_ROOT_DIR/build/test/unittest/unittest_ouroboros'
alias clean_unittest='rm -rf $_ROOT_DIR/build/test/unittest/*'
alias coverage='gcovr --html-details -o $_ROOT_DIR/build/coverage/coverage.html --html-nested'
alias clean_coverage='rm -rf $_ROOT_DIR/build/coverage/*'