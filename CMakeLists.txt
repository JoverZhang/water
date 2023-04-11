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

set(CMAKE_C_FLAGS "-Wall -ansi -Wswitch-enum -DDEBUG")
add_library(main OBJECT main/main.c)

set(CMAKE_C_FLAGS "-lm")
add_executable(diksam
        $<TARGET_OBJECTS:main>
        $<TARGET_OBJECTS:compiler>
        $<TARGET_OBJECTS:builtin>
        $<TARGET_OBJECTS:dbg>
        $<TARGET_OBJECTS:dvm>
        $<TARGET_OBJECTS:mem>
        $<TARGET_OBJECTS:share>
        )
