#include <stdlib.h>
#include <stdio.h>

int main() {
    int linhas, entr;
    scanf("%d", &linhas);

    int **matriz = (int**) malloc((linhas + 5) * sizeof(int*));
    for(int i = 1;i <= linhas;i++) {
        matriz[i] = (int*) malloc(i * sizeof(int));
    }

    for(int i = 1;i <= linhas;i++) {
        for(int j = 1;j <= i;j++) {
            int entr;
            scanf("%d", &entr);
            matriz[i][j] = entr;

        }
    }


    for(int i = 1;i <= linhas;i++) {
        for(int j = 1;j <= i;j++) {
            printf("%d ", matriz[i][j]);
            matriz[i][j] *= 5;
        }
        printf("\n");
    }

    for(int i = 1;i <= linhas;i++) {
        for(int j = 1;j <= i;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}