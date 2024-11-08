#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhaDin.h"
int main(){
    char entrada[500000];
    Pilha *pilha_abre = cria_Pilha();
    scanf("%s", entrada);

    for(int i =0; i < strlen(entrada);i++) {
        if(entrada[i] == '(') {
            insere_Pilha(pilha_abre, '(');
        }
        else if(entrada[i] == ')') {
            if(tamanho_Pilha(pilha_abre) > 0) {
                remove_Pilha(pilha_abre);
            }else {
                printf("Não está completa pois existem ) sem pares\n");
                break;
            }
        }
    }

    if(tamanho_Pilha(pilha_abre) > 0) {
        printf("Não está completa pois existem ( sem pares\n");
    }else {
        printf("Está completa pois todos parenteses tem pares e se completam\n");
    }

    libera_Pilha(pilha_abre);

    return 0;
}

