#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

int main() {
    Fila *fila_real = cria_fila();

    printf("Tamanho da fila : %d\n", tamanho_fila(fila_real));

    fila_cheia(fila_real);
    fila_vazia(fila_real);

    printf("\nEnfileirando...\n");
    insere_fila(fila_real, 20);
    insere_fila(fila_real, 10);
    printf("\tTamanho da fila : %d\n", tamanho_fila(fila_real));
    printf("\tElemento da frente: %d\n\n", consulta_frente(fila_real));

    printf("Desenfileirando...\n");
    int deleted = remove_fila(fila_real);
    printf("\tElemento desenfileirado %d\n", deleted);
    printf("\tTamanho da fila: %d\n", tamanho_fila(fila_real));
    printf("\tElemento da frente: %d\n\n", consulta_frente(fila_real));
    
    printf("Imprimindo...\n");
    imprime_fila(fila_real);
    libera_fila(fila_real);


    return 0;
}
