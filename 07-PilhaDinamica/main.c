//Arquivo main.c
//Contem todas as chamadas das funcoes
#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include <locale.h>             //Biblioteca que permite utilizar acentuações
#include "PilhaDin.h"    //inclui os Protótipos

int main()
{
    //setlocale(LC_ALL,""); //Função para utilizar acentuação
    //SetConsoleOutputCP(1252);
	//SetConsoleCP ( 1252 );

    Pilha* pi; //Declarando um ponteiro do tipo Pilha
    pi = cria_Pilha();
    struct aluno dados_aluno; //Struct definida no arquivo PilhaDin.h
    int opcao;
    int i = 1;
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                informar_dados(&dados_aluno);
                if(insere_Pilha(pi, dados_aluno)){
                    msg_elemento_inserido_com_sucesso();
                } else {
                    msg_insercao_com_falha();
                }
                break;
            case 2:
                if(Pilha_vazia(pi)){
                    msg_pilha_vazia();
                } else {
                    remove_Pilha(pi);
                    msg_removido_elemento();
                }
                break;
            case 3:
                if(Pilha_vazia(pi)){
                    msg_pilha_vazia();
                } else {
                    consulta_topo_Pilha(pi, &dados_aluno);
                }
                break;
            case 4:
                if(Pilha_vazia(pi)){
                    msg_pilha_vazia();
                } else {
                    imprime_Pilha(pi);
                    system("pause");
                }
                break;
            case 5:
                if(tamanho_Pilha(pi) == 0){
                    msg_pilha_vazia();
                    break;
                } else {
                    printf("\n\nO tamanho da Pilha é: %d\n\n", tamanho_Pilha(pi));
                    system("pause");
                    break;
                }
            case 6:
                printf("\n\n\t\tAté Logo !!!\n\n\n\n\n");
                i = 0;
                break;
            default:
                printf("\n\nOpcao Inválida\n\n");
                system("pause");
                break;
        }
    }
    libera_Pilha(pi);
    system("pause");
    printf("\n\n\n\n");
}
