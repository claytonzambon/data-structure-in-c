
struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3, n4;
};

typedef struct elemento* Lista;

//Funcoes do arquivo ListaDinEncadDupla.c
Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_vazia(Lista* li);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);

//Funcoes do arquivo mensagens.c
void menu();
void msg_lista_vazia();
void msg_elemento_inserido_com_sucesso();
void msg_falha_insercao();
