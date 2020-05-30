/*
Faca um programa que receba o valor dos catetos de um triangulo,
calcule e mostre o valor da hipotenusa
*/
#include <stdio.h>
#include <math.h>

int main() {
    double cateto1 = 0.00, cateto2 = 0.00;
    double hipotenusa = 0.00;

    printf("Informe o valor do cateto 1: ");
    scanf("%lf", &cateto1);

    printf("Informe o valor do cateto 2: ");
    scanf("%lf", &cateto2);

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    printf("Hipotenusa e igual a %.2lf.\n", hipotenusa);

    return 0;
}