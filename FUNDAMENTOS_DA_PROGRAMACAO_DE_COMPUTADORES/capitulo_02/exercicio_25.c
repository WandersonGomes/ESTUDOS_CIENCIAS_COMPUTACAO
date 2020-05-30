/*
Faca um programa que receba uma hora (uma variavel para hora e outra para minutos),
calcule e mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a conversao anterior;
c) o total dos minutos convertidos em segundos.
*/
#include <stdio.h>

int main() {
    int hora = 0, minuto = 0;

    printf("Informe a hora: ");
    scanf("%d", &hora);

    printf("Informe os minutos: ");
    scanf("%d", &minuto);


    printf("Hora digitada em minutos: %d.\n", hora * 60);
    printf("Total de minutos: %d.\n", (hora * 60) + minuto);
    printf("Total de segundos: %d.\n", (hora * 60 * 60) + (minuto * 60));

    return 0;
}