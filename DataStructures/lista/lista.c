#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

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

void insere_inicio_lista(Lista *lista, int elem) {
    if(lista == NULL) {
        printf("Lista não alocada");
        exit(1);
    }

    if(lista_cheia(lista)) {
        printf("Lista cheia");
        exit(1);
    }

    for(int i = 0;(i < lista->index);i++) {
        lista->elem[i]
    }

}
