#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadDesc.h" //inclui os Protótipos

//Implementacao do MENU INICIAL
void menu(){
    printf("NOME: CLAYTON ZAMBON\n\n");
    printf("\n#########################################");
    printf("\n#               MENU                    #");
    printf("\n# Lista Dinamica Encadeada No Descritor #");
    printf("\n#                                       #");
    printf("\n# Digite a opcao desejada               #");
    printf("\n#                                       #");
    printf("\n# 1  - Inserir Elemento no Final        #");
    printf("\n# 2  - Inserir Elemento no Inicio       #");
    printf("\n# 3  - Remover Elemento do Final        #");
    printf("\n# 4  - Remover Elemento do Inicio       #");
    printf("\n# 5  - Consultar Elemento pela Posicao  #");
    printf("\n# 6  - Consultar Elemento pela Matricula#");
    printf("\n# 7  - Exibir Lista                     #");
    printf("\n# 8  - Exibir o Tamanho da Lista        #");
    printf("\n# 9  - Sair                             #");
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

void msg_matricula_nao_encontrado(int mat){
    printf("\nElemento da matricula >> %d << nao encontrado\n\n", mat);
}

void msg_posicao_nao_encontrado(int pos){
    printf("\nPosicao >> %d << nao encontrada\n\n", pos);
}

void msg_matricula_existente(){
    printf("\n\nMatricula Existente\n\n");
    system("pause");
}

void msg_digite_notas_validas(){
    printf("\n\nDigite Notas entre 0 e 10\n\n");
    system("pause");
}

void exibe_consulta(struct aluno *al){
    printf("Matricula: %d\n", al->matricula);
    printf("Nome: %s\n", al->nome);
    printf("Notas: %.2f - %.2f  - %.2f - %.2f\n",
           al->n1,
           al->n2,
           al->n3,
           al->n4);
    printf("Media: %.2f\n", al->media);
    printf("-------------------------------\n");
}

//Funcao para capturar os dados digitados pelo usuario
void informar_dados(struct aluno *al){
    printf("Digite a Matricula: ");
    scanf("%d", &al->matricula);
    printf("Digite o nome: ");
    fseek(stdin,0,SEEK_END);
    scanf("%[^\n]", al->nome);
    printf("Digite a Nota 01: ");
    scanf("%f", &al->n1);
    printf("Digite a Nota 02: ");
    scanf("%f", &al->n2);
    printf("Digite a Nota 03: ");
    scanf("%f", &al->n3);
    printf("Digite a Nota 04: ");
    scanf("%f", &al->n4);
}
