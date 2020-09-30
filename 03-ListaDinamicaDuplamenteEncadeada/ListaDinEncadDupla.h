
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
void imprime_lista(Lista* li);
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int remove_lista(Lista* li, int mat);
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);

//Funcoes do arquivo mensagens.c
void menu();
void msg_lista_vazia();
void msg_elemento_inserido_com_sucesso();
void msg_falha_insercao();
void msg_removida_do_inicio();
void msg_falha_na_remocao();
void msg_removida_do_final();
int msg_matricula_nao_encontrado(int mat);
int msg_removida_a_matricula(int mat);
void posicao_nao_encontrado(int pos);
void exibe_consulta(struct aluno *al);
