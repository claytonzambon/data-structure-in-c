//Arquivo FilaDin.h
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3,n4;
};

typedef struct fila Fila;

//Funcoes do arquivo FilaDin.c
Fila* cria_Fila();
void libera_Fila(Fila* fi);
int tamanho_Fila(Fila* fi);
int Fila_vazia(Fila* fi);
int insere_Fila(Fila* fi, struct aluno al);

//Funcoes do arquivo mensagens.c
void menu();
void msg_fila_vazia();
void informar_dados(struct aluno *al);
void msg_elemento_inserido_com_sucesso();
void msg_insercao_com_falha();
