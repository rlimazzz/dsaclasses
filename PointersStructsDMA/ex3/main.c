#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct ponto {
    int x;
    int y;
} Ponto;

int main() {
    Ponto A;
    printf("Digite o x e o y:");
    scanf("%d %d", &A.x, &A.y);

    float dist = sqrt(pow(A.x, 2) + pow(A.y, 2));
    printf("Distância entre os dois pontos: %.2lf\n", dist);
    return 0;
}
