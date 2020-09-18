#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

int main()
{
    Lista* li = cria_lista(); //Declarando um ponteiro do tipo Lista
    int opcao;
    int i = 1;
    //Declaração de uma Struct para armazenar e inserir elementos do tipo aluno
    struct aluno dados_aluno;
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                if(lista_cheia(li))
                {
                    printf("\n\nLista Cheia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nDigite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o Nome: ");
                    scanf("%s", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    printf("Digite a Nota 04: ");
                    scanf("%f", &dados_aluno.n4);
                    if(insere_lista_final(li, dados_aluno))
                    {
                        printf("\n\n>>>Dados inseridos com sucesso<<<\n\n\n");
                        system("pause");
                    } else {
                        printf("\n\n>>>ERRO na insercao dos dados<<<\n\n\n");
                        system("pause");
                    }
                    break;
                }
            case 2:
                if(lista_cheia(li))
                {
                    printf("\n\nLista Cheia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nDigite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o Nome: ");
                    scanf("%s", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    printf("Digite a Nota 04: ");
                    scanf("%f", &dados_aluno.n4);
                    if(insere_lista_inicio(li, dados_aluno))
                    {
                        printf("\n\n>>>Dados inseridos com sucesso<<<\n\n\n");
                        system("pause");
                    } else {
                        printf("\n\n>>>ERRO na insercao dos dados<<<\n\n\n");
                        system("pause");
                    }
                    break;
                }
            case 3:
                if(lista_cheia(li))
                {
                    printf("\n\nLista Cheia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nDigite a Matricula: ");
                    scanf("%d", &dados_aluno.matricula);
                    printf("Digite o Nome: ");
                    scanf("%s", dados_aluno.nome);
                    printf("Digite a Nota 01: ");
                    scanf("%f", &dados_aluno.n1);
                    printf("Digite a Nota 02: ");
                    scanf("%f", &dados_aluno.n2);
                    printf("Digite a Nota 03: ");
                    scanf("%f", &dados_aluno.n3);
                    printf("Digite a Nota 04: ");
                    scanf("%f", &dados_aluno.n4);
                    if(insere_lista_ordenada(li, dados_aluno))
                    {
                        printf("\n\n>>>Dados inseridos com sucesso<<<\n\n\n");
                        system("pause");
                    } else {
                        printf("\n\n>>>ERRO na insercao dos dados<<<\n\n\n");
                        system("pause");
                    }
                    break;
                }
            case 4:
                printf("\n\nOpcao 04\n\n");
                system("pause");
                break;
            case 5:
                printf("\n\nOpcao 05\n\n");
                system("pause");
                break;
            case 6:
                printf("\n\nOpcao 06\n\n");
                system("pause");
                break;
            case 7:
                printf("\n\nOpcao 07\n\n");
                system("pause");
                break;
            case 8:
                printf("\n\nOpcao 08\n\n");
                system("pause");
                break;
            case 9:
                if(lista_vazia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    imprime_lista(li);
                    system("pause");
                    break;
                }
            case 10:
                if(lista_vazia(li)){
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nO tamanho da Lista eh: %d\n\n", tamanho_lista(li));
                    system("pause");
                    break;
                }
                break;
            case 11:
                printf("\n\n\t\tAte Logo !!!\n\n\n\n\n");
                i = 0;
                break;
            default:
                printf("\n\nOpcao Invalida\n\n");
                system("pause");
                break;
        }
    }
    libera_lista(li);
    system("pause");
    printf("\n\n\n\n");
}
