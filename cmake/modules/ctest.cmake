set(TEST_SCRIPT sh ${CMAKE_CURRENT_SOURCE_DIR}/test/run.sh ${CMAKE_BINARY_DIR}/water)

function(water_add_test name mode file)
    add_test(NAME ${name}
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            COMMAND ${TEST_SCRIPT} ${mode}
            ${CMAKE_CURRENT_SOURCE_DIR}/${file})
endfunction()

find_program(BASH_PROGRAM bash)
if (BASH_PROGRAM)
    enable_testing()

    # RUN
    water_add_test(run::cases
            RUN test/cases.water)


    # LSP
    water_add_test(lsp_dump::cases
            LSP_DUMP test/cases.water)


    # TEST
    water_add_test(cases
            TEST test/cases.water)

    # std
    water_add_test(water.collections.map
            TEST require/water/collections/map.water)
    water_add_test(water.fs
            TEST require/water/fs.water)
endif ()
