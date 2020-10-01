//Arquivo ListaDinEncadCirc.h

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct elemento* Lista;

//Funcoes do Arquivo ListaDinEncadCirc.c
Lista* cria_lista();

//Funcoes do Arquivo mensagens.c
void menu();
