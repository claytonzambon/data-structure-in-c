//Arquivo mensagens.c
//Contem todas as mensagens e menu da   Pilha
#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h" //inclui os Protótipos

//Implementacao do MENU INICIAL
void menu(){
    printf("NOME: CLAYTON ZAMBON\n\n");
    printf("\n#########################################");
    printf("\n#               MENU                    #");
    printf("\n#        Fila Estatica Sequencial       #");
    printf("\n#                                       #");
    printf("\n# Digite a opcao desejada               #");
    printf("\n#                                       #");
    printf("\n# 1 - Inserir Elemento                  #");
    printf("\n# 2 - Remover Elemento                  #");
    printf("\n# 3 - Consultar Elemento da Fila        #");
    printf("\n# 4 - Exibir Fila                       #");
    printf("\n# 5 - Exibir o Tamanho da Fila          #");
    printf("\n# 6 - Sair                              #");
    printf("\n#########################################");
    printf("\n");
    printf("\nEscolha uma opcao para continuar >>: ");
}

void msg_fila_vazia(){
    printf("\n\nFila Vazia\n\n");
    system("pause");
}
