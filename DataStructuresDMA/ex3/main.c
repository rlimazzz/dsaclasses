#include <stdlib.h>
#include <stdio.h>
#include "./listaDinEncad/listaDinEncad.h"

int main() {
    Lista *li = cria_lista();

    printf("\nPRODUTOS : \n");
    struct produto entr = {10, "Batata", 4.25, 5};
    insere_lista_inicio(li, entr);
    imprime_lista(li);

    struct produto entr2 = {5, "Tomate", 2.50, 2};
    insere_lista_inicio(li, entr2);

    printf("\nPRODUTOS : \n");
    imprime_lista(li);

    printf("\nMENOR PREÇO!!!!\n");
    struct produto menor = menor_preco(li);
    printf("Código : %d\n", menor.codigo);
    printf("Nome : %s\n", menor.nomeProd);
    printf("Preço : %.2lf\n", menor.preco);
    printf("Quantidade : %d\n", menor.qtd);

    libera_lista(li);

    return 0;
}