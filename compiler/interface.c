#include <string.h>
#include "MEM.h"
#include "DBG.h"
#include "water.h"

static CompilerList *st_compiler_list = NULL;
extern BuiltinScript dkc_builtin_script[];

typedef struct {
    char *name;
    DVM_BasicType type;
} BuiltInMethodParameter;

typedef struct {
    char *name;
    DVM_BasicType return_type;
    BuiltInMethodParameter *parameter;
    int parameter_count;
} BuiltInMethod;

static BuiltInMethodParameter st_array_resize_arg[] = {
    {"new_size", DVM_INT_TYPE}
};
static BuiltInMethodParameter st_array_insert_arg[] = {
    {"index", DVM_INT_TYPE},
    {"new_item", DVM_BASE_TYPE}
};
static BuiltInMethodParameter st_array_remove_arg[] = {
    {"index", DVM_INT_TYPE}
};
static BuiltInMethodParameter st_array_add_arg[] = {
    {"new_item", DVM_BASE_TYPE}
};

static BuiltInMethod st_array_method[] = {
    {ARRAY_METHOD_SIZE, DVM_INT_TYPE, NULL, 0},
    {ARRAY_METHOD_RESIZE, DVM_VOID_TYPE, st_array_resize_arg,
     ARRAY_SIZE(st_array_resize_arg)},
    {ARRAY_METHOD_INSERT, DVM_VOID_TYPE, st_array_insert_arg,
     ARRAY_SIZE(st_array_insert_arg)},
    {ARRAY_METHOD_REMOVE, DVM_VOID_TYPE, st_array_remove_arg,
     ARRAY_SIZE(st_array_remove_arg)},
    {ARRAY_METHOD_ADD, DVM_VOID_TYPE, st_array_add_arg,
     ARRAY_SIZE(st_array_add_arg)},
};

static BuiltInMethodParameter st_string_substr_arg[] = {
    {"start", DVM_INT_TYPE},
    {"length", DVM_INT_TYPE}
};

static BuiltInMethod st_string_method[] = {
    {"length", DVM_INT_TYPE, NULL, 0},
    {"substr", DVM_STRING_TYPE, st_string_substr_arg,
     ARRAY_SIZE(st_string_substr_arg)},
};

static FunctionDefinition *
create_built_in_method(BuiltInMethod *src, int method_count)
{
    int i;
    int param_idx;
    ParameterList *param_list;
    FunctionDefinition *fd_array;

    fd_array = dkc_malloc(sizeof(FunctionDefinition) * method_count);
    for (i = 0; i < method_count; i++) {
        fd_array[i].name = src[i].name;
        fd_array[i].type = dkc_alloc_type_specifier(src[i].return_type);
        param_list = NULL;
        for (param_idx = 0; param_idx < src[i].parameter_count; param_idx++) {
            TypeSpecifier *type
                = dkc_alloc_type_specifier(src[i].parameter[param_idx].type);
            if (param_list) {
                param_list
                    = dkc_chain_parameter(param_list, type,
                                          src[i].parameter[param_idx].name);
            } else {
                param_list
                    = dkc_create_parameter(type,
                                           src[i].parameter[param_idx].name);
            }
        }
        fd_array[i].parameter = param_list;
        fd_array[i].throws = NULL;
    }
    return fd_array;
}

DKC_Compiler *
DKC_create_compiler(void)
{
    MEM_Storage storage;
    DKC_Compiler *compiler;
    DKC_Compiler *compiler_backup;

    compiler_backup = dkc_get_current_compiler();

    storage = MEM_open_storage(0);
    compiler = MEM_storage_malloc(storage,
                                  sizeof(struct DKC_Compiler_tag));
    dkc_set_current_compiler(compiler);
    compiler->compile_storage = storage;
    compiler->package_name = NULL;
    compiler->source_suffix = DKM_SOURCE;
    compiler->require_list = NULL;
    compiler->rename_list = NULL;
    compiler->function_list = NULL;
    compiler->dvm_function_count = 0;
    compiler->dvm_function = NULL;
    compiler->dvm_enum_count = 0;
    compiler->dvm_enum = NULL;
    compiler->dvm_constant_count = 0;
    compiler->dvm_constant = NULL;
    compiler->dvm_class_count = 0;
    compiler->dvm_class = NULL;
    compiler->declaration_list = NULL;
    compiler->statement_list = NULL;
    compiler->class_definition_list = NULL;
    compiler->delegate_definition_list = NULL;
    compiler->enum_definition_list = NULL;
    compiler->constant_definition_list = NULL;
    compiler->current_block = NULL;
    compiler->current_line_number = 1;
    compiler->current_class_definition = NULL;
    compiler->current_catch_clause = NULL;
    compiler->input_mode = FILE_INPUT_MODE;
    compiler->required_list = NULL;
    compiler->array_method_count = ARRAY_SIZE(st_array_method);
    compiler->array_method
        = create_built_in_method(st_array_method,
                                 ARRAY_SIZE(st_array_method));
    compiler->string_method_count = ARRAY_SIZE(st_string_method);
    compiler->string_method
        = create_built_in_method(st_string_method,
                                 ARRAY_SIZE(st_string_method));

#ifdef EUC_SOURCE
    compiler->source_encoding = EUC_ENCODING;
#else
#ifdef SHIFT_JIS_SOURCE
    compiler->source_encoding = SHIFT_JIS_ENCODING;
#else
#ifdef UTF_8_SOURCE
    compiler->source_encoding = UTF_8_ENCODING;
#else
    DBG_panic(("source encoding is not defined.\n"));
#endif
#endif
#endif

    compiler->is_test = DVM_FALSE;
    compiler->test_target = NULL;

    dkc_set_current_compiler(compiler_backup);

    return compiler;
}

DKC_Compiler *DKC_create_compiler_for_test(char *test_target) {
  DKC_Compiler *compiler = DKC_create_compiler();
  compiler->is_test = DVM_TRUE;
  compiler->test_target = test_target;
  return compiler;
}

static CompilerList *
add_compiler_to_list(CompilerList *list, DKC_Compiler *compiler)
{
    CompilerList *pos;
    CompilerList *new_item;

    new_item = MEM_malloc(sizeof(CompilerList));
    new_item->compiler = compiler;
    new_item->next = NULL;

    if (list == NULL) {
        return new_item;
    }
    for (pos = list; pos->next; pos = pos->next)
        ;
    pos->next = new_item;

    return list;
}

static DKC_Compiler *
search_compiler(CompilerList *list, PackageName *package_name)
{
    CompilerList *pos;

    for (pos = list; pos; pos = pos->next) {
        if (dkc_compare_package_name(pos->compiler->package_name,
                                     package_name))
            break;
    }

    if (pos) {
        return pos->compiler;
    } else {
        return NULL;
    }
}

static DVM_Boolean
search_buitin_source(char *package_name, SourceSuffix suffix,
                     SourceInput *input)
{
    int i;

    for (i = 0; dkc_builtin_script[i].source_string != NULL; i++) {
        if (dvm_compare_string(package_name,
                               dkc_builtin_script[i].package_name)
            && dkc_builtin_script[i].suffix == suffix) {
            input->input_mode = STRING_INPUT_MODE;
            input->u.string.lines = dkc_builtin_script[i].source_string;
            return DVM_TRUE;
        }
    }
    return DVM_FALSE;
}

static void
make_search_path(int line_number, PackageName *package_name, char *buf)
{
    PackageName *pos;
    int len = 0;
    int prev_len = 0;
    int suffix_len;

    suffix_len = strlen(WATER_REQUIRE_SUFFIX);
    buf[0] = '\0';
    for (pos = package_name; pos; pos = pos->next) {
        prev_len = len;
        len += strlen(pos->name);
        if (len > FILENAME_MAX - (2 + suffix_len)) {
            dkc_compile_error(line_number,
                              PACKAGE_NAME_TOO_LONG_ERR,
                              MESSAGE_ARGUMENT_END);
        }
        strcpy(&buf[prev_len], pos->name);
        if (pos->next) {
            buf[strlen(buf)] = FILE_SEPARATOR;
            len++;
        }
    }
    strcpy(&buf[len], WATER_REQUIRE_SUFFIX);
}

static void
make_search_path_impl(char *package_name, char *buf)
{
    int suffix_len;
    int package_len;
    int i;

    suffix_len = strlen(WATER_IMPLEMENTATION_SUFFIX);
    package_len = strlen(package_name);

    DBG_assert(package_len <= FILENAME_MAX - (2 + suffix_len),
               ("package name is too long(%s)", package_name));

    for (i = 0; package_name[i] != '\0'; i++) {
        if (package_name[i] == '.') {
            buf[i] = FILE_SEPARATOR;
        } else {
            buf[i] = package_name[i];
        }
    }
    buf[i] = '\0';
    strcat(buf, WATER_IMPLEMENTATION_SUFFIX);
}

static void
get_require_input(RequireList *req, char *found_path,
                  SourceInput *source_input)
{
    char *search_path;
    char search_file[FILENAME_MAX];
    FILE *fp;
    char *package_name;
    SearchFileStatus status;

    package_name = dkc_package_name_to_string(req->package_name);
    if (search_buitin_source(package_name, DKH_SOURCE, source_input)) {
        MEM_free(package_name);
        found_path[0] = '\0';
        return;
    }
    MEM_free(package_name);

    search_path = getenv("WATER_HOME");
    if (search_path == NULL) {
        search_path = ".";
    }
    make_search_path(req->line_number, req->package_name, search_file);

    status = dvm_search_file(search_path, search_file, found_path, &fp);
    
    if (status != SEARCH_FILE_SUCCESS) {
        if (status == SEARCH_FILE_NOT_FOUND) {
            dkc_compile_error(req->line_number,
                              REQUIRE_FILE_NOT_FOUND_ERR,
                              STRING_MESSAGE_ARGUMENT, "file", search_file,
                              MESSAGE_ARGUMENT_END);
        } else {
            dkc_compile_error(req->line_number,
                              REQUIRE_FILE_ERR,
                              INT_MESSAGE_ARGUMENT, "status", (int)status,
                              MESSAGE_ARGUMENT_END);
        }
    }
    source_input->input_mode = FILE_INPUT_MODE;
    source_input->u.file.fp = fp;
}

static DVM_Boolean
add_exe_to_list(DVM_Executable *exe, DVM_ExecutableList *list)
{
    DVM_ExecutableItem *new_item;
    DVM_ExecutableItem *pos;
    DVM_ExecutableItem *tail;

    for (pos = list->list; pos; pos = pos->next) {
        if (dvm_compare_package_name(pos->executable->package_name,
                                     exe->package_name)
            && pos->executable->is_required == exe->is_required) {
            return DVM_FALSE;
        }
        tail = pos;
    }

    new_item = MEM_malloc(sizeof(DVM_ExecutableItem));
    new_item->executable = exe;
    new_item->next = NULL;

    if (list->list == NULL) {
        list->list = new_item;
    } else {
        tail->next = new_item;
    }

    return DVM_TRUE;
}

static void
set_path_to_compiler(DKC_Compiler *compiler, char *path)
{
    compiler->path = MEM_storage_malloc(compiler->compile_storage,
                                        strlen(path) + 1);
    strcpy(compiler->path, path);
}


typedef struct DVM_ExecutableInfo {
  DKC_Compiler *compiler;
  char *path;
  DVM_Boolean is_required;
  struct DVM_ExecutableInfo *next;
} DVM_ExecutableInfo;
static DVM_ExecutableInfo info_list[100];
static int info_list_len = 0;

static void
append_function_call_expression(DKC_Compiler *compiler, char *name,
                                ArgumentList *args) {
    StatementList *func_call = dkc_create_statement_list(
        dkc_create_expression_statement(
            dkc_create_function_call_expression(
                dkc_create_identifier_expression(name), args)));
    if (!compiler->statement_list) {
        compiler->statement_list = func_call;
    } else {
        for (StatementList *pos = compiler->statement_list;
             pos; pos = pos->next) {

            if (pos->next == NULL) {
                pos->next = func_call;
                break;
            }
        }
    }
}

static void
append_main_call(DKC_Compiler *compiler) {
    for (FunctionDefinition * fpos = compiler->function_list;
        fpos; fpos = fpos->next) {

        if (fpos->class_definition == NULL &&
            dvm_compare_string(fpos->name, "main")) {
            append_function_call_expression(compiler, fpos->name, NULL);
            break;
        }
    }
}

/**
 * TODO: refactor the bad code
 */
static void
append_test_call(DKC_Compiler *compiler) {
    ArgumentList *args =
        dkc_create_argument_list(
            dkc_create_static_function_call_expression(
                "Testing", "new", NULL));

    // specify target
    if (compiler->test_target) {
        Expression *str_expr = dkc_alloc_expression(STRING_EXPRESSION);
        str_expr->u.string_value = dkc_mbstowcs_alloc(
            compiler->current_line_number, compiler->test_target);
        append_function_call_expression(compiler, "Testing::start",
                                      dkc_create_argument_list(str_expr));

        append_function_call_expression(compiler,
                                      compiler->test_target,
                                      args);

        Expression *str_expr2 = dkc_alloc_expression(STRING_EXPRESSION);
        str_expr2->u.string_value = dkc_mbstowcs_alloc(
            compiler->current_line_number, compiler->test_target);
        append_function_call_expression(compiler, "Testing::end",
                                        dkc_create_argument_list(str_expr2));
        return;
    }

    for (FunctionDefinition * fpos = compiler->function_list;
         fpos; fpos = fpos->next) {
        // FIXME: Duplicate name of `Testing`
        if (fpos->class_definition == NULL &&
            fpos->parameter != NULL &&
            fpos->parameter->type->basic_type == DVM_UNSPECIFIED_IDENTIFIER_TYPE &&
            dvm_compare_string( fpos->parameter->type->identifier,
                                "Testing")) {

            Expression *str_expr = dkc_alloc_expression(STRING_EXPRESSION);
            str_expr->u.string_value = dkc_mbstowcs_alloc(
              compiler->current_line_number, fpos->name);
            append_function_call_expression(compiler, "Testing::start",
                                          dkc_create_argument_list(str_expr));

            append_function_call_expression(compiler, fpos->name, args);

            Expression *str_expr2 = dkc_alloc_expression(STRING_EXPRESSION);
            str_expr2->u.string_value = dkc_mbstowcs_alloc(
                compiler->current_line_number, fpos->name);
            append_function_call_expression(compiler, "Testing::end",
                                          dkc_create_argument_list(str_expr2));
        }
    }
}

static void
add_entrypoint(DKC_Compiler *compiler) {
    if (compiler->is_test) {
        append_test_call(compiler);
    } else {
        append_main_call(compiler);
    }
}

static void
do_just_compile(DKC_Compiler *compiler, char *path, DVM_Boolean is_required) {
    extern FILE *yyin;
    extern int yyparse(void);
    RequireList *req_pos;
    DKC_Compiler *req_comp;
    char found_path[FILENAME_MAX];
    DKC_Compiler *compiler_backup;
    SourceInput source_input;

    compiler_backup = dkc_get_current_compiler();
    dkc_set_current_compiler(compiler);
    if (yyparse()) {
        fprintf(stderr, "Error ! Error ! Error !\n");
        exit(1);
    }

    for (req_pos = compiler->require_list; req_pos;
         req_pos = req_pos->next) {
        req_comp = search_compiler(st_compiler_list, req_pos->package_name);
        if (req_comp) {
            compiler->required_list
                    = add_compiler_to_list(compiler->required_list, req_comp);
            continue;
        }
        req_comp = DKC_create_compiler();

        /* BUGBUG req_comp references parent compiler's MEM_storage */
        req_comp->package_name = req_pos->package_name;
        req_comp->source_suffix = DKH_SOURCE;

        compiler->required_list
                = add_compiler_to_list(compiler->required_list, req_comp);
        st_compiler_list = add_compiler_to_list(st_compiler_list, req_comp);

        get_require_input(req_pos, found_path, &source_input);
        set_path_to_compiler(req_comp, found_path);
        req_comp->input_mode = source_input.input_mode;
        if (source_input.input_mode == FILE_INPUT_MODE) {
            yyin = source_input.u.file.fp;
        } else {
            dkc_set_source_string(source_input.u.string.lines);
        }
        do_just_compile(req_comp, found_path, DVM_TRUE);
    }

    if (!compiler->package_name) {
        add_entrypoint(compiler);
    }

    dkc_fix_tree(compiler);

    // add to info_list
    info_list[info_list_len].compiler = compiler;
    if (path) {
        info_list[info_list_len].path = MEM_strdup(path);
    } else {
        info_list[info_list_len].path = NULL;
    }
    info_list[info_list_len].is_required = is_required;
    info_list_len++;

    dkc_set_current_compiler(compiler_backup);
}

static DVM_Executable *
do_compile(DKC_Compiler *compiler, DVM_ExecutableList *list, char *path,
           DVM_Boolean is_required)
{
    DVM_Executable *exe;

    do_just_compile(compiler, path, is_required);

     // merge required_list
     for (int i = 0; i < info_list_len; i++) {
         DKC_Compiler *comp = info_list[i].compiler;

         for (int j = 0; j < info_list_len; j++) {
             DKC_Compiler *r_comp = info_list[j].compiler;
             if (dkc_compare_package_name(comp->package_name,
                                          r_comp->package_name)) {
               continue;
             }
             if (!search_compiler(comp->required_list, r_comp->package_name)) {
                 comp->required_list =
                         add_compiler_to_list(comp->required_list, r_comp);
             }
         }
     }

    for (int i = 0; i < info_list_len; i++) {
        DVM_ExecutableInfo info = info_list[i];

        // switch compiler
        dkc_set_current_compiler(info.compiler);

        // add interfaces for all class to dvm_class
        for (ClassDefinition *cls_df = info.compiler->class_definition_list;
             cls_df; cls_df = cls_df->next) {
          for (ExtendsList *if_df = cls_df->interface_list;
              if_df; if_df = if_df->next) {
              dkc_fix_add_class(if_df->class_definition);
          }
        }

        // generate exe
        exe = dkc_generate(info.compiler);
        exe->path = info.path;
        exe->is_required = info.is_required;
        if (!add_exe_to_list(exe, list)) {
            dvm_dispose_executable(exe);
        }
    }

    dkc_set_current_compiler(compiler);
    return exe;
}

static void
dispose_compiler_list(void)
{
    CompilerList *temp;

    while (st_compiler_list) {
        temp = st_compiler_list;
        st_compiler_list = temp->next;
        MEM_free(temp);
    }
}


DVM_ExecutableList *
DKC_compile(DKC_Compiler *compiler, FILE *fp, char *path)
{
    extern FILE *yyin;
    DVM_ExecutableList *list;
    DVM_Executable *exe;

    DBG_assert(st_compiler_list == NULL,
               ("st_compiler_list != NULL(%p)", st_compiler_list));
    set_path_to_compiler(compiler, path);
    compiler->input_mode = FILE_INPUT_MODE;

    yyin = fp;

    list = MEM_malloc(sizeof(DVM_ExecutableList));
    list->list = NULL;
    
    exe = do_compile(compiler, list, NULL, DVM_FALSE);
    exe->path = MEM_strdup(path);
    list->top_level = exe;

    /* dvm_disassemble(exe);*/

    dispose_compiler_list();
    dkc_reset_string_literal_buffer();

    return list;
}

void
DKC_lsp(DKC_Compiler *compiler, FILE *fp, char *path) {
    ClassDefinition *cd;
    ExtendsList *ext_inter;
    FunctionDefinition *fd;
    Declaration *local_var;

    DKC_compile(compiler, fp, path);

    printf("+----------------------+\n");
    printf("|  STRUCT DEFINITIONS  |\n");
    printf("+----------------------+\n");
    for (cd = compiler->class_definition_list; cd; cd = cd->next) {
        printf("%s(:%d)\n", cd->name, cd->line_number);
        for (ext_inter = cd->interface_list; ext_inter;
             ext_inter = ext_inter->next) {
            printf(" | %s\n", ext_inter->identifier);
        }
    }

    printf("+----------------------+\n");
    printf("| FUNCTION DEFINITIONS |\n");
    printf("+----------------------+\n");
    for (fd = compiler->function_list; fd; fd = fd->next) {
        printf("%s(:%d)\n", fd->name, fd->end_line_number);
        for (int i = 0; i < fd->local_variable_count; i++) {
            local_var = fd->local_variable[i];
            printf(" | %s: %s\n", local_var->name,
                   dkc_get_type_name(local_var->type));
        }
    }
}

PackageName *
create_one_package_name(DKC_Compiler *compiler,
                        char *str, int start_idx, int to_idx)
{
    PackageName *pn;
    int i;

    MEM_Storage storage = compiler->compile_storage;
    pn = MEM_storage_malloc(storage, sizeof(PackageName));
    pn->name = MEM_storage_malloc(storage, to_idx - start_idx + 1);

    for (i = 0; i < to_idx - start_idx; i++) {
        pn->name[i] = str[start_idx + i];
    }
    pn->name[i] = '\0';
    pn->next = NULL;

    return pn;
}

static PackageName *
string_to_package_name(DKC_Compiler *compiler, char *str)
{
    int start_idx;
    int i;
    PackageName *pn;
    PackageName *top;
    PackageName *tail = NULL;

    for (start_idx = i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            pn = create_one_package_name(compiler, str, start_idx, i);
            start_idx = i + 1;
            if (tail) {
                tail->next = pn;
            } else {
                top = pn;
            }
            tail = pn;
        }
    }
    pn = create_one_package_name(compiler, str, start_idx, i);
    if (tail) {
        tail->next = pn;
    } else {
        top = pn;
    }

    return top;
}

SearchFileStatus
get_dynamic_load_input(char *package_name, char *found_path,
                       char *search_file, SourceInput *source_input)
{
    SearchFileStatus status;
    char *search_path;
    FILE *fp;

    if (search_buitin_source(package_name, DKM_SOURCE, source_input)) {
        found_path[0] = '\0';
        return SEARCH_FILE_SUCCESS;
    }

    search_path = getenv("DKM_LOAD_SEARCH_PATH");
    if (search_path == NULL) {
        search_path = ".";
    }
    make_search_path_impl(package_name, search_file);
    status = dvm_search_file(search_path, search_file, found_path, &fp);

    if (status != SEARCH_FILE_SUCCESS) {
        return status;
    }
    source_input->input_mode = FILE_INPUT_MODE;
    source_input->u.file.fp = fp;

    return SEARCH_FILE_SUCCESS;
}

SearchFileStatus
dkc_dynamic_compile(DKC_Compiler *compiler, char *package_name,
                    DVM_ExecutableList *list, DVM_ExecutableItem **add_top,
                    char *search_file)
{
    SearchFileStatus status;
    extern FILE *yyin;
    DVM_ExecutableItem *tail;
    DVM_Executable *exe;
    SourceInput source_input;
    char found_path[FILENAME_MAX];
        
    status = get_dynamic_load_input(package_name, found_path,
                                    search_file, &source_input);
    if (status != SEARCH_FILE_SUCCESS) {
        return status;
    }
    DBG_assert(st_compiler_list == NULL,
               ("st_compiler_list != NULL(%p)", st_compiler_list));

    for (tail = list->list; tail->next; tail = tail->next)
        ;

    compiler->package_name = string_to_package_name(compiler, package_name);
    set_path_to_compiler(compiler, found_path);

    compiler->input_mode = source_input.input_mode;
    if (source_input.input_mode == FILE_INPUT_MODE) {
        yyin = source_input.u.file.fp;
    } else {
        dkc_set_source_string(source_input.u.string.lines);
    }
    exe = do_compile(compiler, list, found_path, DVM_FALSE);

    dispose_compiler_list();
    dkc_reset_string_literal_buffer();

    *add_top = tail->next;

    return SEARCH_FILE_SUCCESS;
}

static CompilerList *
traversal_compiler(CompilerList *list, DKC_Compiler *compiler)
{
    CompilerList *list_pos;
    CompilerList *req_pos;

    for (list_pos = list; list_pos; list_pos = list_pos->next) {
        if (list_pos->compiler == compiler)
            return list;
    }
    if (list_pos == NULL) {
        list = add_compiler_to_list(list, compiler);
    }
    for (req_pos = compiler->required_list; req_pos; req_pos = req_pos->next) {
        list = traversal_compiler(list, req_pos->compiler);
    }

    return list;
}

void
DKC_dispose_compiler(DKC_Compiler *compiler)
{
    CompilerList *list = NULL;
    CompilerList *pos;
    FunctionDefinition *fd_pos;
    CompilerList *temp;

    list = traversal_compiler(list, compiler);

    for (pos = list; pos; ) {
        for (fd_pos = pos->compiler->function_list; fd_pos;
             fd_pos = fd_pos->next) {
            MEM_free(fd_pos->local_variable);
        }
        while (pos->compiler->required_list) {
            temp = pos->compiler->required_list;
            pos->compiler->required_list = temp->next;
            MEM_free(temp);
        }
        MEM_dispose_storage(pos->compiler->compile_storage);
        temp = pos->next;
        MEM_free(pos);
        pos = temp;
    }
}
