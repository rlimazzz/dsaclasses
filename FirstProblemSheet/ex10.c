#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        char figura;
        double a, b, c, op;
        scanf("%c", &figura);

        if(figura == 'C') {
            scanf("%lf", &a);

            op = 3.14159265 * (a * a);
            printf("%d\n", round(op));
        } 
        else if(figura == 'E') {
            scanf("%lf %lf", &a, &b);

            op = 3.14159265 * (a * b);
            printf("%d\n", round(op));
        }    
        else if(figura == 'T') {
            scanf("%lf %lf %lf", &a, &b, &c);

            double semip = a + b + c;
            op = sqrt(semip * (semip - a) * (semip- b) * (semip - c));

            printf("%d\n", round(op));
        }
        else if(figura == 'Z') {
            scanf("%lf %lf %lf", &a, &b, &c);

            op = ((a + b) * c ) / 2;
            printf("%d\n", round(op));
        }
    }
    return 0;
}