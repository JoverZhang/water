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
add_executable(water
        $<TARGET_OBJECTS:main>
        $<TARGET_OBJECTS:compiler>
        $<TARGET_OBJECTS:builtin>
        $<TARGET_OBJECTS:dbg>
        $<TARGET_OBJECTS:dvm>
        $<TARGET_OBJECTS:mem>
        $<TARGET_OBJECTS:share>
        )

find_program(BASH_PROGRAM bash)
if (BASH_PROGRAM)
    enable_testing()

    add_test(NAME case
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            COMMAND sh test/run.sh ${CMAKE_BINARY_DIR}/water
            ${CMAKE_CURRENT_SOURCE_DIR}/test/case.water)

    # std
    add_test(NAME water.collections.map
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            COMMAND sh test/run.sh ${CMAKE_BINARY_DIR}/water
            ${CMAKE_CURRENT_SOURCE_DIR}/require/water/collections/map.water)
    add_test(NAME water.fs
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            COMMAND sh test/run.sh ${CMAKE_BINARY_DIR}/water
            ${CMAKE_CURRENT_SOURCE_DIR}/require/water/fs.water)
endif ()

enable_testing()
