
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

//Funcoes do arquivo mensagens.c
void menu();
void msg_lista_vazia();
