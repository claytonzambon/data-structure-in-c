#include <stdio.h>
#include <stdlib.h>

void select_sort(int vetor[], int tam){
    int menor, troca;
    int i, j;

    //Loop externo para repassar todo o vetor
    for(i = 0; i < (tam - 1); i++){
        //Variavel para acompanhar o loop for pegando sempre o menor elemento
        menor = i;

        //Loop interno para trabalhar com o proximo elemento
        for(j = (i + 1); j < tam; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        //Onde ocorre a troca
        if(i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
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
    printf("Aplicando a Ordenacao SELECT SORT...\n\n");
    select_sort(vetor, 10);

    //Apresentando o vetor Ordenado
    printf("Vetor Ordenado: \n");
    for(i = 0; i < 10; i++){
        printf("| %d ", vetor[i]);
    }
    printf("| \n\n");

    return 0;
}
