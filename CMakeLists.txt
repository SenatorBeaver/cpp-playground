cmake_minimum_required(VERSION 3.10)

# set the project name
project(Cpp-Playground CXX)

set(TARGET ${PROJECT_NAME}.out)

add_executable(${TARGET})

add_subdirectory(src)

