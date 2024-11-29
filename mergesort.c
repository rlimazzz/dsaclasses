#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//Função para printar o nosso vetor de inteiros na tela
void printfVet(int *V  , int N){
    int i;
    for(i = 0; i < N; i++)
        printf("%2d ",V[i]);
    printf("\n");
}


void merge(int *V, int inicio, int meio, int fim){
    //criamos um vetor temp para analisarmos os nossos valores
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i=0; i<tamanho; i++){
            //ordenando o vetor, comparando o inicio e o meio

            //enquanto não for o fim do nosso vetor temp
            if(!fim1 && !fim2){
                //se o elemento do inicio for menor que o elemento do meio
                if(V[p1] < V[p2])
                //entao vamos copiar o inicio para o temp
                    temp[i]=V[p1++];
                else
                //caso contrario vamos copiar o meio para o temp
                    temp[i]=V[p2++];

                //se o inicio ou o meio chegarem ao fim, vamos marcar o fim daquele vetor
                if(p1>meio) fim1=1;
                if(p2>fim) fim2=1;
            }else{

                if(!fim1)
                //se o inicio chegou ao fim, vamos copiar o meio para o temp
                    temp[i]=V[p1++];
                else
                //caso contrario vamos copiar o fim para o temp
                    temp[i]=V[p2++];
            }
        }
        //agora vamos copiar o nosso vetor temp para o nosso vetor principal
        for(j=0, k=inicio; j<tamanho; j++, k++)
            V[k]=temp[j];
    }
    free(temp);
}

//aqui começa o mergesort onde precisamos do mergeSorte para dividir o vetor em 2 partes e assim sucessivamente
//até que o vetor inteiro esteja ordenado, o que seria nosso caso base
//a variável meio serve para dividir o vetor em 2 partes
//a função mergeSort divide o vetor em 2 partes do inicio ao meio e do meio ao fim
//como é uma função recursiva, vamos supor que temos um vetor {5, 4 ,3 , 9, 10} iremos dividir ele sucessivamente em
//{5, 4} e {3, 9, 10} e assim sucessivamente em {5, 4}, {3}, {9, 10} e assim sucessivamente em {5}, {4}, {3}, {9}, {10}
void mergeSort(int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        mergeSort(V,inicio,meio);
        mergeSort(V,meio+1,fim);
        merge(V,inicio,meio,fim);
    }
}

int main(){

    //o vetor que vamos ordenar
    int vet[8] = {0,23,4,67,-8,90,54,21};
    int N = 8;

    printf("Sem ordenar:\n");
    printfVet(vet,N);

    mergeSort(vet,0,N-1);//OK

    printf("Ordenado:\n");
    printfVet(vet,N);

    return 0;
}
