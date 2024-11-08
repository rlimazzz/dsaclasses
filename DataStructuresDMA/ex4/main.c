#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

int main(){
    Lista *lista_real = cria_lista();

    insere_inicio_lista(lista_real, 1);
    insere_inicio_lista(lista_real, 2);
    insere_inicio_lista(lista_real, 4);
    insere_inicio_lista(lista_real, 11);
    insere_inicio_lista(lista_real, 3);

    printf("Quantidade de pares : %d\n", qtd_pares(lista_real));
    printf("Maior valor : %d\n", maior_valor(lista_real));
    printf("Menor valor : %d\n", menor_valor(lista_real));
    printf("Soma da lista: %d\n", soma_lista(lista_real));
    printf("Média da lista: %lf\n", media_lista(lista_real));
    printf("Posição do maior: %d\n", pos_maior_valor(lista_real));
    printf("Posição do menor: %d\n", pos_menor_valor(lista_real));
    printf("Número de nós que possuem um primo: %d\n", numero_nos_primos(lista_real));



    libera_lista(lista_real);

    return 0;
}