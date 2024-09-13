#include <stdio.h>

int numeros[25], menor = 10000000;
int main() {
    int n, k;
    scanf("%d %d", &n ,&k);

    int i = 0;
    for(i = 0;i < n;i++) {
        int entr;
        scanf("%d", &entr);

        numeros[entr]++;
    }

    for(i = 0;i <= k;i++) {
        if(numeros[entr] < menor) {
            menor = numeros[entr];
        }
    }
    printf("%d", menor);
    return 0;
}