#include <stdio.h>
#include <stdlib.h>

typedef struct cubo Cubo;

struct cubo {
    double lado;
    double volume;
    double area;
};

Cubo* cubo_cria(double lado) {
    Cubo* cubito = (Cubo*) malloc(sizeof(Cubo));

    if(cubito != NULL) {
        cubito->lado = lado;
    }

    return cubito;
}

void cubo_libera(Cubo* cubito) {
    if(cubito != NULL) {
        free(cubito);
    }
}

void cubo_acessa(Cubo* cubito, double* x) {
    if(cubito != NULL) {
        *x= cubito->lado;
    }
}

void cubo_atribui(Cubo* cubito, double x) {
    if(cubito != NULL) {
        cubito->lado = x;
    }
}

double cubo_lado(Cubo* cubito) {
    return cubito->lado;
}

double cubo_area(Cubo* cubito) {
    double area_cubito = 6 * cubito->lado * cubito->lado;

    if(cubito != NULL) {
        cubito->area = area_cubito;
    }

    return area_cubito;
}

double cubo_volume(Cubo* cubito) {
    double volume_cubito = cubito->lado * cubito->lado * cubito->lado;
    if(cubito != NULL) {
        cubito->volume = volume_cubito;
    }
    return volume_cubito;
}

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