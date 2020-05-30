/*
Faca um programa que calcule e mostre a area de um losango.
Sabe-se que: A = (diagonal_maior * diagonal_menor)/2
*/
#include <stdio.h>

int main() {
    double diagonal_maior = 0.00;
    double diagonal_menor = 0.00;
    double area = 0.00;

    printf("Informe o valor da maior diagonal do losango: ");
    scanf("%lf", &diagonal_maior);

    printf("Informe o valor da menor diagonal do losango: ");
    scanf("%lf", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor)/2.00;

    printf("A area do losango eh: %.2lf.\n", area);

    return 0;
}