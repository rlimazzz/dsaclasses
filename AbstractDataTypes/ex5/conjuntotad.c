#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "conjunto.h"

#define tam 100000

struct conjunto {
    int elementos[tam];
};

int criaConjunto(Conjunto **conjunto) {
    *conjunto = (Conjunto*) malloc(sizeof(Conjunto));

    if(*conjunto == NULL) {
        return 0;
    }

    for(int i = 0;i < tam;i++) {
        (*conjunto)->elementos[i] = 0;
    }

    return 1;
}

int conjuntoVazio(Conjunto **conjunto) {
    for(int i = 0;i < tam;i++) {
        if((*conjunto)->elementos[i] == 0) {
            return 0;
        }
    }

    return 1;
}

int insereElementoConjunto(int x, Conjunto **conjunto) {
    if((*conjunto)->elementos[x] == 1) {
        return 0;
    }else {
        (*conjunto)->elementos[x] = 1;
        return 1;
    }
}

int excluirElementoConjunto(int x, Conjunto **conjunto) {
    if((*conjunto)->elementos[x] == 1) {
        (*conjunto)->elementos[x] = 0;
        return 1;
    }else {
        return 0;
    }
}

int tamanhoConjunto(Conjunto **conjunto) {
    int quantidade = 0;

    for(int i = 0;i < tam;i++) {
        if((*conjunto)->elementos[i] > 0) {
            quantidade += (*conjunto)->elementos[i];
        }
    }

    return quantidade;
}

int maior(int x, Conjunto **conjunto) {
    int quantidade = 0;

    for(int i = x + 1;i < tam;i++) {
        if((*conjunto)->elementos[i] > 0) {
            quantidade += (*conjunto)->elementos[i];
        }
    }

    if(tamanhoConjunto(conjunto) == quantidade) {
        return 0;
    }else {
        return quantidade;
    }
}

int menor(int x, Conjunto **conjunto) {
    int quantidade = 0;

    for(int i = 0;i < x;i++) {
        if((*conjunto)->elementos[i] > 0) {
            quantidade += (*conjunto)->elementos[i];
        }
    }

    if(tamanhoConjunto(conjunto) == quantidade) {
        return 0;
    }else {
        return quantidade;
    }
}

int pertenceConjunto(int x, Conjunto **conjunto) {
    if((*conjunto)->elementos[x] > 0) {
        return 1;
    }

    return 0;
}

int conjuntosIdenticos(Conjunto **conjunto1, Conjunto **conjunto2) {
    if(tamanhoConjunto(conjunto1) != tamanhoConjunto(conjunto2)) {
        return 0;
    }else {
        for(int i = 0;i < tam;i++) {
            if(pertenceConjunto(i, conjunto1) != pertenceConjunto(i, conjunto2)) {
                return 0;
            }
        }

        return 1;
    }
}

int subconjunto(Conjunto **conjunto1, Conjunto **conjunto2) {
    if(tamanhoConjunto(conjunto1) > tamanhoConjunto(conjunto2)) {
        return 0;
    }else {
        for(int i = 0;i < tam;i++) {
            if(pertenceConjunto(i, conjunto1) != pertenceConjunto(i, conjunto2)) {
                return 0;
            }
        }

        return 1;
    }
}




