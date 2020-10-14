//Arquivo PilhaSequencial.h
//Contem os prototipos das Funcoes

#define MAX 5
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3,n4;
};
typedef struct pilha Pilha;

//Funcoes do Arquivo PilhaSequencial.c
Pilha* cria_Pilha();

//Funcoes do Arquivo mensagens.c
void menu();
