typedef struct elemento* Lista;
typedef struct elemento Elemento;

Lista* cria_lista();
void libera_lista(Lista *li);
int insere_lista_inicio(Lista *li, int elem);
int remove_lista_inicio(Lista *li);
int remove_primeirosn(Lista *li, int n);
int remove_ultimosn(Lista *li, int n);
void imprime_lista(Lista *li);
void consulta_antecessor_sucessor(Lista *li, int elem);