//Arquivo ListaDinEncadCirc.h

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3,n4,media;
};

typedef struct elemento* Lista;

//Funcoes do Arquivo ListaDinEncadCirc.c
Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
float verificar_notas(struct aluno al);
int verificar_matricula(Lista* li, struct aluno al);
float calcular_media(struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);
void imprime_lista(Lista* li, struct aluno *al);
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int remove_lista(Lista* li, int mat);
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);


//Funcoes do Arquivo mensagens.c
void menu();
void msg_lista_vazia();
void msg_elemento_inserido_com_sucesso();
void msg_falha_insercao();
void msg_removida_do_inicio();
void msg_removida_do_final();
void msg_falha_na_remocao();
void msg_removida_a_matricula(int mat);
void msg_posicao_nao_encontrado(int pos);
void msg_matricula_nao_encontrado(int mat);
void exibe_consulta(struct aluno *al);
void msg_matricula_existente();
void msg_digite_notas_validas();

void informar_dados(struct aluno *al);
