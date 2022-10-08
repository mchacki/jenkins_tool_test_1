cmake_minimum_required(VERSION 3.23)

project(Jenkins_Test_Tool)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
enable_testing()


option(ADD_CMAKE_ERROR "Add a CMake error" OFF)
option(ADD_COMPILE_ERROR "Add a compiler error" OFF)
option(ADD_LINK_ERROR "Add a linker error" OFF)
option(ADD_RED_TEST "Add a linker error" OFF)

if(ADD_CMAKE_ERROR)
    message( FATAL_ERROR "Forcefully crash CMake")
endif ()

if(ADD_COMPILE_ERROR)
    message( INFO "Forcefully let compile fail")
    add_definitions(-DUSE_COMPILE_ERROR)
endif()

if(ADD_LINK_ERROR)
    message( INFO "Forcefully let link fail")
    add_definitions(-DUSE_LINK_ERROR)
endif()

if(ADD_RED_TEST)
    message( INFO "Forcefully let tests fail")
    add_definitions(-DUSE_RED_TEST)
endif()

add_subdirectory(3rdParty)
add_subdirectory(src)
add_subdirectory(tests)
