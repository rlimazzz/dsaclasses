#include <stdlib.h>
#include <stdio.h>

int fibo[1000];

int number(int n) {
    if(n == 0) {
        return fibo[n] = 0;
    }
    else if(n >=  1 && n <= 2) {
        return fibo[n] = 1;
    }
    else {
        return fibo[n] = number(n-1) + number(n-2);
    }
}

int main() {
    int entr;
    scanf("%d", &entr);

    number(entr);
    for(int i = 0;i <= entr;i++) {
        printf("%d ", fibo[i]);
    }
    printf("\n");
    return 0;
}


