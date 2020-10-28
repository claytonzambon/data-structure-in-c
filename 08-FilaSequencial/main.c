#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h"

int main()
{
    Fila *fi;
    fi = cria_Fila();
    struct aluno dados_aluno;
    int opcao;

    int i = 1;
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 5:
                if(!(Fila_vazia(fi))){
                    msg_fila_vazia();
                    break;
                } else {
                    printf("\n\nO tamanho da Fila eh: %d\n\n", tamanho_Fila(fi));
                    system("pause");
                    break;
                }
            case 6:
                printf("\n\n\t\tAte Logo !!!\n\n\n\n\n");
                i = 0;
                break;
            default:
                printf("\n\nOpcao Invalida\n\n");
                system("pause");
                break;
        }
    }

    libera_Fila(fi);
    return 0;
}
