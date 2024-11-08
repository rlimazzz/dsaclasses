//Arquivo PilhaDin.h

typedef struct elemento* Pilha;

Pilha* cria_Pilha();
void libera_Pilha(Pilha* pi);
char consulta_topo_Pilha(Pilha* pi, char elem);
int insere_Pilha(Pilha* pi, char elem);
int remove_Pilha(Pilha* pi);
int tamanho_Pilha(Pilha* pi);
int Pilha_vazia(Pilha* pi);
int Pilha_cheia(Pilha* pi);
