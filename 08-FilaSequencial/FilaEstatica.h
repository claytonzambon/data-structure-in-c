//Arquivo FilaEstatica.h
#define MAX 5
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3, n4;
};
typedef struct fila Fila;

//Funcoes do arquivo FilaEstatica.c
Fila* cria_Fila();
void libera_Fila(Fila* fi);
int tamanho_Fila(Fila* fi);
int Fila_cheia(Fila* fi);
int Fila_vazia(Fila* fi);

//Funcoes do arquivo mensagens.c
void menu();
void msg_fila_vazia();
