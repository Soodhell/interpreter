#include "list_variable.h"
#include <stdlib.h>
#include <string.h>

void create_variable(List_variable* list_variable,char* name, void* value, int type){

    Variable* variable = malloc(sizeof(Variable));

    variable->name = calloc(strlen(name),sizeof(char));
    strcpy(variable->name, name);



    if(list_variable->first == NULL){
        list_variable->first =
    }

};
