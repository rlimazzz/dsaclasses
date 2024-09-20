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