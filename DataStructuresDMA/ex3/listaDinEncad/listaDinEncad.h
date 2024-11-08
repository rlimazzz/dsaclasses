struct produto {
    int codigo;
    char nomeProd[30];
    float preco;
    int qtd;
};

typedef struct elemento* Lista;

Lista* cria_lista();
void libera_lista(Lista *li);
int insere_lista_inicio(Lista *li, struct produto prod);
int remove_lista_inicio(Lista *li);
int remove_codigo(Lista *li, int codigo);
int remove_primeirosn(Lista *li, int n);
int remove_ultimosn(Lista *li, int n);
struct produto menor_preco(Lista *li);
void imprime_lista(Lista *li);
