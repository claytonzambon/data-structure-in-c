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
int tamanho_Pilha(Pilha* pi);
int Pilha_vazia(Pilha* pi);
int insere_Pilha(Pilha* pi, struct aluno al);

//Funcoes do Arquivo mensagens.c
void menu();
void msg_pilha_vazia();
