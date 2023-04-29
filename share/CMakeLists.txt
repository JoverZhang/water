set(CMAKE_C_FLAGS "-DDEBUG -Wall -ansi -pedantic -Wswitch-enum")

add_library(share STATIC
        disassemble.c
        dispose.c
        opcode.c
        util.c
        wchar.c)
