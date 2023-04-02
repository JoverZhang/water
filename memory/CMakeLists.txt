set(CMAKE_C_FLAGS "-DDEBUG -Wall")

add_library(mem OBJECT
        memory.c
        storage.c)
