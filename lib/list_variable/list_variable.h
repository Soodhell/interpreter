//
// Created by roman on 12/16/24.
//

#ifndef PRACTIC_C_LIST_VARIABLE_H
#define PRACTIC_C_LIST_VARIABLE_H

typedef struct Variable{
    char* name;
    void* value;
    int type_data;
} Variable;

typedef struct Node_variable{
    Variable* variable;
    struct Node_variable* next;
} Node_variable;

typedef struct List_variable{
    Variable* first;
    Variable* last;
}List_variable;

#endif //PRACTIC_C_LIST_VARIABLE_H
