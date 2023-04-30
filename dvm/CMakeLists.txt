add_library(dvm STATIC
        error.c
        error_message.c
        execute.c
        heap.c
        load.c
        native.c
        nativeif.c
        util.c
        wchar.c)
target_compile_options(dvm PRIVATE -DDEBUG -Wall -ansi -pedantic -Wswitch-enum)
