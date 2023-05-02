#ifndef PUBLIC_DKC_H_INCLUDED
#define PUBLIC_DKC_H_INCLUDED
#include <stdio.h>
#include "DVM_code.h"

typedef struct DKC_Compiler_tag DKC_Compiler;

DKC_Compiler *DKC_create_compiler(void);
DKC_Compiler *DKC_create_compiler_for_test(char *test_target);
DVM_ExecutableList *DKC_compile(DKC_Compiler *compiler, FILE *fp, char *path);
void DKC_lsp(DKC_Compiler *compiler, FILE *fp, char *path);
void DKC_dispose_compiler(DKC_Compiler *compiler);

#endif /* PUBLIC_DKC_H_INCLUDED */
