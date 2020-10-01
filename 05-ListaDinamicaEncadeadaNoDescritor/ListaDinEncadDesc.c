//Arquivo ListaDinEncadDesc.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadDesc.h" //inclui os protótipos
//Definição do tipo lista
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

//Definição do Nó Descritor
struct descritor{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        li->inicio = NULL;
        li->final = NULL;
        li->qtd = 0;
    }
    return li;
}

void libera_lista(Lista* li){
    if(li != NULL){
        Elem* no;
        while((li->inicio) != NULL){
            no = li->inicio;
            li->inicio = li->inicio->prox;
            free(no);
        }
        free(li);
    }
}

int lista_vazia(Lista* li){
    if(li == NULL || li->inicio == NULL)
        return 1;

    return 0;
}

int tamanho_lista(Lista* li){
    return li->qtd;
}

//Verificar se Matricula ja existe
int verificar_matricula(Lista* li, struct aluno al){
    Elem *no = li->inicio;
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

//Funcao que calcula a media das notas dos alunos
float calcular_media(struct aluno al){
    float media_notas;
    media_notas = (al.n1 + al.n2 + al.n3 + al.n4)/4;
    return media_notas;
}

int insere_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;

    no->dados = al;
    no->prox = li->inicio;
    if(li->inicio == NULL)
        li->final = no;
    li->inicio = no;
    li->qtd++;
    return 1;
}

int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;

    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;

    no->dados = al;
    no->prox = NULL;
    if(li->inicio == NULL)//lista vazia: insere início
        li->inicio = no;
    else
        li->final->prox = no;

    li->final = no;
    li->qtd++;
    return 1;
}

void imprime_lista(Lista* li, struct aluno *al){
    Elem* no = li->inicio;
    do{
        exibe_consulta(no); // mensagens.c
        no = no->prox;
    }while(no != NULL);
}

int remove_lista_inicio(Lista* li){
    Elem *no = li->inicio;
    li->inicio = no->prox;
    free(no);
    if(li->inicio == NULL)
        li->final = NULL;
    li->qtd--;
    return 1;
}

int remove_lista_final(Lista* li){
    Elem *ant, *no = li->inicio;
    while(no->prox != NULL){
        ant = no;
        no = no->prox;
    }
    if(no == li->inicio){//remover o primeiro?
        li->inicio = NULL;
        li->final = NULL;
    }else{
        ant->prox = no->prox;
        li->final = ant;
    }
    free(no);
    li->qtd--;
    return 1;
}

