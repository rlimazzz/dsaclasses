#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct departamento Departamento;

struct departamento {
    char nome[100];
    int qtdFuncionarios;
    int anos;
};


typedef struct funcionario Funcionario;

struct funcionario {
    char nomeFuncionario[400];
    int matricula;
    int anosTrabalhados;
    Departamento *departamento;
};

int main() {
    int entr;
    scanf("%d", &entr);
    Funcionario *funcionarios = (Funcionario *) malloc(entr * sizeof(Funcionario));

    for(int i = 0;i < entr;i++) {
        char nomeF[400], nomeD[100];
        int matriculaF, anosF, qtdF, anosE;
        printf("Digite o nome do funcionário a matrícula e os anos de trabalho\n");
        scanf("%s %d %d", nomeF, &matriculaF, &anosF);
        printf("Digite o nome do departamento a quantidade de funcionários e os anos de existência\n");
        scanf("%s %d %d", nomeD, &qtdF, &anosE);
        strcpy(funcionarios->nomeFuncionario, nomeF);
        funcionarios->matricula = matriculaF;
        funcionarios->anosTrabalhados = anosF;

        funcionarios->departamento = (Departamento *) malloc(sizeof(Departamento));
        strcpy(funcionarios->departamento->nome, nomeD);
        funcionarios->departamento->qtdFuncionarios = qtdF;
        funcionarios->departamento->anos = anosE;

        funcionarios+ i;
    }

    for(int i = 0;i < entr;i++) {
        printf("Nome do Funcionario : %s\nMatrícula : %d\nAnos de serviço: %d\n", funcionarios->nomeFuncionario, funcionarios->matricula, funcionarios->anosTrabalhados);
        printf("Nome do departamento : %s\nQuantidade de funcionários : %d\nAnos : %d\n", funcionarios->departamento->nome, funcionarios->departamento->qtdFuncionarios, funcionarios->departamento->anos);
        printf("\n");
        funcionarios + i;
    }
    return 0;
}