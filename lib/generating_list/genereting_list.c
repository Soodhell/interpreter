//
// Created by r&l on 12/13/24.
//

#include "genereting_list.h"
#include "token_list/token_list.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

List_token* generating_list(char* text){
    List_token* list_token = malloc(sizeof(List_token));

    char* name = malloc(sizeof(char));
    int count_name = 1;

    for (int i = 0; i < strlen(text); ++i) {

        if(text[i] == '\0' || text[i] == ' ' || text[i] == '\n' || text[i] == '\r') {

            name[count_name - 1] = '\0';
            if(name[0] != '\0') save_token(list_token, name);
            name = realloc(name, sizeof(char));
            name[0] = '\0';
            count_name = 1;

        }else if(text[i] == '(' || text[i] == ')' || text[i] == '\"' || text[i] == ';' || text[i] == '{' || text[i] == '}'){

            if(name[0] != '\0'){

                name = realloc(name, (strlen(name)+1)*sizeof(char));
                name[count_name - 1] = '\0';

                save_token(list_token, name);
            }
            name = realloc(name, sizeof(char)*2);
            name[0] = text[i];
            name[1] = '\0';

            save_token(list_token, name);

            name = realloc(name, sizeof(char));
            name[0] = '\0';
            count_name = 1;

        }else{
            name[count_name-1] = text[i];
            name = realloc(name, (strlen(name)+1)*sizeof(char));
            count_name++;
        }

    }

    free(name);

    return list_token;
}
