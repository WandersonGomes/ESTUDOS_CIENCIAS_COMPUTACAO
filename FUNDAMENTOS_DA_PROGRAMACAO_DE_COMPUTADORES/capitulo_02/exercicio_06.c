/*
Um funcionario recebe um salario fixo mais 4% de comissao sobre as vendas. Faca
um programa que receba o salario fixo de um funcionario e o valor de suas vendas,
calcule e mostre a comissao e o salario final do funcionario.
*/
#include <stdio.h>

#define TAXA_COMISSAO 0.04

int main() {
    double salario_fixo = 0.00, valor_vendas = 0.00;
    double comissao = 0.00, salario_final = 0.00;

    printf("Informe o salario fixo do funcionario: ");
    scanf("%lf", &salario_fixo);

    printf("Informe o valor total das vendas do funcionario: ");
    scanf("%lf", &valor_vendas);

    comissao = valor_vendas * TAXA_COMISSAO;
    salario_final = salario_fixo + comissao;

    printf("Comissao: %.2lf\n", comissao);
    printf("Salario final: %.2lf\n", salario_final);

    return 0;
}