set(CMAKE_C_FLAGS "-DDEBUG -Wall -ansi -pedantic -Wswitch-enum")

add_library(dvm OBJECT
        error.c
        error_message.c
        execute.c
        heap.c
        load.c
        native.c
        nativeif.c
        util.c
        wchar.c)
