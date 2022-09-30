add_subdirectory(lib)

add_executable(MathExe main.cpp)
target_link_libraries(MathExe MathLib)
