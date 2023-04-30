add_library(mem STATIC
        memory.c
        storage.c)
target_compile_options(mem PRIVATE -DDEBUG -Wall)
