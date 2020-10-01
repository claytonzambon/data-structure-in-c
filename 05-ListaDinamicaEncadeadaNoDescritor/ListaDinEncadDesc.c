//Arquivo ListaDinEncadDesc.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadDesc.h" //inclui os protótipos
//Definição do tipo lista
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;
//Definição do Nó Descritor
struct descritor{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};
