#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct endereco {
    char logradouro[50];
    int numero;
    char bairro[50];
    char complemento[100];
    int cep;
    char cidade[50];
    char estado[50];
};

struct pessoa {
    char nomeCompleto[100];
    int idade;
    struct endereco enderecoPessoa;
};

int main() {
    struct pessoa oi;
    struct endereco end;
    end.numero = 110;
    end.cep = 102301;
    strcpy(end.logradouro, "aaaaa");
    strcpy(end.bairro, "vila");
    strcpy(end.complemento, "casa cinza");
    strcpy(end.cidade, "GYN");
    strcpy(end.estado, "Goiás");

    oi.enderecoPessoa = end;
    oi.idade = 18;
    strcpy(oi.nomeCompleto, "Ryan");

    printf("Nome : %s\n", oi.nomeCompleto);
    printf("Idade : %d\n", oi.idade);
    printf("Logradouro : %s\n", oi.enderecoPessoa.logradouro);
    printf("Número : %d\n", oi.enderecoPessoa.numero);
    printf("Bairro : %s\n", oi.enderecoPessoa.bairro);
    printf("Complemento : %s\n", oi.enderecoPessoa.complemento);
    printf("Cep : %d\n", oi.enderecoPessoa.cep);
    printf("Cidade : %s\n", oi.enderecoPessoa.cidade);
    printf("Estado : %s\n", oi.enderecoPessoa.estado);

    return 0;
}
