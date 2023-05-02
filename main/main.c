#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "DKC.h"
#include "DVM.h"
#include "MEM.h"

typedef enum {
    MODE_RUN,
    MODE_LSP,
    MODE_TEST,
} Mode;

typedef struct {
    DVM_Boolean is_err;
    Mode mode;
    char *path;
    union {
        struct {
            DVM_Boolean dump;
        } lsp;
        struct {
            char *target;
        } test;
    } u;
} Args;

void
print_usage() {
    fprintf(stderr,"Usage:\n"
                   "\twater <file> [args...]\n"
                   "\twater lsp dump <file>\n"
                   "\twater test <file> [name] [args...]\n"
    );
}

FILE *
read_file(char *path) {
    FILE *fp = fopen(path, "r");
    if (fp == NULL) {
        fprintf(stderr, "%s not found.\n", path);
        exit(1);
    }
    return fp;
}

Args parse_args(int argc, char **argv) {
  Args args = {};

  if (argc < 2 || !strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")) {
      goto err;
  }

  // test
  if (!strcmp(argv[1], "test")) {
    if (argc < 3) {
        goto err;
    }

    args.mode = MODE_TEST;
    args.path = argv[2];

    if (argc < 4) {
      args.u.test.target = NULL;
    } else {
      args.u.test.target = argv[3];
    }
    return args;
  }
  // lsp
  else if (!strcmp(argv[1], "lsp")) {
    if (argc < 3) {
      goto err;
    }

    args.mode = MODE_LSP;

    if (!strcmp(argv[2], "dump")) {
      if (argc < 4) {
        goto err;
      }

      args.path = argv[3];
      args.u.lsp.dump = DVM_TRUE;
      return args;
    }

    goto err;
  }
  // run
  else {
    args.mode = MODE_RUN;
    args.path = argv[1];

    return args;
  }

err:
  args.is_err = DVM_TRUE;
  return args;
}

int
main(int argc, char **argv)
{
    Args args;
    DKC_Compiler *compiler;
    char *path;
    FILE *fp;
    DVM_ExecutableList *list;
    DVM_VirtualMachine *dvm;

    setlocale(LC_CTYPE, "");

    args = parse_args(argc, argv);
    if (args.is_err) {
        print_usage();
        return 1;
    }
    path = args.path;

    switch (args.mode) {
        case MODE_RUN:
            compiler = DKC_create_compiler();
            break;

        case MODE_LSP:
            if (args.u.lsp.dump) {
                fp = read_file(args.path);

                compiler = DKC_create_compiler();
                DKC_lsp(compiler, fp, args.path);
                DKC_dispose_compiler(compiler);

                return 0;
            }

            print_usage();
            return 1;

        case MODE_TEST:
            compiler = DKC_create_compiler_for_test(args.u.test.target);
            break;

        default:
            print_usage();
            return 1;
    }

    fp = read_file(args.path);

    list = DKC_compile(compiler, fp, path);
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
