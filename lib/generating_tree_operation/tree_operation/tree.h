#include "../../generating_list/token_list/token_list.h"

typedef struct Node_tree{
    Token** mass_token;
    int count;
    struct Node_tree* next;
} Node_tree;

typedef struct Tree{
    Node_tree* main;
} Tree;

Tree* create_tree();