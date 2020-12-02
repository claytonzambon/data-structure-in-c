#include <stdio.h>
#include <stdlib.h>

void insert_sort(int vetor[], int tam){
    int troca;
    int i, j;

    //Percorrer todo o vetor
    for (i = 1; i < tam; i++){
        int proximo = i;

        //Responsavel pelas trocas
        while((proximo != 0) && (vetor[proximo] < vetor[proximo - 1])){
            troca = vetor[proximo];
            vetor[proximo] = vetor[proximo - 1];
            vetor[proximo - 1] = troca;
            proximo--;
        }
    }
}

int main()
{
    //Declarando e populando um vetor de 10 posicoes
    int vetor[10] = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};
    int i;

    //Apresentando o vetor Desordenado
    printf("Vetor Desordenado: \n");
    for (i = 0; i < 10; i++){
        printf("| %d ", vetor[i]);
    }
    printf("| \n\n");

    //Aplicando a ordenacao
    printf("Aplicando a Ordenacao INSERT SORT...\n\n");
    insert_sort(vetor, 10);

    //Apresentando o vetor Ordenado
    printf("Vetor Ordenado: \n");
    for(i = 0; i < 10; i++){
        printf("| %d ", vetor[i]);
    }
    printf("| \n\n");

    return 0;
}
