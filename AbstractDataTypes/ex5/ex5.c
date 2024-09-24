#include <stdio.h>
#include <stdlib.h>
#include "conjuntotad.c"

int main() {
    Conjunto **conjuntoteste;
    Conjunto **conjuntoteste2;

    criaConjunto(conjuntoteste);
    insereElementoConjunto(5, conjuntoteste);

    criaConjunto(conjuntoteste2);
    insereElementoConjunto(5, conjuntoteste2);

    printf("Elemento 5 está no conjunto? %d\n", (*conjuntoteste)->elementos[5]);
    printf("O conjunto 1 é subconjunto de 2? %d\n", subconjunto(conjuntoteste, conjuntoteste2));
    printf("Qual o tamanho do conjunto 1? %d\n", tamanhoConjunto(conjuntoteste));
    printf("Qual o tamanho do conjunto 2? %d\n", tamanhoConjunto(conjuntoteste2));
    printf("O conjunto 1 é um conjunto vazio? %d\n", conjuntoVazio(conjuntoteste));

    printf("Existem quantos números maiores que 5 no conjunto 1? %d\n", maior(5, conjuntoteste));
    insereElementoConjunto(6, conjuntoteste);
    printf("Existem quantos números maiores que 5 no conjunto 1? %d\n", maior(5, conjuntoteste));
    printf("Existem quantos números menores que 6 no conjunto 1? %d\n", menor(6, conjuntoteste));
    printf("O conjunto 1 é identico ao conjunto 2? %d\n", conjuntosIdenticos(conjuntoteste, conjuntoteste2));
    excluirElementoConjunto(6, conjuntoteste);
    printf("Qual o tamanho do conjunto 1? %d\n", tamanhoConjunto(conjuntoteste));




    return 0;
}