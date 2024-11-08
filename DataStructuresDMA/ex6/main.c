#include <stdlib.h>
#include <stdio.h>
#include "./fila.h"

int main() {
    Fila *fila_1 = cria_fila();
    Fila *fila_2 = cria_fila();
    Fila *fila_3 = cria_fila();

    insere_fila(fila_1, 1);
    insere_fila(fila_1, 2);

    insere_fila(fila_2, 3);
    insere_fila(fila_2, 4);

    int p = 1;
    while(!fila_vazia(fila_1) || !fila_vazia(fila_2)) {
        if(p % 2 == 0) {
            if(!fila_vazia(fila_2)){
                insere_fila(fila_3, consulta_frente(fila_2));
                remove_fila(fila_2);
            }else {
                insere_fila(fila_3, consulta_frente(fila_1));
                remove_fila(fila_1);
            }
        }else {
            if(!fila_vazia(fila_1)){
                insere_fila(fila_3, consulta_frente(fila_1));
                remove_fila(fila_1);
            }else {
                insere_fila(fila_3, consulta_frente(fila_2));
                remove_fila(fila_2);
            }
        }
        p++;
    }


    imprime_fila(fila_3);
    libera_fila(fila_1);
    libera_fila(fila_2);
    libera_fila(fila_3);


    return 0;
}
