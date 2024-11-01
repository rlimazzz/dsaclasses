#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct ponto {
    int x;
    int y;
} Ponto;

int main() {
    Ponto A, B;
    for(int i = 0;i < 2;i++) {
        printf("Digite o x e o y:");
        if(i == 0) {
            scanf("%d %d", &A.x, &A.y);
        }
        else{
            scanf("%d %d", &B.x, &B.y);
        }
    }

    float dist = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
    printf("Distância entre os dois pontos: %.2lf\n", dist);
    return 0;
}
