#include <stdio.h>

unsigned long long int fibo[100000];
int main() {
    int entr;
    scanf("%d", &entr);

    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;

    int i = 0;
    for(i = 3;i <= 100;i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    while(entr--) {
        int n;
        scanf("%d", &n);

        printf("%llu\n", fibo[n]);
    }
    return 0;
}