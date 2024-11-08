#define TAM 20

typedef struct pilha Pilha;

Pilha *estcria_pilha();
void estinicializa_pilha(Pilha *stack);
void estlibera_pilha(Pilha *stack);

int esttamanho_pilha(Pilha *stack);
int estpilha_cheia(Pilha *stack);
int estpilha_vazia(Pilha *stack);

void estinsere_pilha(Pilha *stack, int elem);
int estremove_pilha(Pilha *stack);
int estconsulta_topo(Pilha *stack);

void estimprime_pilha(Pilha *stack);