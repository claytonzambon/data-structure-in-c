#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadCirc.h" //inclui os Protótipos

//Implementacao do MENU INICIAL
void menu(){
    printf("NOME: CLAYTON ZAMBON\n\n");
    printf("\n#########################################");
    printf("\n#               MENU                    #");
    printf("\n#  Lista Dinamica Encadeada Circular    #");
    printf("\n#                                       #");
    printf("\n# Digite a opcao desejada               #");
    printf("\n#                                       #");
    printf("\n# 1  - Inserir Elemento no Final        #");
    printf("\n# 2  - Inserir Elemento no Inicio       #");
    printf("\n# 3  - Inserir Elemento no Ordenado     #");
    printf("\n# 4  - Remover Elemento do Final        #");
    printf("\n# 5  - Remover Elemento do Inicio       #");
    printf("\n# 6  - Remover Elemento                 #");
    printf("\n# 7  - Consultar Elemento pela Posicao  #");
    printf("\n# 8  - Consultar Elemento pela Matricula#");
    printf("\n# 9  - Exibir Lista                     #");
    printf("\n# 10 - Exibir o Tamanho da Lista        #");
    printf("\n# 11 - Sair                             #");
    printf("\n#########################################");
    printf("\n");
    printf("\nEscolha uma opcao para continuar >>: ");
}

void msg_lista_vazia(){
    printf("\n\nLista Vazia\n\n");
    system("pause");
}

void msg_elemento_inserido_com_sucesso(){
    printf("\n\nElemento inserido com sucesso\n\n");
    system("pause");
}

void msg_falha_insercao(){
    printf("\n\nFalha ao inserir o elemento\n\n");
    system("pause");
}

void msg_removida_do_inicio(){
    printf("\nElemento removido do INICIO da lista\n\n");
    system("pause");
}

void msg_removida_do_final(){
    printf("\n\nElemento removido do FINAL da lista\n\n");
    system("pause");
}

void msg_falha_na_remocao(){
    printf("\n\nErro ao Remover elemento\n\n");
    system("pause");
}

int msg_matricula_nao_encontrado(int mat){
    printf("\nElemento da matricula >> %d << nao encontrado\n\n", mat);
    system("pause");
}

int msg_removida_a_matricula(int mat){
    printf("\nRemovida a matricula >> %d << da lista\n", mat);
    system("pause");
}

void posicao_nao_encontrado(int pos){
    printf("\nPosicao >> %d << nao encontrada\n\n", pos);
}

void matricula_nao_encontrado(int mat){
    printf("\nElemento da matricula >> %d << nao encontrado\n", mat);
}

void exibe_consulta(struct aluno *al){
    printf("Matricula: %d\n", al->matricula);
    printf("Nome: %s\n", al->nome);
    printf("Notas: %.2f %.2f %.2f\n",
           al->n1,
           al->n2,
           al->n3,
           al->n4);
    printf("-------------------------------\n");
}
