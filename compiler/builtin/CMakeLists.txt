set(CMAKE_C_FLAGS "-Wall -ansi -pedantic -Wswitch-enum")

add_library(builtin OBJECT
        builtin.c)
