//Arquivo PilhaDin.c
#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h" //inclui os Protótipos

//Definição do tipo Pilha
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

//Cria a Pilha
Pilha* cria_Pilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL)
        *pi = NULL;
    return pi;
}

//Libera a Pilha
void libera_Pilha(Pilha* pi){
    if(pi != NULL){
        Elem* no;
        while((*pi) != NULL){
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
}

//Retorna o tamanho da pilha
int tamanho_Pilha(Pilha* pi){
    if(pi == NULL)
        return 0;
    int cont = 0;
    Elem* no = *pi;
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

//Retorna se Pilha Vazia
int Pilha_vazia(Pilha* pi){
    if(pi == NULL || *pi == NULL)
        return 1;

    return 0;
}

//Função para inserir elementos na Pilha
int insere_Pilha(Pilha* pi, struct aluno al){
    Elem* no;
    no = (Elem*)malloc(sizeof(Elem));
    if(no == NULL)
        return 0;

    no->dados = al;
    no->prox = (*pi);
    *pi = no;
    return 1;
}

//Função para remover elementos da Pilha
int remove_Pilha(Pilha* pi){
    Elem *no = *pi;
    *pi = no->prox;
    free(no);
    return 1;
}



