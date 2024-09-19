#include <stdlib.h>
#include <stdio.h>

int recursao(int m, int n) {
    if(m == 0) {
        return n + 1;
    }
    else if(n == 0 && m > 0) {
        recursao(m - 1, 1);
    } 
    else if(n > 0 && m > 0){
        recursao(m - 1, recursao(m, n - 1));
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", recursao(x, y));
    return 0;
}