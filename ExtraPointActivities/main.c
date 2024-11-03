#include<stdio.h>
#include<stdlib.h>
#include"./pilha/pilha.h"

int main(){
    Pilha *pilha1 = cria_pilha();
    Pilha *pilha_aux = cria_pilha();
    Pilha *pilha2 = cria_pilha();
    int n;

    printf("Insira a quantidade de elementos que você deseja inserir nas pilhas: (MAX 200000) ");
    scanf("%d", &n);

    printf("Insira os elementos da pilha: ");
    for(int i = 0;i < n;i++) {
        int entr;
        scanf("%d", &entr);
        insere_pilha(pilha_aux, entr);
        insere_pilha(pilha1, entr);
    }

    for(int i = 0;i < n;i++) {
        int entr = remove_pilha(pilha_aux);
        insere_pilha(pilha2, entr);
    }

    printf("Primeira pilha\n");
    imprime_pilha(pilha1);
    printf("Segunda pilha\n");
    imprime_pilha(pilha2);

    libera_pilha(pilha1);
    libera_pilha(pilha2);
    libera_pilha(pilha_aux);
    return 0;
}
