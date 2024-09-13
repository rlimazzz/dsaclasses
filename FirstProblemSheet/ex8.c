#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        int entr, ver = 0;
        scanf("%d", &entr);

        int i = 0;
        for(i = 2;i * i <= entr;i++) {
            if(entr % i == 0) {
                printf("composto\n");
                ver = 1;
                break;
            }
        }
        if(ver == 0) {
         printf("primo\n");
        }
    }
    return 0;
}