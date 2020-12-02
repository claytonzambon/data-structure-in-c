#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int vetor[], int tam){
    //variavel auxiliar
    int proximo = 0;
    int i, j;

    //varrer todo o vetor externo
    for(i = 0; i < tam; i++){
        //trabalhar com os proximos elementos
        for(j = 0; j < (tam - 1); j++){
            //Ocorre a TROCA
            if(vetor[j] > vetor[j + 1]){
                proximo = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = proximo;
            }
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
    printf("Aplicando a Ordenacao BUBBLE SORT...\n\n");
    bubble_sort(vetor, 10);

    //Apresentando o vetor Ordenado
    printf("Vetor Ordenado: \n");
    for(i = 0; i < 10; i++){
        printf("| %d ", vetor[i]);
    }
    printf("| \n\n");

    return 0;
}
