#include <stdlib.h>
#include <stdio.h>

typedef struct esfera Esfera;

struct esfera {
    double raio;
    double volume;
    double area;
};

Esfera* esfera_cria(double raio) {
    Esfera* esfera = (Esfera*) malloc(sizeof(Esfera));

    if(esfera != NULL) {
        esfera->raio = raio;
    }

    return esfera;
}

void esfera_libera(Esfera* esfera) {
    if(esfera != NULL) {
        free(esfera);
    }
}

void esfera_acessa(Esfera* esfera, double* x) {
    if(esfera != NULL) {
        *x = esfera->raio;
    }
}

void esfera_atribui(Esfera* esfera, double x) {
    if(esfera != NULL) {
        esfera->raio = x;
    }
}

double esfera_raio(Esfera* esfera) {
    return esfera->raio;
}

double esfera_area(Esfera* esfera) {
    double area_esfera = 4 * 3.14 * esfera->raio * esfera->raio;

    if(esfera != NULL) {
        esfera->area = area_esfera;
    }

    return area_esfera;
}

double esfera_volume(Esfera* esfera) {
    double esfera_volume = (4 * 3.14 * esfera->raio * esfera->raio * esfera->raio) / 3;

    if(esfera != NULL) {
        esfera->volume = esfera_volume;
    }

    return esfera_volume;
}

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