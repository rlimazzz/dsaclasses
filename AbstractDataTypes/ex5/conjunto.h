typedef struct conjunto Conjunto;

int criaConjunto(Conjunto** conjuntozada);

int conjuntoVazio(Conjunto** conjuntozada);

int insereElementoConjunto(int x, Conjunto** conjuntozada);

int excluirElementoConjunto(int x, Conjunto** conjuntozada);

int tamanhoConjunto(Conjunto** conjuntozada);

int maior(int x, Conjunto** conjuntozada);

int menor(int x, Conjunto** conjuntozada);

int conjuntosIdenticos(Conjunto** conjunto1, Conjunto** conjunto2);

int subconjunto(Conjunto** conjunto1, Conjunto** conjunto2);