#include <stdio.h>
#include <stdlib.h>
#include "cilindrotad.c"

int main() {
    double raio, altura;
    Cilindro* cilindro1;
    printf("Digite o raio e a altura do cilindro: ");
    scanf("%lf %lf", &raio, &altura);

    cilindro1 = cilindro_cria(raio, altura);

    printf("Raio do cilindro: %.2lf\n", cilindro_raio(cilindro1));
    printf("Altura do cilindro: %.2lf\n", cilindro_altura(cilindro1));
    printf("Área do cilindro: %.2lf\n", cilindro_area(cilindro1));
    printf("Volume do cilindro: %.2lf\n", cilindro_volume(cilindro1));

    printf("Digite outro raio e altura para testes : ");
    scanf("%lf %lf", &raio, &altura);

    cilindro_atribui(cilindro1, raio, altura);
    printf("Raio do cilindro: %.2lf\n", cilindro_raio(cilindro1));
    printf("Altura do cilindro: %.2lf\n", cilindro_altura(cilindro1));
    printf("Área do cilindro: %.2lf\n", cilindro_area(cilindro1));
    printf("Volume do cilindro: %.2lf\n", cilindro_volume(cilindro1));

    double x, y;
    cilindro_acessa(cilindro1, &x, &y); // Passa os endereços de x e y
    printf("Raio do cilindro (usando o acessa): %lf\n", x);
    printf("Altura do cilindro (usando o acessa): %lf\n", y);

    cilindro_libera(cilindro1);
    return 0;
}