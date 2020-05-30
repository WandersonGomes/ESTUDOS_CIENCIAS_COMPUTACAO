/*
Sabe-se que para iluminar de maneira correta os comodos de uma casa, para cada m2,
deve-se usar 18W de potencia. Faca um programa que receba as duas dimensoes de um
comodo (em metros), calcule e mostre sua area (em m2) e a potencia de iluminacao que
devera ser utilizada.
*/
#include <stdio.h>

int main() {
    double largura = 0.00, comprimento = 0.00;
    double area = 0.00, potencia = 0.00;

    printf("Informe a largura do comodo: ");
    scanf("%lf", &largura);

    printf("Comprimento do comodo: ");
    scanf("%lf", &comprimento);

    area = largura * comprimento;
    potencia = area/18.0;

    printf("A potencia necessaria para iluminar o comodo eh: %.2lfW.\n", potencia);

    return 0;
}