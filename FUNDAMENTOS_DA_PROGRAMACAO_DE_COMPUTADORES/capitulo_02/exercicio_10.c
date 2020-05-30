/*
Faca um programa que calcule e mostre a area de um quadrado.
Sabe-se que: A = lado * lado
*/
#include <stdio.h>

int main() {
    double lado = 0.00, area = 0.00;

    printf("Informe o valor do lado do quadrado: ");
    scanf("%lf", &lado);

    area = lado * lado;

    printf("A area do quadrado eh: %.2lf.\n", area);

    return 0;
}