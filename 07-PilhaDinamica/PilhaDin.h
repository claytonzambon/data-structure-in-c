//Arquivo PilhaDin.h
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3,n4;
};

typedef struct elemento* Pilha;

//Funções do Arquivo PilhaDin.c
Pilha* cria_Pilha();
void libera_Pilha(Pilha* pi);

//Funcoes do Arquivo mensagens.c
void menu();
