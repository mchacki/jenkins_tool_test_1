cmake_minimum_required(VERSION 3.23)

project(Jenkins_Test_Tool)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_subdirectory(3rdParty)
add_subdirectory(src)
add_subdirectory(tests)
