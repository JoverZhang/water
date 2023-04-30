add_library(dbg STATIC
        debug.c)
target_compile_options(dbg PRIVATE -Wall -DDBG_NO_DEBUG)
