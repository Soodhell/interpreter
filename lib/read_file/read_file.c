#include <stdio.h>
#include <stdlib.h>

char* read_file(FILE *file){
    int count_element = 1;
    char *text = malloc(sizeof(char));

    while (fscanf(file, "%c", &text[count_element-1]) != EOF){
        ++count_element;
        text = realloc(text, sizeof(char)*(count_element));
    }
    text[count_element-1] = '\0';

    return text;
}