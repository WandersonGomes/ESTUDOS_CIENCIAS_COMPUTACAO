/*
Faca um programa que receba o raio, calcule e mostre:
a) o comprimento de uma esfera, sabe-se que C = 2(pi)R;
b) a area de uma esfera, sabe-se que A = (pi)R*R;
c) o volume de uma esfera, sabe-se que V = 3/4 (pi) R*R*R
*/
#include <stdio.h>

#define PI 3.14159

int main() {
    double raio = 0.00;
    double comprimento = 0.00;
    double area = 0.00;
    double volume = 0.00;

    printf("Informe o raio da esfera/circunferencia: ");
    scanf("%lf", &raio);

    comprimento = 2 * PI * raio;
    area = PI * raio * raio;
    volume = (3.0/4.0) * PI * (raio * raio * raio);

    printf("Comprimento: %.2lf.\n", comprimento);
    printf("Area: %.2lf.\n", area);
    printf("Volume: %.2lf.\n", volume);

    return 0;
}