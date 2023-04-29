set(CMAKE_C_FLAGS "-Wall -DDBG_NO_DEBUG")

add_library(dbg STATIC
        debug.c)
