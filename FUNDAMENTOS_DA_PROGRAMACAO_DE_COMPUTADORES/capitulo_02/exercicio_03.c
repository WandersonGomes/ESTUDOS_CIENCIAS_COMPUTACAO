/*
Faca um programa que receba dois numeros, calcule e mostre a divisao do primeiro
numero pelo segundo. Sabe-se que o segundo numero nao pode ser zero, portanto nao
e necessario se preocupar com validacoes.
*/
#include <stdio.h>

int main() {
    double numero1 = 0.00, numero2 = 0.00;
    double resultado = 0.00;

    printf("Informe o primeiro numero: ");
    scanf("%lf", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%lf", &numero2);

    resultado = numero1/numero2;

    printf("O resultado de %.2lf/%.2lf eh %.2lf.\n", numero1, numero2, resultado);

    return 0;
}