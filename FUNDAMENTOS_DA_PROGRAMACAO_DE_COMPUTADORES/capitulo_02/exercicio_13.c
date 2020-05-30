/*
Faca um programa que calcule e mostre a tabuada de um numero digitado pelo usuario.
*/
#include <stdio.h>

int main() {
    int numero = 0, i = 0;

    printf("Informe um numero para gera a tabuada: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, (numero * i));
    }

    return 0;
}