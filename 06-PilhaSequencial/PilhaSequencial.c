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

//Funcao que cria a Pilha
Pilha* cria_Pilha(){
    Pilha *pi;
    pi = (Pilha*)malloc(sizeof(struct pilha));
    if(pi != NULL)
       pi->qtd = 0;
    return pi;
}

//Funcao que libera a Pilha
void libera_Pilha(Pilha* pi){
    free(pi);
}
