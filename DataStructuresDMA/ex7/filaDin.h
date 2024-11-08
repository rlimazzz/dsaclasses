//Arquivo FilaDin.h
struct cliente{
    int codigo;
    char nome[30];
};

typedef struct fila Fila;

Fila* cria_Fila();
void libera_Fila(Fila* fi);
int consulta_Fila(Fila* fi, struct cliente *cl);
int insere_Fila(Fila* fi, struct cliente cl);
int remove_Fila(Fila* fi);
int tamanho_Fila(Fila* fi);
int Fila_vazia(Fila* fi);
int Fila_cheia(Fila* fi);
void imprime_Fila(Fila* fi);
void listagem(Fila* fi);
int qtd_clientes(Fila* fi);
double tempo_medio(Fila* fi);
int chamar_codigo(Fila* fi);


