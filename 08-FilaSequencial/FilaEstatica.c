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

