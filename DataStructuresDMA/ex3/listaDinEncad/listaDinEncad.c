#include <stdlib.h>
#include <stdio.h>
#include "listaDinEncad.h"

struct elemento {
    struct produto dados;
    struct elemento *prox;
};

typedef struct elemento Elemento;

Lista* cria_lista() {
    Lista* li = (Lista*) malloc(sizeof(Lista));

    if(li != NULL) {
        *li = NULL;
    }

    return li;
}

void libera_lista(Lista* li){
    if(li != NULL){
        Elemento* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int insere_lista_inicio(Lista *li, struct produto prod) {
    if(li == NULL) {
        return 0;
    }

    Elemento* no;

    no = (Elemento*) malloc(sizeof(Elemento));

    if(no == NULL) {
        return 0;
    }

    no->dados = prod;
    no->prox = (*li);
    *li = no;
    return 1;
}

int remove_lista_inicio(Lista* li){
    if(li == NULL)
        return 0;
    if((*li) == NULL)//lista vazia
        return 0;

    Elemento *no = *li;
    *li = no->prox;
    free(no);
    return 1;
}

int remove_codigo(Lista *li, int codigo) {
    if(li == NULL) {
        return 0;
    }
    if((*li) == NULL) {
        return 0;
    }

    Elemento *no = *li, *ant = *li;
    while(no != NULL) {
        if(no->dados.codigo == codigo) {
            ant->prox = no->prox;
            free(no);
            return 1;
        }
        no = no->prox;
    }

    return 0;
}

int remove_primeirosn(Lista *li, int n) {
    if(li == NULL) {
        return 0;
    }
    if((*li) == NULL) {
        return 0;
    }

    for(int i = 0;i < n;i++) {
        Elemento *no = *li;
        *li = no->prox;
        free(no);
    }

    return 1;
}

int remove_ultimosn(Lista *li, int n) {
    if(li == NULL) {
        return 0;
    }
    if((*li) == NULL) {
        return 0;
    }

    Elemento *ant, *no = *li;
    while(n--) {
        while(no->prox != NULL){
            ant = no;
            no = no->prox;
        }

        if(no == (*li))//remover o primeiro?
            *li = no->prox;
        else
            ant->prox = no->prox;
        free(no);
    }

    return 1;
}

struct produto menor_preco(Lista *li) {
    if(li == NULL) {
        exit(1);
    }
    if((*li) == NULL) {
        exit(1);
    }

    struct produto saida = {-11, "DESCONHECIDO", 1000000000, 0};
    Elemento *no = *li;

    while(no->prox != NULL) {
        if(no->dados.preco < saida.preco) {
            saida = no->dados;
        }
    }

    return saida;
}

void imprime_lista(Lista *li) {
    if(li == NULL) {
        return;
    }

    Elemento *no = *li;

    while(no != NULL) {
        printf("Código : %d\n", no->dados.codigo);
        printf("Nome : %s\n", no->dados.nomeProd);
        printf("Preço : %.2lf\n", no->dados.preco);
        printf("Quantidade : %d\n", no->dados.qtd);

        no = no->prox;
    }
}
