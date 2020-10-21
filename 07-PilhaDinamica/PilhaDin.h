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
int remove_Pilha(Pilha* pi);

//Funcoes do Arquivo mensagens.c
void menu();
void msg_pilha_vazia();
void msg_insercao_com_falha();
void msg_elemento_inserido_com_sucesso();
void msg_removido_elemento();
void informar_dados(struct aluno *al);

