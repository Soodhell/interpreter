#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Tree* create_tree(){
    Tree* tree = malloc(sizeof(Tree));
    tree->main = NULL;

    return tree;
}

