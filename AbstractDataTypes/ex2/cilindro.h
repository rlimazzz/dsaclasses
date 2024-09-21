typedef struct cilindro Cilindro;

Cilindro * cilindro_cria(double raio, double altura);

void cilindro_libera(Cilindro * cilindro);

void cilindro_acessa(Cilindro * cilindro, double* x, double* y);

void cilindro_atribui(Cilindro * cilindro, double x, double y);

double cilindro_raio(Cilindro * cilindro);

double cilindro_altura(Cilindro * cilindro);

double cilindro_area(Cilindro * cilindro);

double cilindro_volume(Cilindro * cilindro);

