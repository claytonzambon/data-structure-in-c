//Arquivo mensagens.c
#include <stdio.h>
#include <stdlib.h>
#include "sorting_methods.h"

//Implementação do Menu Principal
void menu(){
    printf("NOME: Clayton Zambon\n\n");
    printf("\n#########################################");
    printf("\n#               MENU                    #");
    printf("\n#        Metodos de Ordenacao           #");
    printf("\n#                                       #");
    printf("\n#  Digite a opcao desejada              #");
    printf("\n#                                       #");
    printf("\n# 1 - Gerar um Vetor Randomico          #");
    printf("\n# 2 - Insertion Sort                    #");
    printf("\n# 3 - Select Sort                       #");
    printf("\n# 4 - Bubble Sort                       #");
    printf("\n# 5 - Sair                              #");
    printf("\n#########################################");
    printf("\n");
}

//Funcao para exibir os dados do vetor
void apresentar_vetor(int vetor[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("| %d ", vetor[i]);
    }
    printf("| \n\n");
}

//Funcao para gerar um Vetor com dados aleatorios
void gerar_vetor_randomico(int vetor[], int tamanho){
    int i;
    printf("\nVetor Gerado Randomicamente: \n");
    srand(time(NULL));
    for(i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100 + 1;
        printf("| %d ", vetor[i]);
    }
    printf("| \n\n");
    system("pause");
}
