#include <stdlib.h>
#include <stdio.h>

int n, k, pai[100000], peso[100000], familias;

int find(int x) {
    if(pai[x] == x) 
    {
        return x;
    }
    return pai[x] =find(pai[x]);
}

void join(int x, int y) {
    x = find(x);
    y = find(y);

    if(x == y) return;

    if(peso[x]< peso[y]) pai[x] = y;
    if(peso[x] > peso[y]) pai[y] = x;
    if(peso[x] == peso[y]) {
        pai[x] = y;
        peso[y]++;
    }
}

int main() {
    scanf("%d %d", &n, &k);
    
    familias = n;

    for(int i = 1;i <= k;i++) {
        pai[i] = i;
        peso[i] = 1;
    }

    for(int i = 0;i < k;i++) {
        int entr1, entr2;
        scanf("%d %d", &entr1, &entr2);

        if(find(entr1) != find(entr2)) {
            join(entr1, entr2);
            familias--;
        }
    }

    printf("%d\n", familias);
    return 0;
}