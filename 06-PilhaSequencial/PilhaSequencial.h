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
void libera_Pilha(Pilha* pi);
int tamanho_Pilha(Pilha* pi);
int Pilha_cheia(Pilha* pi);
int Pilha_vazia(Pilha* pi);
int insere_Pilha(Pilha* pi, struct aluno al);
int remove_Pilha(Pilha* pi);
int consulta_topo_Pilha(Pilha* pi, struct aluno *al);
void imprime_Pilha(Pilha* pi);

//Funcoes do Arquivo mensagens.c
void menu();
void msg_pilha_vazia();
void msg_pilha_cheia();
void informar_dados(struct aluno *al);
void msg_elemento_inserido_com_sucesso();
void msg_removido_elemento();
void exibe_consulta(struct aluno *al);
