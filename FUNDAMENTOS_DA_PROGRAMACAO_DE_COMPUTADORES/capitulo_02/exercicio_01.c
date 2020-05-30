/*
Enunciado:
Faca um programa que receba dois numeros, calcule e mostre a subtracao do primeiro
numero pelo segundo. 
*/
#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0;
    int resultado = 0;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Informe um segundo numero inteiro: ");
    scanf("%d", &numero2);

    resultado = numero1 - numero2;

    printf("O resultado de %d - %d eh %d.\n", numero1, numero2, resultado);

    return 0;
}