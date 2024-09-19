#include <stdlib.h>
#include <stdio.h>

int number(int n) {
    if(n <= 1) {
        printf("%d " , n);
        return n;
    } else {
        number(n-1);
        printf("%d ", n);
        return n;
    }
}

int main() {
    int entr;
    scanf("%d", &entr);

    number(entr);
    return 0;
}


