typedef struct complexo Complexo;

Complexo* complexo_cria(double real, double imaginario);

void complexo_libera(Complexo* complexo);

void complexo_acessa(Complexo* complexo, double* x, double* y);

void complexo_atribui(Complexo* complexo, double x, double y);

double complexo_real(Complexo* complexo);

double complexo_imaginario(Complexo* complexo);

Complexo complexo_soma(Complexo* complexo1, Complexo* complexo2);

Complexo complexo_subtracao(Complexo* complexo1, Complexo* complexo2);

