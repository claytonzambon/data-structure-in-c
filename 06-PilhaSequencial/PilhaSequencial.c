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

//Funcao que retorna o tamanho da Pilha
int tamanho_Pilha(Pilha* pi){
    if(pi == NULL)
        return -1;
    else
        return pi->qtd;
}

//Funcao que retorna se a Pilha esta cheia
int Pilha_cheia(Pilha* pi){
    if(pi == NULL)
        return -1;
    else
        return (pi->qtd == MAX);
}

//Funcao que retorna se a Pilha esta vazia
int Pilha_vazia(Pilha* pi){
    if(pi == NULL)
        return -1;
    else
        return (pi->qtd == 0);
}

//Funcao que insere elemento na Pilha
int insere_Pilha(Pilha* pi, struct aluno al){
    pi->dados[pi->qtd] = al;
    pi->qtd++;
    return 1;
}
