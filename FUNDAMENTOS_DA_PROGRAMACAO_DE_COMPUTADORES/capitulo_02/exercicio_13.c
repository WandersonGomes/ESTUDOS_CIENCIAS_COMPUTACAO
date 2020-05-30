/*
Faca um programa que calcule e mostre a tabuada de um numero digitado pelo usuario.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero para gera a tabuada: ");
    scanf("%d", &numero);

    printf("%d x %d = %d\n", numero, 1, (numero * 1));
    printf("%d x %d = %d\n", numero, 2, (numero * 2));
    printf("%d x %d = %d\n", numero, 3, (numero * 3));
    printf("%d x %d = %d\n", numero, 4, (numero * 4));
    printf("%d x %d = %d\n", numero, 5, (numero * 5));
    printf("%d x %d = %d\n", numero, 6, (numero * 6));
    printf("%d x %d = %d\n", numero, 7, (numero * 7));
    printf("%d x %d = %d\n", numero, 8, (numero * 8));
    printf("%d x %d = %d\n", numero, 9, (numero * 9));
    printf("%d x %d = %d\n", numero, 10, (numero * 10));

    return 0;
}