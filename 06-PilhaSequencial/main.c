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
                    break;
                }
            case 2:
                /*
				if(lista_vazia(li))
                {
                    msg_lista_vazia();
                    break;
                } else if (remove_lista_final(li)) {
                    msg_removida_do_final();
                    break;
                } else {
                    msg_falha_na_remocao();
                    break;
                }
                */
            case 3:
                /*
				if(lista_vazia(li))
                {
                    msg_lista_vazia();
                    break;
                }
                printf("\nDigite a posicao a ser buscada: ");
                scanf("%d", &posicao);
                if (consulta_lista_pos(li, posicao, &dados_aluno)){
                    exibe_consulta(&dados_aluno); //mensagens.c
                    system("pause");
                    break;
                } else {
                    msg_posicao_nao_encontrado(posicao);
                    system("pause");
                    break;
                }
                */
            case 4:
                /*
				if(lista_vazia(li))
                {
                    msg_lista_vazia();
                    break;
                } else {
                    imprime_lista(li, &dados_aluno);
                    system("pause");
                    break;
                }
                */
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
