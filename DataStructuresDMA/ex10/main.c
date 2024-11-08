#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "./pilhaDin/pilhaDin.h"
#include "./pilhaEstatica/pilha.h"

int main(){
    /*Pilha *pilha_fake = cria_Pilha();

    insere_Pilha(pilha_fake, 3);
    insere_Pilha(pilha_fake, 2);

    imprime_pilha(pilha_fake);

    libera_Pilha(pilha_fake);*/

    Pilha *est_fake = estcria_pilha();

    estinsere_pilha(est_fake, 5);
    estinsere_pilha(est_fake, 2);
    estinsere_pilha(est_fake, 3);

    estimprime_pilha(est_fake);

    estlibera_pilha(est_fake);

    return 0;
}

