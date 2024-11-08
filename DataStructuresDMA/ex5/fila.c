#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila {
    int index;
    int elem[TAM];
};

Fila *cria_fila() {
    Fila *filam = malloc(sizeof(Fila));

    if(filam == NULL) {
        printf("Não foi possível alocar");
        exit(1);
    }

    inicializa_fila(filam);

    return filam;
}

void inicializa_fila(Fila *filam) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    filam->index = 0;
}

void libera_fila(Fila *filam) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    free(filam);
}

int tamanho_fila(Fila *filam) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    return filam->index;
}

int fila_cheia(Fila *filam) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    if(filam->index == TAM) {
        printf("Fila cheia!\n");
        return 1;
    }

    return 0;
}

int fila_vazia(Fila *filam){
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    if(filam->index == 0) {
        printf("Fila vazia!\n");
        return 1;
    }

    return 0;
}

void insere_fila(Fila *filam, int elem) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    if(fila_cheia(filam)) {
        printf("Fila cheia");
        exit(1);
    }

    filam->elem[filam->index] = elem;
    filam->index++;
}

int remove_fila(Fila *filam) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    if(fila_vazia(filam)) {
        printf("Fila vazia");
        exit(1);
    }

    int elemento = filam->elem[0];
    for(int i = 0;(i < filam->index - 1);i++) {
        filam->elem[i] = filam->elem[i + 1];
    }
    filam->index--;
    return (elemento);
}

int consulta_frente(Fila *filam) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    return filam->elem[0];
}

int consulta_elem(Fila *filam,int idx) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    return filam->elem[idx];
}

void imprime_fila(Fila *filam) {
    if(filam == NULL) {
        printf("Fila não alocada");
        exit(1);
    }

    for(int i = 0;(i < filam->index);i++){
        printf("\tidx: %d -- elem: %d\n", i, filam->elem[i]);
    }
}
