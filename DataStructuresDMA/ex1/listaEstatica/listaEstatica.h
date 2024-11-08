#define TAM 20

typedef struct lista Lista;

Lista *cria_lista();
void inicializa_lista(Lista *lista);
void libera_lista(Lista *lista);

int tamanho_lista(Lista *lista);
int lista_cheia(Lista *lista);
int lista_vazia(Lista *lista);

void insere_inicio_lista(Lista *lista, int elemento);
void insere_meio_lista(Lista *lista, int elemento);
void insere_fim_lista(Lista *lista, int elemento);
int remove_primeirosn(Lista *lista, int n);
int remove_ultimosn(Lista *lista, int n);
int remove_inicio_lista(Lista *lista);
int remove_fim_lista(Lista *lista);


int consulta_valor(Lista *lista, int elemento);
int consulta_indice(Lista *lista, int elemento);

void imprime_lista(Lista *lista);
