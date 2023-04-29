#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "DKC.h"
#include "DVM.h"
#include "MEM.h"

void
print_usage() {
    fprintf(stderr,"Usage:\n"
                   "\twater <file> [args...]\n"
                   "\twater test <file> [name] [args...]\n"
    );
}

int
main(int argc, char **argv)
{
    DKC_Compiler *compiler;
    char *file;
    FILE *fp;
    DVM_ExecutableList *list;
    DVM_VirtualMachine *dvm;

    if (argc < 2) {
        print_usage();
        return 1;
    }

    setlocale(LC_CTYPE, "");

    // test
    if (!strcmp(argv[1], "test")) {
        if (argc < 3) {
          print_usage();
          return 1;
        }
        file = argv[2];
        if (argc < 4) {
            compiler = DKC_create_compiler_for_test(NULL);
        } else {
            compiler = DKC_create_compiler_for_test(argv[3]);
        }
    }
    // run
    else {
        file = argv[1];
        compiler = DKC_create_compiler();
    }

    fp = fopen(file, "r");
    if (fp == NULL) {
        fprintf(stderr, "%s not found.\n", argv[1]);
        return 1;
    }

    list = DKC_compile(compiler, fp, argv[1]);
    dvm = DVM_create_virtual_machine();
    DVM_set_executable(dvm, list);
    DKC_dispose_compiler(compiler);
    DVM_execute(dvm);
    DVM_dispose_virtual_machine(dvm);
    DVM_dispose_executable_list(list);

    MEM_check_all_blocks();
    MEM_dump_blocks(stdout);

    return 0;
}
