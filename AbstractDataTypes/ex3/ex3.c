#include <stdlib.h>
#include <stdio.h>
#include "esferatad.c"

int main() {
    Esfera* esfera;
    double num1;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &num1);

    esfera = esfera_cria(num1);

    printf("Raio: %.2lf\n", esfera_raio(esfera));
    printf("Area: %.2lf\n", esfera_area(esfera));
    printf("Volume: %.2lf\n", esfera_volume(esfera));

    printf("Digite mais um raio para a esfera: ");
    scanf("%lf", &num1);

    esfera_atribui(esfera, num1);

    printf("Raio: %.2lf\n", esfera_raio(esfera));
    printf("Area: %.2lf\n", esfera_area(esfera));
    printf("Volume: %.2lf\n", esfera_volume(esfera));

    double raio;
    esfera_acessa(esfera, &raio);
    printf("Raio usando o acessa : %.2lf\n", raio);
    

    return 0;
}