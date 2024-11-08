#define TAM 20

typedef struct lista Lista;

Lista *cria_lista();
void inicializa_lista(Lista *lista);
void libera_lista(Lista *lista);

int tamanho_lista(Lista *lista);
int lista_cheia(Lista *lista);
int lista_vazia(Lista *lista);

void insere_inicio_lista(Lista *lista, int elemento);
void insere_meio_lista(Lista *lista, int posicao, int elemento);
void insere_fim_lista(Lista *lista, int elemento);
int remove_inicio_lista(Lista *lista);
int remove_meio_lista(Lista *lista, int posicao);
int remove_fim_lista(Lista *lista);


int qtd_pares(Lista *lista);
float media_lista(Lista *lista);
int maior_valor(Lista *lista);
int menor_valor(Lista *lista);
int pos_maior_valor(Lista *lista);
int pos_menor_valor(Lista *lista);
int soma_lista(Lista *lista);
int numero_nos_primos(Lista *lista);

int consulta_valor(Lista *lista, int elemento);
int consulta_indice(Lista *lista, int elemento);

void imprime_lista(Lista *lista);
