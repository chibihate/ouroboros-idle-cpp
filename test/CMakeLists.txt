cmake_minimum_required(VERSION 3.22)
project(unittest_ouroboros)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Set the compiler options
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")

# Setup testing
set(_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/googletest)
enable_testing()
# include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE
  ${_ROOT_DIR}/src/Hero.cpp
)

set(HEADER
  ${_ROOT_DIR}/src/Hero.h
)

add_executable(
  unittest_ouroboros
  ${HEADER}
  ${SOURCE}
  unittest/TestHero.cpp
)
target_link_libraries(
  unittest_ouroboros
  gtest
  gtest_main
)