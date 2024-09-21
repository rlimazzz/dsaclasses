typedef struct esfera Esfera;

Esfera * esfera_cria(double raio);

void esfera_libera(Esfera * esfera);

void esfera_acessa(Esfera * esfera, double* x);

void esfera_atribui(Esfera * esfera, double x);

double esfera_raio(Esfera * esfera);

double esfera_area(Esfera * esfera);

double esfera_volume(Esfera * esfera);

