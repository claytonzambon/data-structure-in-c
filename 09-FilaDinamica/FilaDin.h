//Arquivo FilaDin.h
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct fila Fila;

//Funcoes do arquivo FilaDin.c
Fila* cria_Fila();
void libera_Fila(Fila* fi);
int tamanho_Fila(Fila* fi);
int Fila_vazia(Fila* fi);

//Funcoes do arquivo mensagens.c
void menu();
void msg_fila_vazia();
