/*
Faca um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse
peso em gramas.
*/
#include <stdio.h>

int main() {
    double peso = 0.00, gramas = 0.00;

    printf("Informe o peso da pessoa em quilogramas: ");
    scanf("%lf", &peso);

    gramas = peso * 1000;

    printf("O peso em gramas eh: %.2lf.\n", gramas);

    return 0;
}