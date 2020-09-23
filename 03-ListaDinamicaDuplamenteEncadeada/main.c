#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadDupla.h" //inclui os Protótipos

int main()
{
    Lista* li; //Declarando um ponteiro do tipo Lista
    struct aluno dados_aluno;
    int opcao;
    int i = 1;
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("\nOpcao 01\n");
                system("pause");
                break;
            case 2:
                printf("\nOpcao 02\n");
                system("pause");
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
                printf("\nOpcao 10\n");
                system("pause");
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
    //libera_lista(li);
    system("pause");
    printf("\n\n\n\n");
}
