cmake_minimum_required(VERSION 3.21)
project(water VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 23)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

add_subdirectory(compiler)
add_subdirectory(compiler/builtin)
add_subdirectory(debug)
add_subdirectory(dvm)
add_subdirectory(memory)
add_subdirectory(share)

add_executable(water main/main.c)

target_link_libraries(
        water PRIVATE
        compiler
        builtin
        dbg
        dvm
        mem
        share
        m)
target_link_options(water PRIVATE -static)

include(cmake/modules/ctest.cmake)
