/*
Faca um programa que receba o ano de nascimento de uma pessoa e o ano atual,
calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.
Considere o ano como tendo 360 dias.
E que a pessoa tenha nascido e no mesmo dia que a informacao foi dada.
*/
#include <stdio.h>

int main(){
    int ano_atual = 0, ano_nascimento = 0;
    int anos = 0, meses = 0, dias = 0, semanas = 0;

    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Informe o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    anos = ano_atual - ano_nascimento;
    meses = 12 * anos;
    dias = 30 * meses;
    semanas = dias/7;

    printf("Idade em:\n");
    printf("Anos: %d\n", anos);
    printf("Meses: %d\n", meses);
    printf("Dias: %d\n", dias);
    printf("Semanas: %d\n", semanas);

    return 0;
}