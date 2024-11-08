#define TAM 20

typedef struct fila Fila;

Fila *cria_fila();
void inicializa_fila(Fila *filam);
void libera_fila(Fila *filam);

int tamanho_fila(Fila *filam);
int fila_cheia(Fila *filam);
int fila_vazia(Fila *filam);

void insere_fila(Fila *filam, int elem);
int remove_fila(Fila *filam);
int consulta_frente(Fila *filam);

void imprime_fila(Fila *filam);
