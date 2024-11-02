#include <stdlib.h>
#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor que você deseja: ");
    scanf("%d", &n);

    int * vetor;
    vetor = malloc(n * sizeof(int));

    for(int i = 0;i < n;i++) {
        printf("Digite um número do seu vetor: \n");
        scanf("%d", &vetor[i]);
    } 

    for(int i = 0;i < n;i++) {
        printf("Elemento na posição %d : %d\n", i , vetor[i]);
    }

    free(vetor);
    return 0;
}
