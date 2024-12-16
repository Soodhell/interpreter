//
// Created by roman on 12/13/24.
//

#ifndef PRACTIC_C_TOKEN_LIST_H
#define PRACTIC_C_TOKEN_LIST_H


typedef struct Token{
    char* name;
    int type;
} Token;

typedef struct Node_token{
    Token* token;
    struct Node_token* next;
} Node_token;

typedef struct List_token{
    Node_token* first_token;
    Node_token* last_token;
} List_token;

List_token* create_list();
void save_token(List_token*, char*);

#endif //PRACTIC_C_TOKEN_LIST_H
