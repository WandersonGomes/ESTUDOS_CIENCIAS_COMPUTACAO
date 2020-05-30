/*
Joao recebeu seu salario e precisa pagar duas contas que estao atrasadas. Como as
contas estao atrasadas. Joao tera de pagar multa de 2% sobre cada conta. Faca um programa
que calcule e mostre quanto restara do salario de Joao.
*/
#include <stdio.h>

#define MULTA 1.02 // 2%

int main() {
    double salario = 0.00;
    double conta1 = 0.00, conta2 = 0.00;
    double saldo = 0.00;

    printf("Informe o salario de Joao: ");
    scanf("%lf", &salario);

    printf("Informe o valor da primeira conta: ");
    scanf("%lf", &conta1);

    printf("Informe o valor da segunda conta: ");
    scanf("%lf", &conta2);

    saldo = salario - ((conta1 + conta2) * MULTA);

    printf("Saldo depois de pagar as contas: %.2lf.\n", saldo);

    return 0;
}