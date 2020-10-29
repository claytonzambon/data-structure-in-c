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
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                if(Fila_cheia(fi)){
                    msg_fila_cheia();
                    break;
                } else {
                    informar_dados(&dados_aluno);
                    insere_Fila(fi, dados_aluno);
                    msg_elemento_inserido_com_sucesso();
                    break;
                }
            case 2:
                if(Fila_vazia(fi)){
                    msg_fila_vazia();
                    break;
                } else {
                    remove_Fila(fi);
                    msg_removido_elemento();
                    break;
                }
            case 3:
                if(Fila_vazia(fi)){
                    msg_fila_vazia();
                    break;
                } else {
                    consulta_Fila(fi, &dados_aluno);
                    break;
                }
            case 4:
                if(Fila_vazia(fi)){
                    msg_fila_vazia();
                    break;
                } else {
                    imprime_Fila(fi);
                    system("pause");
                    break;
                }
            case 5:
                if(Fila_vazia(fi)){
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
