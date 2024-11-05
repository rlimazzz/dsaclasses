#include<stdio.h>
#include<stdlib.h>
#include"./listaEstatica/listaEstatica.h"
//#include "./listaDinEncad/listaDinEncad.c"

int main(){
    Lista *lista_real = cria_lista();

    printf("Tamanho da lista : %d\n", tamanho_lista(lista_real));

    insere_inicio_lista(lista_real, 10);
    insere_inicio_lista(lista_real, 20);
    insere_inicio_lista(lista_real, 30);


    printf("Tamanho da lista : %d\n", tamanho_lista(lista_real));
    imprime_lista(lista_real);

    remove_primeirosn(lista_real, 2);
    printf("Tamanho da lista : %d\n", tamanho_lista(lista_real));
    imprime_lista(lista_real);


    insere_inicio_lista(lista_real, 20);
    insere_inicio_lista(lista_real, 30);
    printf("Tamanho da lista : %d\n", tamanho_lista(lista_real));
    imprime_lista(lista_real);

    remove_ultimosn(lista_real, 2);
    printf("Tamanho da lista : %d\n", tamanho_lista(lista_real));
    imprime_lista(lista_real);


    libera_lista(lista_real);

    //Implementação apenas para lista dinamica REMOVIDO DEVIDO CONFLITO COM FUNÇÕES DE MESMO NOME
    /*
    Lista *li = cria_lista();
    insere_lista_inicio(li, 10);
    insere_lista_inicio(li, 20);
    insere_lista_inicio(li, 20);

    imprime_lista(li);

    remove_primeirosn(li, 1);

    printf("Após 1 removidos do começo: \n");
    imprime_lista(li);

    remove_ultimosn(li,1);
    printf("Após 1 removido do fim: \n");
    imprime_lista(li);
    */
    return 0;
}
