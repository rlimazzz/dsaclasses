#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

struct pilha{
    int index;
    int elem[TAM];
};

Pilha *cria_pilha(){
    Pilha *pilha = malloc(sizeof(Pilha));

    if(pilha==NULL){
        printf("Não foi possível alocar");
        exit(1);
    }

    inicializa_pilha(pilha);

    return pilha;
}

void inicializa_pilha(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    pilha->index = 0;
}

void libera_pilha(Pilha *pilha) {
    if(pilha == NULL) {
        printf("Pilha não alocada");
        exit(1);
    }

    free(pilha);
}

int tamanho_pilha(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    return pilha->index;
}

int pilha_cheia(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }

    if(pilha->index == TAM){
        printf("Pilha cheia!\n");
        return 1;
    }

    return 0;
}

int pilha_vazia(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }

    if(pilha->index == 0){
        printf("Pilha vazia!\n");
        return 1;
    }

    return 0;
}

void insere_pilha(Pilha *pilha, int elem){ // empilha
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    if(pilha_cheia(pilha)){
        printf("Pilha cheia");
        exit(1);
    }

    pilha->elem[pilha->index] = elem;
    pilha->index++;
    // printf("elemento recebido %d\n", elem);
}

int consulta_topo(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    return pilha->elem[pilha->index-1];
}

int remove_pilha(Pilha *pilha){ // desempilha
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    if(pilha_vazia(pilha)){
        exit(1);
    }
    
    int deleted = pilha->elem[pilha->index - 1];
    pilha->index--;
    return deleted;
}

void imprime_pilha(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }

    for (int i = pilha->index - 1; i >= 0; i--){
        printf("\tidx: %d -- elem: %d\n", i, pilha->elem[i]);
    }
}
