/*
Faca um programa que receba tres numeros, calcule e mostre a multiplicacao desses
numeros.
*/
#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0;
    int resultado = 0;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numero2);

    printf("Informe o terceiro numero inteiro: ");
    scanf("%d", &numero3);

    resultado = numero1 * numero2 * numero3;

    printf("O resultado de (%d x %d x %d) eh igual a %d.\n", numero1, numero2, numero3, resultado);

    return 0;
}