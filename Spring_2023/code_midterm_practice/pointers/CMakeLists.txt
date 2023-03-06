cmake_minimum_required(VERSION 3.0.0)
project(pointers VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(pointers_coffee main_coffee.cpp)
add_executable(pointers main.cpp)
add_executable(pointers2 main2.cpp)
add_executable(pointers_handout main_handout.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
