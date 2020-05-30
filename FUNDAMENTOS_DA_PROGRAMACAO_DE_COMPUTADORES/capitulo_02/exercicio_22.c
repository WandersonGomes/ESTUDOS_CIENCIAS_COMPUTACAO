/*
Faca um programa que receba o numero de lados de um poligono convexo, calcule e
mostre o numero de diagonais desse poligono, onde N e o numero de lados do poligono.
Sabe-se que ND = N(N - 3)/2
*/
#include <stdio.h>

int main() {
    int numero_lados = 0;
    int numero_diagonais = 0;

    printf("Informe o numero de lados do poligono: ");
    scanf("%d", &numero_lados);

    numero_diagonais = (numero_lados*(numero_lados - 3))/2;

    printf("O numero de diagonais do poligono eh: %d.\n", numero_diagonais);

    return 0;
}