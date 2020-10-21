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
    printf("\n#           Pilha Dinâmica              #");
    printf("\n#                                       #");
    printf("\n# Digite a opção desejada               #");
    printf("\n#                                       #");
    printf("\n# 1 - Inserir Elemento                  #");
    printf("\n# 2 - Remover Elemento                  #");
    printf("\n# 3 - Consultar Elemento da Pilha       #");
    printf("\n# 4 - Exibir Pilha                      #");
    printf("\n# 5 - Exibir o Tamanho da Pilha         #");
    printf("\n# 6 - Sair                              #");
    printf("\n#########################################");
    printf("\n");
    printf("\nEscolha uma opção para continuar >>: ");
}
