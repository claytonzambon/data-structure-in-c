#include <stdio.h>
#include <stdlib.h>

int busca_linear_ordenada(int vetor[], int chave, int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(vetor[i] == chave){
            return i;  //elemento encontrado
        } else {
            if(chave < vetor[i]){
                return -1; //para a busca
            }
        }
    }
    return -1; //elemento não encontrado
}

int main()
{
    //vetor
    int vetor[6] = {1, 5, 8, 12, 23, 42};

    //elemento chave que queremos encontrar no vetor
    int chave = 42;

    //Aplicando a busca linear ordenada - vetor, chave, tam
    int retorno = busca_linear_ordenada(vetor, chave, 6);

    if(retorno > -1){
        printf("O elemento %d esta na posicao %d\n", chave, retorno);
    } else {
        printf("Elemento nao encontrado\n\n");
    }

    return 0;
}
