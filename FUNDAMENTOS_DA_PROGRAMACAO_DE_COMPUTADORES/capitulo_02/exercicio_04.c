/*
Faca um programa que receba duas notas, calcule e mostre a media ponderada dessas
notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
*/
#include <stdio.h>

#define PESO_02 2
#define PESO_03 3

int main() {
    double nota1 = 0.00, nota2 = 0.00;
    double resultado = 0.00;

    printf("Informe a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%lf", &nota2);

    resultado = ((nota1*PESO_02) + (nota2*PESO_03))/(PESO_02+PESO_03);

    printf("A media ponderada eh: %.2lf.\n", resultado);

    return 0;
}