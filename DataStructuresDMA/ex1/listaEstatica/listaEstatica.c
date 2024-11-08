#include <stdio.h>
#include <stdlib.h>
#include "listaEstatica.h"

struct lista {
    int index;
    int elem[TAM];
};

Lista *cria_lista() {
    Lista *lista = malloc(sizeof(Lista));

    if(lista == NULL) {
        printf("Não foi possível alocar");
        exit(1);
    }

    inicializa_lista(lista);

    return lista;
}

void inicializa_lista(Lista *lista) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    lista->index = 0;
}

void libera_lista(Lista *lista) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    free(lista);
}

int tamanho_lista(Lista *lista) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    return lista->index;
}

int lista_cheia(Lista *lista) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista->index == TAM) {
        printf("Lista cheia");
        return 1;
    }

    return 0;
}

int lista_vazia(Lista *lista) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista->index == 0) {
        printf("Lista vazia");
        return 1;
    }

    return 0;
}

void insere_inicio_lista(Lista *lista, int elemento) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista_cheia(lista)) {
        printf("Lista cheia");
        exit(1);
    }

    for(int i = lista->index;(i >= 0);i--) {
        lista->elem[i + 1] = lista->elem[i];
    }

    lista->elem[0] = elemento;
    lista->index++;
}


void insere_fim_lista(Lista *lista, int elemento) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista_cheia(lista)) {
        printf("Lista cheia");
        exit(1);
    }

    lista->elem[lista->index] = elemento;
    lista->index++;
}

int remove_inicio_lista(Lista *lista) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista_vazia(lista)) {
        printf("Lista vazia");
        exit(1);
    }

    int removido = lista->elem[0];

    for(int i = 0;(i < lista->index);i++) {
        lista->elem[i] = lista->elem[i + 1];
    }

    lista->index--;
    return removido;
}

int remove_primeirosn(Lista *lista, int n) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista_vazia(lista)) {
        printf("Lista vazia");
        exit(1);
    }

    for(int i = 0;i < (lista->index);i++) {
        lista->elem[i] = lista->elem[i + n];
    }

    lista->index -= n;

    return 1;
}

int remove_ultimosn(Lista *lista, int n) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista_vazia(lista)) {
        printf("Lista vazia");
        exit(1);
    }

    lista->index -= n;
    return 1;
}

int remove_fim_lista(Lista *lista) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista_vazia(lista)) {
        printf("Lista vazia");
        exit(1);
    }

    int resposta = lista->elem[lista->index - 1];
    lista->elem[lista->index - 1] = 0;
    lista->index--;
    return resposta;
}

int consulta_valor(Lista *lista, int elemento) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    for(int i = 0;(i < lista->index);i++) {
        if(lista->elem[i] == elemento) {
            return 1;
            break;
        }
    }

    return 0;
}

int consulta_indice(Lista *lista, int elemento) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    return lista->elem[elemento];
}

void imprime_lista(Lista *lista) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    for(int i = 0;(i < lista->index);i++) {
        printf("\tidx: %d -- elem: %d\n", i, lista->elem[i]);
    }
}

