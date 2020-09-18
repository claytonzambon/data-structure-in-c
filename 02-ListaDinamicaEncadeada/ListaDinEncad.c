//Arquivo ListaDinEncad.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncad.h" //inclui os Protótipos

//Definição do tipo lista
struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

//Implementação da Função que Cria a Lista
Lista* cria_lista(){
    Lista* li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

//Implementação da Função que Libera a Lista
void libera_lista(Lista* li){
    if(li != NULL){
        Elem* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

//Implementação da Função que retorna o tamanho da Lista
int tamanho_lista(Lista* li){
    if(li == NULL)
        return 0;
    int cont = 0;
    Elem* no = *li; //nó auxiliar
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

//Implementação da Função lista_vazia
int lista_vazia(Lista* li){
    if(li == NULL || *li == NULL)
        return 1;

    return 0;
}

//Funcao que calcula a media das notas dos alunos
float calcular_media(struct aluno al){
    float media_notas;
    media_notas = (al.n1 + al.n2 + al.n3 + al.n4)/4;
    return media_notas;
}

//Implementação da Função insere_lista_inicio
int insere_lista_inicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

//Implementação da Função insere_lista_final
int insere_lista_final(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL){//lista vazia: insere início
        *li = no;
    }else{
        Elem *aux;
        aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}

//Implementação da Função insere_lista_ordenada
int insere_lista_ordenada(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    if((*li) == NULL){//lista vazia: insere início
        no->prox = NULL;
        *li = no;
        return 1;
    } else { //Procura onde inserir
        Elem *ant, *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li){//insere início
            no->prox = (*li);
            *li = no;
        }else{
            no->prox = atual;
            ant->prox = no;
        }
        return 1;
    }
}

//Implementação da Função imprime_lista
void imprime_lista(Lista* li){
    if(li == NULL)
        return;
    Elem* no = *li;
    while(no != NULL){
        exibe_consulta(no); //mensagens.c
        no = no->prox;
    }
}

//Implementação da Função remove_lista_inicio
int remove_lista_inicio(Lista* li){
    if(li == NULL)
        return 0;
    if((*li) == NULL)//lista vazia
        return 0;

    Elem *no = *li;
    *li = no->prox;
    free(no);
    return 1;
}

//Implementação da Função remove_lista_final
int remove_lista_final(Lista* li){
    if(li == NULL)
        return 0;
    if((*li) == NULL)//lista vazia
        return 0;

    Elem *ant, *no = *li;
    while(no->prox != NULL){
        ant = no;
        no = no->prox;
    }

    if(no == (*li)) { //remover o primeiro?
        *li = no->prox;
    } else {
        ant->prox = no->prox;
    }
    free(no);
    return 1;
}

//Implementação da Função remove_lista
int remove_lista(Lista* li, int mat){
    if(li == NULL)
        return 0;
    if((*li) == NULL)//lista vazia
        return 0;
    Elem *ant, *no = *li;
    while(no != NULL && no->dados.matricula != mat){
        ant = no;
        no = no->prox;
    }
    if(no == NULL){ //não encontrado
        msg_matricula_nao_encontrado(mat); //mensagens.c
        return 0;
    }

    if(no == *li){ //remover o primeiro?
        *li = no->prox;
        msg_removida_a_matricula(mat); //mensagens.c
    } else {
        ant->prox = no->prox;
        msg_removida_a_matricula(mat); //mensagens.c
    }
    free(no);
    return 1;
}

//Implementação da Função consulta_lista_pos
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
    if(li == NULL || pos <= 0)
        return 0;
    Elem *no = *li;
    int i = 1;
    while(no != NULL && i < pos){
        no = no->prox;
        i++;
    }
    if(no == NULL)
    {
        msg_posicao_nao_encontrado(pos); //mensagens.c
        return 0;
    }
    else{
        *al = no->dados;
        exibe_consulta(al); //mensagens.c
        return 1;
    }
}

//Implementação da Função consulta_lista_mat
int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
    if(li == NULL)
        return 0;
    Elem *no = *li;
    while(no != NULL && no->dados.matricula != mat){
        no = no->prox;
    }
    if(no == NULL){
        msg_matricula_nao_encontrado(mat); //mensagens.c
        return 0;
    }
    else{
        *al = no->dados;
        exibe_consulta(al); //mensagens.c
        return 1;
    }
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
