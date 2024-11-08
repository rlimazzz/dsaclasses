#include <stdio.h>
#include <stdlib.h>
#include "pilhaDin.h" //inclui os Protótipos

//Definição do tipo Pilha
struct elemento {
    int dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Pilha* cria_Pilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL)
        *pi = NULL;
    return pi;
}

void libera_Pilha(Pilha* pi){
    if(pi != NULL){
        Elem* no;
        while((*pi) != NULL){
            no = *pi;
            *pi = (*pi)->prox;
            free(no);
        }
        free(pi);
    }
}

int consulta_topo_Pilha(Pilha* pi, int elem){
    if(pi == NULL)
        return 0;
    if((*pi) == NULL)
        return 0;
    elem = (*pi)->dados;
    return elem;
}

int insere_Pilha(Pilha* pi, int elem){
    if(pi == NULL)
        return 0;
    Elem* no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = elem;
    no->prox = (*pi);
    *pi = no;
    return 1;
}

int remove_Pilha(Pilha* pi){
    if(pi == NULL)
        return 0;
    if((*pi) == NULL)
        return 0;
    Elem *no = *pi;
    *pi = no->prox;
    free(no);
    return 1;
}

int tamanho_Pilha(Pilha* pi){
    if(pi == NULL)
        return 0;
    int cont = 0;
    Elem* no = *pi;
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

int Pilha_cheia(Pilha* pi){
    return 0;
}

int Pilha_vazia(Pilha* pi){
    if(pi == NULL)
        return 1;
    if(*pi == NULL)
        return 1;
    return 0;
}

void imprime_pilha(Pilha* pi) {
    if(pi == NULL)
        return;
    if(*pi == NULL)
        return;

    Elem* no = *pi;
    int contador = 0;

    while(no != NULL) {
        if(no->dados % 2 != 0) {
            printf("Ímpar na pilha : %d\n", no->dados);
            contador++;
        }

        no = no->prox;
    }
    printf("Quantidade de elementos ímpares na pilha : %d\n", contador);
}

