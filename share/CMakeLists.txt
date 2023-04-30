add_library(share STATIC
        disassemble.c
        dispose.c
        opcode.c
        util.c
        wchar.c)
target_compile_options(share PRIVATE -DDEBUG -Wall -ansi -pedantic -Wswitch-enum)
