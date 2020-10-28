//Arquivo FilaEstatica.c
#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h" //inclui os Protótipos

//Definição do tipo Fila
struct fila{
    int inicio, final;
    struct aluno dados[MAX];
};

Fila* cria_Fila(){
    Fila *fi;
    fi = (Fila*) malloc(sizeof(struct fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
    }
    return fi;
}

void libera_Fila(Fila* fi){
    free(fi);
}

int tamanho_Fila(Fila* fi){
    int qtd = abs(fi->final - fi->inicio);
    return qtd;
}

int Fila_cheia(Fila* fi){
    if (fi->inicio == (fi->final+1)%MAX)
        return 1;
    else
        return 0;
}

int Fila_vazia(Fila* fi){
    if(fi == NULL)
        return -1;
    return (fi->inicio == fi->final);
}

int insere_Fila(Fila* fi, struct aluno al){
    fi->final = (fi->final+1)%MAX;
    fi->dados[fi->final] = al;
    return 1;
}
