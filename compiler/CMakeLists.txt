set(CMAKE_C_FLAGS "-Wall -ansi -pedantic -Wswitch-enum -DDEBUG -DUTF_8_SOURCE")

include_directories(./)
find_package(FLEX 2.6 REQUIRED)
find_package(BISON 3.0 REQUIRED)

flex_target(LEXER diksam.l ${CMAKE_CURRENT_BINARY_DIR}/lex.yy.c
        DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/lex.yy.h)
bison_target(PARSER diksam.y ${CMAKE_CURRENT_BINARY_DIR}/y.tab.c
        COMPILE_FLAGS -dv
        DEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/y.tab.h)
add_flex_bison_dependency(LEXER PARSER)

#add_library(parser OBJECT ${BISON_PARSER_OUTPUTS})
#add_library(lexer OBJECT ${FLEX_LEXER_OUTPUTS} $<TARGET_OBJECTS:parser>)

add_library(compiler OBJECT
        ${BISON_PARSER_OUTPUTS}
        ${FLEX_LEXER_OUTPUTS}
        create.c
        error.c
        error_message.c
        fix_tree.c
        generate.c
        interface.c
        string.c
        util.c
        wchar.c)

#add_executable(calc "${SRC_DIR}/main.c" "${LEXER_OUT}" "${PARSER_OUT}")
#target_include_directories(calc PRIVATE "${PARSER_DIR}")