#include <string.h>
#include "dvm_pri.h"

DVM_ErrorDefinition dvm_error_message_format[] = {
    {"dummy"},
    {"Invalid multibyte character."},
    {"Function $(name) not found."},
    {"Duplicate definition of function $(package)#$(name)."},
    {"Array index out of bounds. Accessing index $(index) of array of size $(size)."},
    {"Integer division by zero."},
    {"Null reference."},
    {"File not found: $(file)"},
    {"Error loading file ($(status))."},
    {"Duplicate definition of class $(package)#$(name)."},
    {"Class $(name) not found."},
    {"This object's class is $(org). Cannot cast to $(target)."},
    {"Duplicate definition of enum $(package)#$(name)."},
    {"Duplicate definition of constant $(package)#$(name)."},
    {"Cannot dynamically load function $(name) because it has no package specification."},
    {"dummy"}
};

DVM_ErrorDefinition dvm_native_error_message_format[] = {
    {"Array index out of bounds. Trying to insert at position $(pos) of array of size $(size)."},
    {"Array index out of bounds. Trying to remove position $(pos) of array of size $(size)."},
    {"Position specified in string is out of range. Length of string is $(len) and position specified is $(pos)."},
    {"Second argument (length) of substr() is out of range ($(len))."},
    {"First argument (filename) of fopen() is null."},
    {"Second argument (mode) of fopen() is null."},
    {"File pointer passed to fgets() is null."},
    {"Invalid argument type passed to fgets()."},
    {"File pointer passed to fgets() is invalid. Probably already closed()."},
    {"Cannot convert multibyte string read by fgets() to internal representation."},
    {"File pointer passed to fputs() is null."},
    {"Invalid argument type passed to fputs()."},
    {"File pointer passed to fputs() is invalid. Probably already closed()."},
    {"Argument to fclose() is null."},
    {"Invalid argument type passed to fclose()."},
    {"File pointer passed to fclose() is invalid. Probably already closed()."},
    {"parse_int() argument is null."},
    {"parse_int() format error. Original string: \"$(str)\""},
    {"parse_double() argument is null."},
    {"parse_double() format error. Original string: \"$(str)\""},
};
