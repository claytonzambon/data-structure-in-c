//Arquivo FilaEstatica.c
#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h" //inclui os Protótipos

//Definição do tipo Fila
struct fila{
    int inicio, final, qtd;
    struct aluno dados[MAX];
};

Fila* cria_Fila(){
    Fila *fi;
    fi = (Fila*) malloc(sizeof(struct fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
        fi->qtd = 0;
    }
    return fi;
}

void libera_Fila(Fila* fi){
    free(fi);
}

int tamanho_Fila(Fila* fi){
    return fi->qtd;
}

int Fila_cheia(Fila* fi){
    if(fi == NULL)
        return -1;
    if (fi->qtd == MAX)
        return 1;
    else
        return 0;
}

int Fila_vazia(Fila* fi){
    if(fi == NULL)
        return -1;
    if(fi->qtd == 0)
        return 1;
    else
        return 0;
}

int insere_Fila(Fila* fi, struct aluno al){
    fi->dados[fi->final] = al;
    fi->final = (fi->final+1);
    fi->qtd++;
    return 1;
}

int remove_Fila(Fila* fi){
    fi->inicio = (fi->inicio+1);
    fi->qtd--;
    return 1;
}

int consulta_Fila(Fila* fi, struct aluno *al){
    *al = fi->dados[fi->inicio];
    exibe_consulta(al);
    return 1;
}












