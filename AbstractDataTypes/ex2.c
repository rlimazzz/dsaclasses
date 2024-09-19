#include <stdio.h>
#include <stdlib.h>

typedef struct cilindro Cilindro;

struct cilindro{
    double raio;
    double altura;
    double volume;
    double area;
};

Cilindro* cilindro_cria(double raio, double altura) {
    Cilindro* cilindro = (Cilindro*) malloc(sizeof(Cilindro));

    if(cilindro != NULL) {
        cilindro->raio = raio;
        cilindro->altura = altura;
    }

    return cilindro;
}

void cilindro_libera(Cilindro* cilindro) {
    if(cilindro != NULL) {
        free(cilindro);
    }
}

void cilindro_acessa(Cilindro* cilindro, double* x, double* y) {
    if(cilindro != NULL) {
        *x= cilindro->raio;
        *y= cilindro->altura;
    }
}

void cilindro_atribui(Cilindro* cilindro, double x, double y) {
    if(cilindro != NULL) {
        cilindro->raio = x;
        cilindro->altura = y;
    }
}

double cilindro_raio(Cilindro* cilindro) {
    return cilindro->raio;
}

double cilindro_altura(Cilindro* cilindro) {
    return cilindro->altura;
}

double cilindro_area(Cilindro *cilindro) {
    double area_cilindro = 2 * 3.14 * cilindro->raio * (cilindro->raio + cilindro->altura);

    if(cilindro != NULL) {
        cilindro->area = area_cilindro;
    }

    return area_cilindro;
}

double cilindro_volume(Cilindro *cilindro) {
    double volume_cilindro = cilindro->raio * cilindro->raio * cilindro->altura * 3.14;
    if(cilindro != NULL) {
        cilindro->volume = volume_cilindro;
    }
    return volume_cilindro;
}




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
    printf("Raio do cilindro (usando o acessa): %p\n", x);
    printf("Altura do cilindro (usando o acessa): %p\n", y);

    cilindro_libera(cilindro1);
    return 0;
}