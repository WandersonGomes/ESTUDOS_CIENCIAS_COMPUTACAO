/*
Faca um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.
*/
#include <stdio.h>

int main() {
    double peso = 0.00, engordar = 0.00, emagrecer = 0.00;

    printf("Informe o peso da pessoa: ");
    scanf("%lf", &peso);

    engordar = peso * 1.15;
    emagrecer = peso * 0.80;

    printf("Se a pessoa engordar 15%% tera o seguinte peso: %.2lf.\n", engordar);
    printf("Se a pessoa emagrecer 20%% tera o seguinte peso: %.2lf.\n", emagrecer);

    return 0;
}