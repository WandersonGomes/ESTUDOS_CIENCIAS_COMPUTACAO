/*
Faca um programa que receba a medida de dois angulos de um triangulo, calcule e
mostre a medida do terceiro angulo. Sabe-se que a soma dos angulos de um triangulo e 180.
*/
#include <stdio.h>

int main() {
    double angulo1 = 0.00, angulo2 = 0.00, angulo3 = 0.00;

    printf("Informe o primeiro angulo interno do triangulo: ");
    scanf("%lf", &angulo1);

    printf("Informe o segundo angulo interno do triangulo: ");
    scanf("%lf", &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);

    printf("O terceiro angulo do triangulo tem %.2lf graus.\n", angulo3);
    return 0;
}