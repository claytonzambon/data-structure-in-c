#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadCirc.h" //inclui os Protótipos

int main()
{
    Lista* li = cria_lista(); //Declarando um ponteiro do tipo Lista
    struct aluno dados_aluno;
    int opcao;
    int matricula_aluno, posicao;
    int i = 1;
    while(i == 1){
        system("cls");
        menu();
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                informar_dados(&dados_aluno);  //mensagens.c
                dados_aluno.media = calcular_media(dados_aluno);
                if(verificar_matricula(li, dados_aluno)){
                    msg_matricula_existente();
                } else if(verificar_notas(dados_aluno)) {
                    msg_digite_notas_validas();
                } else if(insere_lista_final(li, dados_aluno)) {
                    msg_elemento_inserido_com_sucesso();
                } else {
                    msg_falha_insercao();
                }
                break;
            case 2:
                informar_dados(&dados_aluno);  //mensagens.c
                dados_aluno.media = calcular_media(dados_aluno);
                if(verificar_matricula(li, dados_aluno)){
                    msg_matricula_existente();
                } else if(verificar_notas(dados_aluno)) {
                    msg_digite_notas_validas();
                } else if(insere_lista_inicio(li, dados_aluno)) {
                    msg_elemento_inserido_com_sucesso();
                } else {
                    msg_falha_insercao();
                }
                break;
            case 3:
                informar_dados(&dados_aluno);  // mensagens.c
                dados_aluno.media = calcular_media(dados_aluno);
                if(verificar_matricula(li, dados_aluno)){
                    msg_matricula_existente();
                } else if(verificar_notas(dados_aluno)) {
                    msg_digite_notas_validas();
                } else if(insere_lista_ordenada(li, dados_aluno)) {
                    msg_elemento_inserido_com_sucesso();
                } else {
                    msg_falha_insercao();
                }
                break;
            case 4:
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
            case 5:
				if(lista_vazia(li))
                {
                    msg_lista_vazia();
                    break;
                } else if (remove_lista_inicio(li)) {
                    msg_removida_do_inicio();
                    break;
                } else {
                    msg_falha_na_remocao();
                    break;
                }
            case 6:
				if(lista_vazia(li))
                {
                    msg_lista_vazia();
                    break;
                }
                printf("\nDigite a matricula a ser removida: ");
                scanf("%d", &matricula_aluno);
                if (remove_lista(li, matricula_aluno)) {
                    msg_removida_a_matricula(matricula_aluno);
                    break;
                } else {
                    msg_matricula_nao_encontrado(matricula_aluno);
                    break;
                }
            case 7:
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
            case 8:
				if(lista_vazia(li))
                {
                    msg_lista_vazia();
                    break;
                }
                printf("\nDigite a matricula a ser buscada: ");
                scanf("%d", &matricula_aluno);
                if (consulta_lista_mat(li, matricula_aluno, &dados_aluno)){
                    exibe_consulta(&dados_aluno); //mensagens.c
                    system("pause");
                    break;
                } else {
                    msg_matricula_nao_encontrado(matricula_aluno);
                    system("pause");
                    break;
                }
            case 9:
				if(lista_vazia(li))
                {
                    msg_lista_vazia();
                    break;
                } else {
                    imprime_lista(li, &dados_aluno);
                    system("pause");
                    break;
                }
            case 10:
				if(lista_vazia(li))
                {
                    msg_lista_vazia(); //mensagens.c
                    break;
                } else {
                    printf("O tamanho da Lista eh: %d\n", tamanho_lista(li));
                    system("pause");
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
