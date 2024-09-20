typedef struct complexo Complexo;

struct complexo {
    double real;
    double imaginario;
};

Complexo* complexo_cria(double real, double imaginario) {
    Complexo* complexo = (Complexo*) malloc(sizeof(Complexo));

    if(complexo != NULL) {
        complexo->real = real;
        complexo->imaginario = imaginario;
    }

    return complexo;
}

void complexo_libera(Complexo* complexo) {
    if(complexo != NULL) {
        free(complexo);
    }
}

void complexo_acessa(Complexo* complexo, double* x, double* y) {
    if(complexo != NULL) {
        *x = complexo->real;
        *y = complexo->imaginario;
    }
}

void complexo_atribui(Complexo* complexo, double x, double y) {
    if(complexo != NULL) {
        complexo->real = x;
        complexo->imaginario = y;
    }
}

double complexo_real(Complexo* complexo) {
    return complexo->real;
}

double complexo_imaginario(Complexo* complexo) {
    return complexo->imaginario;
}

Complexo complexo_soma(Complexo* complexo1, Complexo* complexo2) {
    Complexo complexo_soma1;
    complexo_soma1.real = complexo1->real + complexo2->real;
    complexo_soma1.imaginario = complexo1->imaginario + complexo2->imaginario;

    return complexo_soma1;
}

Complexo complexo_subtracao(Complexo* complexo1, Complexo* complexo2) {
    Complexo complexo_subtracao1;

    complexo_subtracao1.real = complexo1->real - complexo2->real;
    complexo_subtracao1.imaginario = complexo1->imaginario - complexo2->imaginario;

    return complexo_subtracao1;
}

Complexo complexo_multiplicacao(Complexo* complexo1, Complexo* complexo2) {
    Complexo complexo_multiplicacao1;
    complexo_multiplicacao1.real = (complexo1->real * complexo2->real) - (complexo1->imaginario * complexo2->imaginario);
    complexo_multiplicacao1.imaginario = (complexo1->real * complexo2->imaginario) + (complexo1->imaginario * complexo2->real);

    return complexo_multiplicacao1;
}