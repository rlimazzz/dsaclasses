#include <stdio.h>
#include <stdlib.h>
#include "cubotad.c"

int main() {
    double lado1;
    Cubo *cubo1;
    printf("Digite o lado do cubo: ");
    scanf("%lf", &lado1);
    cubo1 = cubo_cria(lado1);

    printf("Lado do cubo: %.2lfcm\n", cubo_lado(cubo1));
    printf("Área do cubo: %.2lfcm²\n", cubo_area(cubo1));
    printf("Volume do cubo: %.2lfcm³\n", cubo_volume(cubo1));


    printf("Digite outro lado para testarmos a atribuição de valor: ");
    scanf("%lf", &lado1);
    cubo_atribui(cubo1, lado1);

    printf("Lado do cubo: %.2lfcm\n", cubo_lado(cubo1));
    printf("Área do cubo: %.2lfcm²\n", cubo_area(cubo1));
    printf("Volume do cubo: %.2lfcm³\n", cubo_volume(cubo1));
    
    double ponteiro;
    cubo_acessa(cubo1, &ponteiro);
    printf("Raio usando o acessa : %.2lf\n", ponteiro);

    cubo_libera(cubo1);
    
    return 0;
}