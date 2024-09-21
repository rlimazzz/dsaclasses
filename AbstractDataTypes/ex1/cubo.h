typedef struct cubo Cubo;

Cubo * cubo_cria(double lado);

void cubo_libera(Cubo * cubito);

void cubo_acessa(Cubo * cubito, double* x);

void cubo_atribui(Cubo * cubito, double x);

double cubo_lado(Cubo * cubito);

double cubo_area(Cubo * cubito);

double cubo_volume(Cubo * cubito);