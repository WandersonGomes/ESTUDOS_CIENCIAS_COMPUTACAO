/*
Faca um programa que receba o preco de um produto, calcule e mostre o novo preco,
sabendo-se que este sofreu um desconto de 10%.
*/
#include <stdio.h>

int main() {
    double preco = 0.00;
    double resultado = 0.00;

    printf("Informe o preco do produto: ");
    scanf("%lf", &preco);

    resultado = preco * 0.9;

    printf("O valor do produto com 10%% de desconto eh: %.2lf.\n", resultado);

    return 0;
}