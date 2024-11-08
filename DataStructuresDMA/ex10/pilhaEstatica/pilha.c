#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

struct pilha{
    int index;
    int elem[TAM];
};

Pilha *estcria_pilha(){
    Pilha *pilha = malloc(sizeof(Pilha));

    if(pilha==NULL){
        printf("Não foi possível alocar");
        exit(1);
    }

    estinicializa_pilha(pilha);

    return pilha;
}

void estinicializa_pilha(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    pilha->index = 0;
}

void estlibera_pilha(Pilha *stack) {
    if(stack == NULL) {
        return ;
    }

    free(stack);
    return ;
}

int esttamanho_pilha(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    return pilha->index;
}

int estpilha_cheia(Pilha *pilha){
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

int estpilha_vazia(Pilha *pilha){
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

void estinsere_pilha(Pilha *pilha, int elem){ // empilha
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    if(estpilha_cheia(pilha)){
        printf("Pilha cheia");
        exit(1);
    }

    pilha->elem[pilha->index] = elem;
    pilha->index++;
    // printf("elemento recebido %d\n", elem);
}

int estconsulta_topo(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    return pilha->elem[pilha->index-1];
}

int estremove_pilha(Pilha *pilha){ // desempilha
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }
    if(estpilha_vazia(pilha)){
        exit(1);
    }
    
    int deleted = pilha->elem[pilha->index - 1];
    pilha->index--;
    return deleted;
}

void estimprime_pilha(Pilha *pilha){
    if(pilha==NULL){
        printf("Pilha não alocada");
        exit(1);
    }

    int contador = 0;
    for (int i = pilha->index - 1; i >= 0; i--){
        if(pilha->elem[i] % 2 != 0) {
            printf("\tidx: %d -- elem: %d\n", i, pilha->elem[i]);
            contador++;
        }
    }

    printf("A quantidade de elementos ímpares foram %d", contador);
}