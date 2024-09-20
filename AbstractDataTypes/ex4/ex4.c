#include <stdio.h>
#include <stdlib.h>
#include "complexotad.c"

int main() {
    Complexo* complexo_teste1;
    Complexo* complexo_teste2;
    double real, imaginario, real2, imaginario2;

    printf("Digite a parte real e a parte imaginaria do numero complexo: ");
    scanf("%lf %lf", &real, &imaginario);
    complexo_teste1 = complexo_cria(real, imaginario);

    printf("Digite a parte real e a parte imaginaria do segundo numero complexo: ");
    scanf("%lf %lf", &real2, &imaginario2);
    complexo_teste2 = complexo_cria(real2, imaginario2);

    printf("Soma : %.2lf + %.2lfi\n", complexo_soma(complexo_teste1, complexo_teste2).real, complexo_soma(complexo_teste1, complexo_teste2).imaginario);
    printf("Subtração : %.2lf + %.2lfi\n", complexo_subtracao(complexo_teste1, complexo_teste2).real, complexo_subtracao(complexo_teste1, complexo_teste2).imaginario);
    printf("Multiplicação : %.2lf + %.2lfi\n", complexo_multiplicacao(complexo_teste1, complexo_teste2).real, complexo_multiplicacao(complexo_teste1, complexo_teste2).imaginario);

    complexo_libera(complexo_teste1);
    complexo_libera(complexo_teste2);
    return 0;
}