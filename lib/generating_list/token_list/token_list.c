#include "token_list.h"
#include <stdlib.h>
#include <string.h>

List_token* create_list(){
    List_token* list_token = malloc(sizeof(List_token));
    list_token->first_token = NULL;
    list_token->last_token = NULL;

    return list_token;
}

void save_token(List_token* list_token, char* name){
    Node_token* node_token = malloc(sizeof(Node_token));
    Token* token = malloc(sizeof(Token));

    token->name = malloc(sizeof(char)*strlen(name));
    strcpy(token->name, name);
    token->type = 0;

    node_token->token = token;
    node_token->next = NULL;

    if(list_token->last_token == NULL){
        list_token->first_token = node_token;
        list_token->last_token = node_token;
        return;
    }

    list_token->last_token->next = node_token;
    list_token->last_token = node_token;

}
