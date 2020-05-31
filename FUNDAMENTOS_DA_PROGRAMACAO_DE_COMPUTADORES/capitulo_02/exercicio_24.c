/*
Faca um programa que receba a quantidade de dinheiro em reais que uma pessoa que
vai viajar possui. Essa pessoa vai passar por varios paises e precisa converter seu dinheiro
em dolares, marco alemao e libra esterlina. Sabe-se que a cotacao do dolar e de R$ 1.80, do 
marco alemao e de R$ 2.00 e da libra esterlina e de R$ 1.57. O programa deve fazer as
conversoes e mostra-las.
*/
#include <stdio.h>

int main() {
    double reais = 0.00;
    double dolares = 0.00, marco = 0.00, libra = 0.00;

    printf("Informe a quantidade de reais: ");
    scanf("%lf", &reais);

    dolares = reais * 1.80;
    marco = reais * 2.00;
    libra = reais * 1.57;

    printf("O valor em dolares eh: %.2lf.\n", dolares);
    printf("O valor em marco alemao eh: %.2lf.\n", marco);
    printf("O valor em libras esterlinas eh: %.2lf.\n", libra);

    return 0;
}