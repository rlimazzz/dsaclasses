#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char numero[100000];
        int entr, contador = 0;
        scanf("%d", &entr);

        while(1)
        {
            if(entr % 4 == 0) {
                numero[contador] = 'A';
            }
            else if(entr % 4 == 1) {
                numero[contador] = 'C';
            }
            else if(entr % 4 == 2) {
                numero[contador] = 'G';
            }
            else if(entr % 4 == 3) {
                numero[contador] = 'T';
            }
            if(entr / 4 == 0) {
                break;
            }
            contador++;
            entr /= 4;
        } 

        int i = 0;
        for(i = contador;i >= 0;i--) {
            printf("%c", numero[i]);
        }
        printf("\n");
    }
    return 0;
}