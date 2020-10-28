//Arquivo mensagens.c
//Contem todas as mensagens e menu da Pilha
#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h" //inclui os Protótipos

//Implementacao do MENU INICIAL
void menu(){
    printf("NOME: CLAYTON ZAMBON\n\n");
    printf("\n#########################################");
    printf("\n#               MENU                    #");
    printf("\n#           Pilha Dinamica              #");
    printf("\n#                                       #");
    printf("\n#  Digite a opcao desejada              #");
    printf("\n#                                       #");
    printf("\n# 1 - Inserir Elemento                  #");
    printf("\n# 2 - Remover Elemento                  #");
    printf("\n# 3 - Consultar Elemento da Pilha       #");
    printf("\n# 4 - Exibir Pilha                      #");
    printf("\n# 5 - Exibir o Tamanho da Pilha         #");
    printf("\n# 6 - Sair                              #");
    printf("\n#########################################");
    printf("\n");
    printf("\nEscolha uma opcao para continuar >>: ");
}

void msg_pilha_vazia(){
    printf("\nPilha Vazia\n\n");
    system("pause");
}

void msg_insercao_com_falha(){
    printf("\nFALHA na insercao do Elemento\n");
    system("pause");
}

void msg_elemento_inserido_com_sucesso(){
    printf("\n\nElemento inserido com sucesso\n\n");
    system("pause");
}

void msg_removido_elemento(){
    printf("\nElemento removido com sucesso\n\n");
    system("pause");
}

void informar_dados(struct aluno *al){  //Captura os dados digitados pelo usuario
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

void exibe_consulta(struct aluno *al){
    printf("Matricula: %d\n", al->matricula);
    printf("Nome: %s\n", al->nome);
    printf("Notas: %.2f - %.2f  - %.2f - %.2f\n",
           al->n1,
           al->n2,
           al->n3,
           al->n4);
    printf("-------------------------------\n");
}
