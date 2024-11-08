#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhaDin.h"
int main(){
    char entrada[500000];
    scanf("%s", entrada);

    Pilha *pilha_fake = cria_Pilha();

    for(int i =0;i < strlen(entrada);i++) {
        insere_Pilha(pilha_fake, entrada[i]);
    }

    int verifica = 0;
    char teste;
    for(int i =0 ;i < strlen(entrada);i++) {
        char consulta = consulta_topo_Pilha(pilha_fake, teste);
        
        if(consulta != entrada[i]) {
            printf("Não é um palíndromo\n");
            verifica = 1;
            break;
        }

        remove_Pilha(pilha_fake);
    }

    if(!verifica) {
        printf("É um palíndromo\n");
    }

    libera_Pilha(pilha_fake);

    return 0;
}

