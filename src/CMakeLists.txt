cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

project(Ouroboros_Idle)

set(SOURCE 
    ${CMAKE_CURRENT_SOURCE_DIR}/Human.cpp
)

set(HEADER
    ${CMAKE_CURRENT_SOURCE_DIR}/Gender.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Human.h
)

add_executable(ouroboros_idle Main.cpp ${SOURCE} ${HEADER})
install(TARGETS ouroboros_idle DESTINATION bin)