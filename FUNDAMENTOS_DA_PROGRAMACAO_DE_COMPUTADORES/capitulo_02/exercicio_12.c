/*
Faca um programa que receba o valor do salario minimo e o valor do salario de um
funcionario, calcule e mostre a quantidade de salarios minimos que ganha esse funcionario.
*/
#include <stdio.h>

int main() {
    double salario_minimo = 0.00;
    double salario_funcionario = 0.00;
    double resultado = 0.00;

    printf("Informe o valor do salario minimo: ");
    scanf("%lf", &salario_minimo);

    printf("Informe o valor do salario do funcionario: ");
    scanf("%lf", &salario_funcionario);

    resultado = salario_funcionario/salario_minimo;

    printf("O funcionario recebe %.2lf salario(s) minimo(s).\n", resultado);

    return 0;
}