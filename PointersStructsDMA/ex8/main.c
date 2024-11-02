#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    while(1) {
        printf("Digite n(não pode ser negativo)\n");
        scanf("%d", &n);

        if(n >= 0) {
            break;
        }
    }

    int *vetor;
    vetor = malloc(n * sizeof(int));

    for(int i = 0;i < n;i++) {
        int entr;
        while(1) {
            scanf("%d", &entr);

            if(entr >= 2) {
                break;
            }
        }

        vetor[i] = entr;
    }

    for(int i = 0;i < n;i++) {
        printf("Elemento na posição %d : %d\n", i , vetor[i]);
    }

    free(vetor);
    return 0;
}
