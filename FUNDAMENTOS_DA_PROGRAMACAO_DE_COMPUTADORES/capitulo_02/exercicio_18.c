/*
Faca um programa que receba uma temperatura em Celsius, calcule e mostre essa
temperatura em Fahrenheit.
Sabe-se que F = 180(C + 32)/100.
Formula acima ta errada.
A correta para um problema certo seria: 
F = (9/5 * C) + 32
*/
#include <stdio.h>

int main() {
    double celsius = 0.00, fahrenheit = 0.00;

    printf("Informe o valor em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = ((9.0/5.0) * celsius) + 32;

    printf("A temperatura em Fahrenheit eh %.2lf.\n", fahrenheit);

    return 0;
}