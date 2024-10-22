#define TAM 20

typedef struct lista Lista;

Lista *cria_lista();
void inicializa_lista(Lista *lista);
void libera_lista(Lista *lista);

int tamanho_lista(Lista *lista);
int lista_cheia(Lista *lista);
int lista_vazia(Lista *lista);

void insere_inicio_lista(Lista *lista, int elem);
void insere_meio_lista(Lista *lista, int elem);
void insere_fim_lista(Lista *lista, int elem);
int remove_inicio_lista(Lista *lista);
int remove_meio_lista(Lista *lista);
int remove_fim_lista(Lista *lista);


int consulta_valor(Lista *lista, int elem);
int consulta_indice(Lista *lista, int elem);

void imprime_lista(Lista *lista);
