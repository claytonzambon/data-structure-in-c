//Arquivo PilhaSequencial.c
//Contem as implementacoes das Funcoes
#include <stdio.h>
#include <stdlib.h>
#include "PilhaSequencial.h"

//Definição do tipo Pilha
struct pilha{
    int qtd;
    struct aluno dados[MAX];
};
