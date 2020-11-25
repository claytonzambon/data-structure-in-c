#include <stdio.h>
#include <stdlib.h>

int busca_linear(int vetor[], int chave, int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(vetor[i] == chave){
            return i;
        }
    }
    return -1;
}

int main()
{
    //vetor
    int vetor[6] = {42, 8, 5, 12, 5, 1};

    //elemento chave que queremos encontrar no vetor
    int chave = 5;

    //Aplicando a busca linear - vetor, chave, tam
    int retorno = busca_linear(vetor, chave, 6);

    if(retorno > -1){
        printf("O elemento %d esta na posicao %d\n", chave, retorno);
    } else {
        printf("Elemento nao encontrado\n\n");
    }


    return 0;
}
