//Arquivo FilaDin.c
#include <stdio.h>
#include <stdlib.h>
#include "FilaDin.h" //inclui os Protótipos

//Definição do tipo Fila
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;
//Definição do Nó Descritor da Fila
struct fila{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};
