//Arquivo ListaDinEncadDesc.h
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3,n4, media;
};
typedef struct descritor Lista;

//Arquivo ListaDinEncadDesc.c
Lista* cria_lista();
void libera_lista(Lista* li);
int lista_vazia(Lista* li);
int tamanho_lista(Lista* li);
int verificar_matricula(Lista* li, struct aluno al);
float verificar_notas(struct aluno al);
float calcular_media(struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_final(Lista* li, struct aluno al);
void imprime_lista(Lista* li, struct aluno *al);
int remove_lista_inicio(Lista* li);

//Arquivo mensagens.c
void menu();
void msg_lista_vazia();
void msg_elemento_inserido_com_sucesso();
void msg_falha_insercao();
void msg_removida_do_inicio();
void msg_removida_do_final();
void msg_falha_na_remocao();
void msg_matricula_nao_encontrado(int mat);
void msg_posicao_nao_encontrado(int pos);
void msg_matricula_existente();
void msg_digite_notas_validas();
void exibe_consulta(struct aluno *al);
void informar_dados(struct aluno *al);
