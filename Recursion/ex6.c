#include <stdio.h>
#include <stdlib.h>

int recursao(int n) {
    if(n == 1) {
        return 1;
    }
    else if(n % 2 != 0) {
        return n * recursao(n - 1);
    }else {
        recursao(n - 1);
    }
}

int main() {
    int entr;
    scanf("%d", &entr);

    printf("%d\n", recursao(entr));
    return 0;
}