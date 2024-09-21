#include <stdlib.h>
#include "cubo.h"

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
