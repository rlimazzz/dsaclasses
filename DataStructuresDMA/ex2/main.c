#include <stdio.h>
#include <stdlib.h>
#include "listaDupEncad.h"

int main () {
    Lista *li = cria_lista();

    insere_lista_inicio(li, 2);
    insere_lista_inicio(li, 1);
    insere_lista_inicio(li, 4);


    consulta_antecessor_sucessor(li, 1);
    imprime_lista(li);
    remove_primeirosn(li, 2);

    libera_lista(li);

    return 0;
}