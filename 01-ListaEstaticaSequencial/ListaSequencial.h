//Arquivo ListaSequencial.h
#define MAX 10  //Tamanho que sera nosso vetor

/*Definindo um Tipo Aluno
Elementos da Lista: desta forma sera possivel guardar
varios tipos de dados */
struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3, n4;
};

//Definindo uma struct Lista
typedef struct lista Lista;

Lista* cria_lista(); //Assinando a funcao de criar Lista
void libera_lista(); //Assinando a funcao libera_lista

//Funcoes para obter informações da Lists
int tamanho_lista(Lista* li); //Assina funcao tamanho_lista
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int verificar_matricula(Lista* li, struct aluno al);

//Funcoes para Inserir elementos
int insere_lista_final(Lista* li, struct  aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);

//Funcoes para Remover Elementos
int remover_lista_final(Lista* li);
int remover_lista_inicio(Lista* li);
int remover_lista(Lista* li, int mat);

//Funcoes para Consultar Elementos
int consultar_lista_mat(Lista* li, int mat, struct aluno *al);
int consultar_lista_pos(Lista* li, int pos, struct aluno *al);

void imprime_lista(Lista* li);

//Funcoes para exibicao de mensagens na tela
void menu(); //mensagens.c
