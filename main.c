#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/read_file/read_file.h"
#include "lib/generating_list/genereting_list.h"
#include "lib/generating_tree_operation/generating_tree_operation.h"



int main (int argc, char **argv) {

    FILE *file = fopen(argv[1], "r");

    char *text = read_file(file);

    List_token* list_token = generating_list(text);
    Tree* tree = generation_tree(list_token);

    Node_tree* node_tree = tree->main;
    while (1){
        int i = 0;
        while (i < node_tree->count) {

            if (strcmp(node_tree->mass_token[i]->name, "int") == 0){

                i += 2;

                if (strcmp(node_tree->mass_token[i]->name, "=") == 0){

                    --i;



                }

                continue;
            }

        }

        node_tree = node_tree->next;

        if (node_tree == NULL) break;

    }

    free(list_token);

    fclose(file);

    return 0;
}