#include <stdlib.h>
#include <stdio.h>
#include "listaDupEncad.h"

struct elemento {
    int dados;
    struct elemento *prox;
    struct elemento *ant;
};

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

int insere_lista_inicio(Lista *li, int elem) {
    if(li == NULL) {
        return 0;
    }

    Elemento* no;

    no = (Elemento*) malloc(sizeof(Elemento));

    if(no == NULL) {
        return 0;
    }

    no->dados = elem;
    no->prox = (*li);
    no->ant = NULL;

    if(*li != NULL) {
        (*li)->ant = no;
    }
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

void consulta_antecessor_sucessor(Lista *li, int elem) {
    if(li == NULL) {
        return;
    }

    Elemento *no = *li;
    
    while(no->dados != elem && no->prox != NULL) {
        no = no->prox;
    }

    if(no == NULL) {
        return;
    }

    Elemento *antecessor = no->ant, *sucessor = no->prox;

    printf("Sucessor : ");

    if(sucessor) {
        printf("%d\n", sucessor->dados);
    }else {
        printf("NULL\n");
    }

    printf("Antecessor : ");

    if(antecessor) {
        printf("%d\n", antecessor->dados);
    }else {
        printf("NULL\n");
    }

}

void imprime_lista(Lista *li) {
    if(li == NULL) {
        return;
    }

    Elemento *no = *li;

    while(no != NULL) {
        printf("Váriavel : %d\n", no->dados);

        no = no->prox;
    }
}
