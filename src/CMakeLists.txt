cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")

project(src)

set(HEADER
    ${CMAKE_CURRENT_SOURCE_DIR}/Common/Gender.h

    ${CMAKE_CURRENT_SOURCE_DIR}/Inventory/Item.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Inventory/Equipment.h

    ${CMAKE_CURRENT_SOURCE_DIR}/Creature/Creature.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Creature/Hero.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Creature/Monster.h

    ${CMAKE_CURRENT_SOURCE_DIR}/Battle/Battle.h
)

set(SOURCE 
    ${CMAKE_CURRENT_SOURCE_DIR}/Common/Gender.cpp

    ${CMAKE_CURRENT_SOURCE_DIR}/Inventory/Item.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Inventory/Equipment.cpp

    ${CMAKE_CURRENT_SOURCE_DIR}/Creature/Creature.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Creature/Hero.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Creature/Monster.cpp

    ${CMAKE_CURRENT_SOURCE_DIR}/Battle/Battle.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(ouroboros_idle Main.cpp ${HEADER} ${SOURCE})
install(TARGETS ouroboros_idle DESTINATION bin)