/*
Faca um programa que receba a medida do
angulo formado por uma escada apoiada no chao
e a distancia que a escada esta da parede. calcule
e mostre a medida da escada para que se possa
alcancar a ponta da escada.
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double angulo = 0.00;
    double radianos = 0.00;
    double distancia_escada_parede = 0.00;
    double tamanho_escada = 0.00;

    printf("Informe o angulo da escada: ");
    scanf("%lf", &angulo);

    printf("Informe a distancia da escada ate a parede: ");
    scanf("%lf", &distancia_escada_parede);

    radianos = (angulo * PI)/180.00;

    tamanho_escada = distancia_escada_parede * cos(radianos);

    printf("O tamanho da escada eh: %.2lf.\n", tamanho_escada);

    return 0;
}