set(CMAKE_C_FLAGS "-Wall -ansi -pedantic -Wswitch-enum")

add_executable(builtin_conv
        builtin_conv.c
        $<TARGET_OBJECTS:dbg>
        $<TARGET_OBJECTS:mem>)

add_custom_command(
        OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/builtin.c
        COMMAND ${CMAKE_CURRENT_BINARY_DIR}/builtin_conv
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        DEPENDS builtin_conv
        head.txt
        tail.txt
        ../../require/diksam/lang.dkh
        ../../require/diksam/lang.dkm
        ../../require/diksam/math.dkh
)

add_library(builtin OBJECT
        ${CMAKE_CURRENT_SOURCE_DIR}/builtin.c
        )
