/*
Faca um programa que receba o numero de horas trabalhadas, o valor do salario minimo
e o numero de horas extras trabalhadas. Calcule e mostre o salario a receber seguindo
as regras a seguir:
a) a hora trabalhada vale 1/8 do salario minimo;
b) a hora extra vale 1/4 do salario minimo;
c) o salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da
   hora trabalhada;
d) a quantia a receber pelas horas extras equivale ao numero de horas extras trabalhadas
   multiplicado pelo valor da hora extra;
e) o salario a receber equivale ao salario bruto mais a quantia a receber pelas horas 
   extras.
*/
#include <stdio.h>

int main() {
    int horas_trabalhadas = 0, horas_extras = 0;
    double salario_minimo = 0.00;
    double salario_final = 0.00;

    printf("Informe o valor do salario minimo: ");
    scanf("%lf", &salario_minimo);

    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    printf("Informe a quantidade de horas extras: ");
    scanf("%d", &horas_extras);

    salario_final = (0.125 * salario_minimo * horas_trabalhadas);
    salario_final += (0.25 * salario_minimo * horas_extras);

    printf("O salario que o funcionario vai receber eh: %.2lf.\n", salario_final);

    return 0;
}