#include <stdio.h>
#include <math.h>

int main() {
    int t;
    double pi = 3.14159265;
    scanf(" %d", &t);
    getchar();

    while(t--) {
        char entr;
        scanf(" %c", &entr);
        getchar();


        if(entr == 'C') {
            double n1, resultado;
            scanf("%lf", &n1);

            resultado = (n1 * n1) * pi;

            printf("%.0lf\n", resultado);

        }
        else if(entr == 'E'){
            double n1, n2, resultado;
            scanf("%lf %lf", &n1, &n2);

            resultado = (n1 * n2) * pi;

            printf("%.0lf\n",resultado);
        }
        else if(entr == 'T') {
            double n1, n2, n3, resultado, semiperimetro;
            scanf("%lf %lf %lf", &n1, &n2, &n3);

            semiperimetro = (n1 + n2 + n3) / 2;
            resultado = sqrt(semiperimetro * (semiperimetro - n1) * (semiperimetro - n2) * (semiperimetro - n3));

            printf("%0.lf\n", resultado);
        }
        else if(entr == 'Z') {
            double n1, n2 , n3, resultado;
            scanf("%lf %lf %lf", &n1, &n2, &n3);

            resultado = ((n1 + n2) * n3) / 2;

            printf("%0.lf\n", resultado);
        }
    }

    return 0;
}