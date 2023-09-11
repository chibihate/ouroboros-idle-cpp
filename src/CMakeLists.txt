cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")

project(src)

set(SOURCE 
    ${CMAKE_CURRENT_SOURCE_DIR}/Hero.cpp
)

set(HEADER
    ${CMAKE_CURRENT_SOURCE_DIR}/Hero.h
)

add_executable(ouroboros_idle Main.cpp ${SOURCE} ${HEADER})
install(TARGETS ouroboros_idle DESTINATION bin)