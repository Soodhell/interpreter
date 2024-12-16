#include <stdlib.h>
#include <string.h>
#include "generating_tree_operation.h"

Tree* generation_tree(List_token* list_token){

    Tree* tree = create_tree();

    Node_token* node_token = list_token->first_token;
    Node_tree* node_tree = malloc(sizeof(Node_tree));
    tree->main = node_tree;

    if(node_token == NULL) return NULL;
    int count = 1;

    while (1){

        if(strcmp(node_token->token->name, ";") == 0) {

            node_tree->next = malloc(sizeof(Node_tree));
            node_tree->count = count-1;
            count = 1;

            node_tree=node_tree->next;

            node_token = node_token->next;

            if(node_token == NULL) break;

            continue;
        }

        node_tree->mass_token = realloc(node_tree->mass_token, sizeof(Node_token*)*count);
        node_tree->mass_token[count-1] = node_token->token;
        ++count;

        node_token = node_token->next;
        if(node_token == NULL) break;

    }

    return tree;

}