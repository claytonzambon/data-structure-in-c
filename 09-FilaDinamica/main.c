#include <stdio.h>
#include <stdlib.h>
#include "FilaDin.h"

int main()
{
    Fila *fi;
    fi = cria_Fila();
    struct aluno dados_aluno;
    int opcao;
    int i = 1;
    while(i == 1){
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                informar_dados(&dados_aluno);
                if(insere_Fila(fi, dados_aluno)){
                    msg_elemento_inserido_com_sucesso();
                } else {
                    msg_insercao_com_falha();
                }
                break;
            case 5:
                if(Fila_vazia(fi)){
                    msg_fila_vazia();
                } else {
                    printf("\n\nO tamanho da Fila eh: %d\n\n", tamanho_Fila(fi));
                    system("pause");
                }
                break;
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
