//Arquivo ListaDinEncadDesc.h
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3,n4;
};
typedef struct descritor Lista;

//Arquivo ListaDinEncadDesc.c
Lista* cria_lista();

//Arquivo mensagens.c
void menu();
