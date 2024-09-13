#include <stdio.h>

int pedras[60];
int main(){
    int p, s;
    scanf("%d %d", &p, &s);

    while(s--) {
        int pi, di, contador = 1;
        scanf("%d %d", &pi, &di);

        pedras[pi] = 1;
        while(pi + di * contador <= p) {
            pedras[pi + di * contador] = 1;
            contador++;
        }
        contador = 1;
        while(pi - di * contador >= 1 ) {
            pedras[pi - di * contador] = 1;
            contador++;
        }
    }

    int i = 1;
    for(i = 1;i <= p;i++) {
        printf("%d\n", pedras[i]);
    }

    return 0;
}