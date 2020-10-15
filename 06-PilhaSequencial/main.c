//Arquivo main.c
//Contem todas as chamadas das funcoes
#include <stdio.h>
#include <stdlib.h>
#include "PilhaSequencial.h" //inclui os Protótipos

int main()
{
    Pilha* pi; //Declarando um ponteiro do tipo Pilha
    pi = cria_Pilha();
    struct aluno dados_aluno;
    int opcao;
    int i = 1;
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                if(Pilha_cheia(pi)){
                    msg_pilha_cheia();
                    break;
                } else {
                    informar_dados(&dados_aluno);
                    insere_Pilha(pi, dados_aluno);
                    msg_elemento_inserido_com_sucesso();
                    break;
                }
            case 2:
                if(Pilha_vazia(pi)){
                    msg_pilha_vazia();
                    break;
                } else {
                    remove_Pilha(pi);
                    msg_removido_elemento();
                    break;
                }
            case 3:
                if(Pilha_vazia(pi)){
                    msg_pilha_vazia();
                    break;
                } else {
                    consulta_topo_Pilha(pi, &dados_aluno);
                    break;
                }
            case 4:
                if(Pilha_vazia(pi)){
                    msg_pilha_vazia();
                    break;
                } else {
                    imprime_Pilha(pi);
                    system("pause");
                    break;
                }

            case 5:
                if(tamanho_Pilha(pi) == -1){
                    msg_pilha_vazia();
                    break;
                } else {
                    printf("\n\nO tamanho da Pilha eh: %d\n\n", tamanho_Pilha(pi));
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
    libera_Pilha(pi);
    system("pause");
    printf("\n\n\n\n");
}
