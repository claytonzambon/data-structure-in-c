#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

/*Implementando a Struct do tipo Lista
Controlador: ira controlar o tamanho da lista
e a posicao dos elementos*/
struct lista{
    int qtd;
    struct aluno dados[MAX];
};

//Implementando a funcao criar Lista
Lista* cria_lista(){
    Lista* li; //Declarando ponteiro
    li = (Lista*)malloc(sizeof(struct lista));
    if(li != NULL)
        li->qtd = 0;
    return li;
}

//Implementando funcao libera_lista
void libera_lista(Lista* li){
    free(li);
}

//Implementando funcao que retorna o tamanho da lista
int tamanho_lista(Lista* li){
    if(li == NULL)
        return -1;
    else
        return li->qtd;
}

int lista_cheia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->qtd == MAX);
}

int lista_vazia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->qtd == 0);
}

//Funcao para Inserir no Final
int insere_lista_final(Lista* li, struct  aluno al){
    if(li == NULL)
        return 0;
    if(li->qtd == MAX){ //Lista Cheia
        printf("\n\nLista Cheia\n\n");
        return 0;
    }
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

//Funcao para inserir no Inicio
int insere_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    if(li->qtd == MAX){ //lista cheia
        printf("\n\nLista Cheia\n\n");
        return 0;
    }

    int i;
    for(i = li->qtd-1; i >= 0; i--)
        li->dados[i+1] = li->dados[i];

    li->dados[0] = al;
    li->qtd++;
    return 1;
}

//Funcao para inserir de forma Ordenada
int insere_lista_ordenada(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    if(li->qtd == MAX){ //lista cheia
        printf("\n\nLista Cheia\n\n");
        return 0;
    }

    int k, i = 0;

    while(i < li->qtd && li->dados[i].matricula < al.matricula)
        i++;

    for(k = li->qtd-1; k >= i; k--)
        li->dados[k+1] = li->dados[k];

    li->dados[i] = al;
    li->qtd++;
    return 1;
}

//Funcao para Exibir a Lista
void imprime_lista(Lista* li){
    if(li == NULL)
        return 0;

    int i;
    printf("------------------------------\n");
    for(i = 0; i < li->qtd; i++){
        printf("Matricula: %d\n", li->dados[i].matricula);
        printf("Nome: %s\n", li->dados[i].nome);
        printf("Notas: %.2f - %.2f - %.2f - %.2f\n",
               li->dados[i].n1,
               li->dados[i].n2,
               li->dados[i].n3,
               li->dados[i].n4);
        printf("------------------------------\n");
    }
}


