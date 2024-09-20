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