#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int vetor[], int chave, int tam){
    int inicio = 0;
    int fim = tam - 1;
    while(inicio <= fim){
        //Encontra o meio do Vetor
        int meio = (inicio + fim) / 2;
        //Se a chave estiver no meio, retorna
        if(chave == vetor[meio]){
            return meio;
        }
        //Se a chave for menor que o valor do meio, passa para o próximo elemento
        if(chave < vetor[meio]){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    //Se não encontrar nada...
    return -1;
}

int main()
{
    //vetor ordenado
    int vetor[6] = {1, 3, 5, 8, 12, 42};

    //elemento chave que queremos encontrar no vetor
    int chave = 5;

    //Aplicando a busca binaria - vetor, chave, tamanho
    int retorno = busca_binaria(vetor, chave, 6);

    if(retorno > -1){
        printf("O elemento %d esta na posicao %d\n\n", chave, retorno);
    } else {
        printf("Elemento nao encontrado\n\n");
    }
    return 0;
}
