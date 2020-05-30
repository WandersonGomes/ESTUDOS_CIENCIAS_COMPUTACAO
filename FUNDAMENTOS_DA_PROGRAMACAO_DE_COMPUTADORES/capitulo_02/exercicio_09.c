/*
Faca um programa que calcule e mostre a area de um trapezio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
*/
#include <stdio.h>

int main() {
    double base_maior = 0.00, base_menor = 0.00, altura = 0.00;
    double area = 0.00;

    printf("Informe a base maior do trapezio: ");
    scanf("%lf", &base_maior);
    
    printf("Informe a base menor do trapezio: ");
    scanf("%lf", &base_menor);

    printf("Informe a altura do trapezio: ");
    scanf("%lf", &altura);

    area = ((base_maior + base_menor) * altura)/2.00;

    printf("A area do trapezio eh: %.2lf.\n", area);

    return 0;
}