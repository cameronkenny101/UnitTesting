cmake_minimum_required(VERSION 3.15)
project(UnitTesting C)

set(CMAKE_C_STANDARD 99)

find_library(CUNIT libcunit.dll.a C:/cygwin64/lib)
include_directories(C:/cygwin64/usr/include/CUnit .)

add_executable(UnitTesting main.c avg_and_max.c avg_and_max.h)


target_link_libraries(UnitTesting PUBLIC ${CUNIT})
