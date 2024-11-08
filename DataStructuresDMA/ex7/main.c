#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "filaDin.h"

int main() {
    Fila* fila_real = cria_Fila();

    struct cliente exemplo;
    exemplo.codigo = 2023;
    strcpy(exemplo.nome, "Ryan");

    insere_Fila(fila_real, exemplo);

    struct cliente outrocliente;
    strcpy(outrocliente.nome, "Alex");
    outrocliente.codigo = 2024;
    insere_Fila(fila_real, outrocliente);

    imprime_Fila(fila_real);

    listagem(fila_real);

    printf("Quantidade de pessoas na fila : %d\n", qtd_clientes(fila_real));
    printf("Tempo médio de espera na fila(em minutos): %.2lf\n", tempo_medio(fila_real));
    printf("Código do próximo cliente: %d\n", chamar_codigo(fila_real));

    libera_Fila(fila_real);
    return 0;
}