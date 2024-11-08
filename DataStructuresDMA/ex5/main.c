#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

int main() {
    Fila *fila_real = cria_fila();
    Fila *fila_copia = cria_fila();

    insere_fila(fila_real, 1);
    insere_fila(fila_real, 2);

    for(int i = 0;i < tamanho_fila(fila_real);i++) {
        insere_fila(fila_copia, consulta_elem(fila_real, i));
    }

    printf("FILA REAL \n");
    imprime_fila(fila_real);

    printf("FILA COPIA \n");
    imprime_fila(fila_copia);

    libera_fila(fila_real);
    libera_fila(fila_copia);


    return 0;
}
