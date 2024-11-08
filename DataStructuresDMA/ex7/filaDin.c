#include <stdio.h>
#include <stdlib.h>
#include "filaDin.h"
//Definição do tipo Fila
struct elemento{
    struct cliente dados;
    struct elemento *prox;
};

typedef struct elemento Elem;
//Definição do Nó Descritor da Fila
struct fila{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

Fila* cria_Fila(){
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    if(fi != NULL){
        fi->final = NULL;
        fi->inicio = NULL;
        fi->qtd = 0;
    }
    return fi;
}

void libera_Fila(Fila* fi){
    if(fi != NULL){
        Elem* no;
        while(fi->inicio != NULL){
            no = fi->inicio;
            fi->inicio = fi->inicio->prox;
            free(no);
        }
        free(fi);
    }
}

int consulta_Fila(Fila* fi, struct cliente *cl){
    if(fi == NULL)
        return 0;
    if(fi->inicio == NULL)//fila vazia
        return 0;
    *cl = fi->inicio->dados;
    return fi->inicio->dados.codigo;
}

int insere_Fila(Fila* fi, struct cliente cl){
    if(fi == NULL)
        return 0;
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = cl;
    no->prox = NULL;
    if(fi->final == NULL)//fila vazia
        fi->inicio = no;
    else
        fi->final->prox = no;
    fi->final = no;
    fi->qtd++;
    return 1;
}

int remove_Fila(Fila* fi){
    if(fi == NULL)
        return 0;
    if(fi->inicio == NULL)//fila vazia
        return 0;
    Elem *no = fi->inicio;
    fi->inicio = fi->inicio->prox;
    if(fi->inicio == NULL)//fila ficou vazia
        fi->final = NULL;
    free(no);
    fi->qtd--;
    return 1;
}

int tamanho_Fila(Fila* fi){
    if(fi == NULL)
        return 0;
    return fi->qtd;
}

int Fila_vazia(Fila* fi){
    if(fi == NULL)
        return 1;
    if(fi->inicio == NULL)
        return 1;
    return 0;
}

int Fila_cheia(Fila* fi){
    return 0;
}

void imprime_Fila(Fila* fi){
    if(fi == NULL)
        return;
    Elem* no = fi->inicio;
    while(no != NULL){
        printf("Nome: %s\n",no->dados.nome);
        printf("Código: %d\n",no->dados.codigo);
        printf("-------------------------------\n");
        no = no->prox;
    }
}

void listagem(Fila *fi) {
    if(fi == NULL)
        return;
    Elem* no = fi->inicio;
    printf("**LISTAGEM**\n");
    while(no != NULL){
        printf("Nome: %s\n",no->dados.nome);
        printf("-------------------------------\n");
        no = no->prox;
    }
}

int qtd_clientes(Fila *fi) {
    if(fi == NULL) 
        return 0;

    return fi->qtd;
}

double tempo_medio(Fila *fi) {
    if(fi == NULL) {
        return 0;
    }

    double soma = 0;

    for(int i = 0;i < fi->qtd;i++) {
        soma += i * 10;
    }

    return soma / fi->qtd;
}

int chamar_codigo(Fila *fi) {
    if(fi == NULL) {
        return 0;
    }

    remove_Fila(fi);
    int codigoe = fi->inicio->dados.codigo;

    return codigoe;
}
