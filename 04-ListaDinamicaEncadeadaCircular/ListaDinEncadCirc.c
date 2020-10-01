//Arquivo ListaDinEncadCirc.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadCirc.h" //inclui os Protótipos
//Definição do tipo lista
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

void libera_lista(Lista* li){
    if(li != NULL && (*li) != NULL){
        Elem *aux, *no = *li;
        while((*li) != no->prox){
            aux = no;
            no = no->prox;
            free(aux);
        }
        free(no);
        free(li);
    }
}

int lista_vazia(Lista* li){
    if(li == NULL || (*li) == NULL)
        return 1;

    return 0;
}

int tamanho_lista(Lista* li){
    int cont = 0;
    Elem* no = *li;
    do{
        cont++;
        no = no->prox;
    }while(no != (*li));
    return cont;
}

//Funcao que calcula a media das notas dos alunos
float calcular_media(struct aluno al){
    float media_notas;
    media_notas = (al.n1 + al.n2 + al.n3 + al.n4)/4;
    return media_notas;
}

//Verificar se Matricula ja existe
int verificar_matricula(Lista* li, struct aluno al){
    Elem *no = *li;
    int i = 1;
    while(no != NULL){
        if(no->dados.matricula  == al.matricula)
        {
            return 1;
        } else {
            no = no->prox;
            i++;
        }
    }
    return 0;
}

//Funcao que verifica se as notas digitadas
//Sao menores que ZERO ou maiores que DEZ
float verificar_notas(struct aluno al){
    if(al.n1 < 0 || al.n1 > 10){
        return 1;
    } else if (al.n2 < 0 || al.n2 > 10){
        return 1;
    } else if (al.n3 < 0 || al.n3 > 10){
        return 1;
    } else if (al.n4 < 0 || al.n4 > 10){
        return 1;
    }
    return 0;
}

int insere_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;

    no->dados = al;
    if((*li) == NULL){//lista vazia: insere início
        *li = no;
        no->prox = no;
    }else{
        Elem *aux = *li;
        while(aux->prox != (*li)){
            aux = aux->prox;
        }
        aux->prox = no;
        no->prox = *li;
        *li = no;
    }
    return 1;
}

int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;

    no->dados = al;
    if((*li) == NULL){//lista vazia: insere início
        *li = no;
        no->prox = no;
    }else{
        Elem *aux = *li;
        while(aux->prox != (*li)){
            aux = aux->prox;
        }
        aux->prox = no;
        no->prox = *li;
    }
    return 1;
}


