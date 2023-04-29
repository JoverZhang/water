set(CMAKE_C_FLAGS "-DDEBUG -Wall")

add_library(mem STATIC
        memory.c
        storage.c)
