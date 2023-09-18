cmake_minimum_required(VERSION 3.22)
project(unittest)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Set the compiler options
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")

set(SOURCE
    ${src_SOURCE_DIR}/Common/Gender.cpp
    ${src_SOURCE_DIR}/Creature/Creature.cpp
    ${src_SOURCE_DIR}/Creature/Hero.cpp
)

set(HEADER
    ${src_SOURCE_DIR}/Common/Gender.h
    ${src_SOURCE_DIR}/Creature/Creature.h
    ${src_SOURCE_DIR}/Creature/Hero.h
)

set(TEST_FILE
    ${CMAKE_CURRENT_SOURCE_DIR}/TestHero.cpp
)

include_directories(${src_SOURCE_DIR})

add_executable(
  unittest
  ${HEADER}
  ${SOURCE}
  ${TEST_FILE}
)

target_link_libraries(
  unittest
  gtest
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(unittest)