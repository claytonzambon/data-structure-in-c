#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadCirc.h" //inclui os Protótipos

int main()
{
    Lista* li = cria_lista(); //Declarando um ponteiro do tipo Lista
    struct aluno dados_aluno;
    int opcao;
    int i = 1;
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Digite a Matricula: ");
                scanf("%d", &dados_aluno.matricula);
                printf("Digite o nome: ");
                fseek(stdin,0,SEEK_END);
                scanf("%[^\n]", dados_aluno.nome);
                printf("Digite a Nota 01: ");
                scanf("%f", &dados_aluno.n1);
                printf("Digite a Nota 02: ");
                scanf("%f", &dados_aluno.n2);
                printf("Digite a Nota 03: ");
                scanf("%f", &dados_aluno.n3);
                printf("Digite a Nota 04: ");
                scanf("%f", &dados_aluno.n4);
                dados_aluno.media = calcular_media(dados_aluno);
                if(verificar_matricula(li, dados_aluno)){
                    msg_matricula_existente();
                } else if(verificar_notas(dados_aluno)) {
                    msg_digite_notas_validas();
                } else if(insere_lista_final(li, dados_aluno)) {
                    msg_elemento_inserido_com_sucesso();
                }
                break;
            case 2:
                printf("Digite a Matricula: ");
                scanf("%d", &dados_aluno.matricula);
                printf("Digite o nome: ");
                fseek(stdin,0,SEEK_END);
                scanf("%[^\n]", dados_aluno.nome);
                printf("Digite a Nota 01: ");
                scanf("%f", &dados_aluno.n1);
                printf("Digite a Nota 02: ");
                scanf("%f", &dados_aluno.n2);
                printf("Digite a Nota 03: ");
                scanf("%f", &dados_aluno.n3);
                printf("Digite a Nota 04: ");
                scanf("%f", &dados_aluno.n4);
                dados_aluno.media = calcular_media(dados_aluno);
                if(verificar_matricula(li, dados_aluno)){
                    msg_matricula_existente();
                } else if(verificar_notas(dados_aluno)) {
                    msg_digite_notas_validas();
                } else if(insere_lista_inicio(li, dados_aluno)) {
                    msg_elemento_inserido_com_sucesso();
                }
                break;
            case 3:
                printf("\nOpcao 03\n");
                system("pause");
                break;
            case 4:
                printf("\nOpcao 04\n");
                system("pause");
                break;
            case 5:
                printf("\nOpcao 05\n");
                system("pause");
                break;
            case 6:
                printf("\nOpcao 06\n");
                system("pause");
                break;
            case 7:
                printf("\nOpcao 07\n");
                system("pause");
                break;
            case 8:
                printf("\nOpcao 08\n");
                system("pause");
                break;
            case 9:
                printf("\nOpcao 09\n");
                system("pause");
                break;
            case 10:
				if(lista_vazia(li))
                {
                    msg_lista_vazia(); //mensagens.c
                    break;
                } else {
                    printf("O tamanho da Lista eh: %d\n", tamanho_lista(li));
                    break;
                }
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
