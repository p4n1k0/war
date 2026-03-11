#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMES 30
#define TAM_STRING 10

struct Territorio {
    char nome[MAX_NOMES];
    char cor[TAM_STRING];
    int tropas;
};
