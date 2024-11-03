#define TAM 200000

typedef struct pilha Pilha;

Pilha *cria_pilha();
void inicializa_pilha(Pilha *stack);
void libera_pilha(Pilha *stack);

int tamanho_pilha(Pilha *stack);
int pilha_cheia(Pilha *stack);
int pilha_vazia(Pilha *stack);

void insere_pilha(Pilha *stack, int elem);
int remove_pilha(Pilha *stack);
int consulta_topo(Pilha *stack);

void imprime_pilha(Pilha *stack);
