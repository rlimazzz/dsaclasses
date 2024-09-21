#include <stdlib.h>
#include <stdio.h>


int conversao(int n) {
    if(n > 1) {
        conversao(n / 2);
    }

    printf("%d", n % 2);
}

int main(){
    int entr;
    scanf("%d", &entr);

    for(int i = 0;i < entr;i++) {
        int entr2;
        scanf("%d", &entr2);

        conversao(entr2);
        printf("\n");
    }
}