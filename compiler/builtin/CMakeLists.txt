add_executable(builtin_conv
        builtin_conv.c
        $<TARGET_OBJECTS:dbg>
        $<TARGET_OBJECTS:mem>)
target_compile_options(builtin_conv PRIVATE -Wall -ansi -pedantic -Wswitch-enum)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/builtin.c
        COMMAND ${CMAKE_CURRENT_BINARY_DIR}/builtin_conv
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        DEPENDS builtin_conv
        head.txt
        tail.txt
        ../../require/water/lang.water
        ../../require/water/math.water
)

add_library(builtin STATIC
        ${CMAKE_CURRENT_SOURCE_DIR}/builtin.c)
