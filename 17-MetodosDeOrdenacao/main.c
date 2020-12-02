#include <stdio.h>
#include <stdlib.h>
#include "sorting_methods.h"

int main()
{
    //Declarando e populando um vetor de 10 posições
    int vetor[10] = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};
    int i = 0, opcao, cont = 0;

    while(cont == 0){
        system("cls");
        menu();

        //Apresentar Vetor Atual
        apresentar_vetor(vetor, 10);

        printf("\nEscolha uma opcao para continuar >>: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                //Chamando a funcao para gerar um vetor aleatorio
                gerar_vetor_randomico(vetor, 10);
                break;
            case 2:
                //Apresentando o Vetor Desordenado
                printf("\nVetor Desordenado:\n");
                apresentar_vetor(vetor, 10);

                printf("Aplicando o Metodo de Ordenacao INSERT SORT\n");
                //Função de Ordenação utilizando SELECT SORT
                insert_sort(vetor, 10);

                //Apresentando o Vetor Ordenado
                printf("\nVetor Ordenado:\n");
                apresentar_vetor(vetor, 10);

                system("pause");
                break;
            case 3:
                //Apresentando o Vetor Desordenado
                printf("\nVetor Desordenado:\n");
                apresentar_vetor(vetor, 10);

                printf("Aplicando o Metodo de Ordenacao SELECT SORT\n");
                //Função de Ordenação utilizando SELECT SORT
                select_sort(vetor, 10);

                //Apresentando o Vetor Ordenado
                printf("\nVetor Ordenado:\n");
                apresentar_vetor(vetor, 10);

                system("pause");
                break;
            case 4:
                //Apresentando o Vetor Desordenado
                printf("\nVetor Desordenado:\n");
                apresentar_vetor(vetor, 10);

                printf("Aplicando o Metodo de Ordenacao BUBBLE SORT\n");
                //Função de Ordenação utilizando BUBBLE SORT
                bubble_sort(vetor, 10);

                //Apresentando o Vetor Ordenado
                printf("\nVetor Ordenado:\n");
                apresentar_vetor(vetor, 10);

                system("pause");
                break;
            case 5:
                printf("\n\n\tAte Logo !!!\n\n\n");
                cont = 1;
                break;
            default:
                printf("\n\nOpção Inválida\n\n");
                system("pause");
                break;
        }
    }
    system("pause");
    printf("\n\n\n\n");

    return 0;
}
