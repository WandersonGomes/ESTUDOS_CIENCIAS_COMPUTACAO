#include<stdio.h>
#include <string.h>
#include <math.h> //lembre-se de compilar com -lm

//FUNCAO BASEADA EM ler_inteiro() OBTIDA NO LINK = https://ideone.com/iv7iOt
int lerInteiroPositivo() {
    static double numero = 0.0;
    while ((scanf("%lf", &numero) != 1) || (numero < 1) || (floor(numero) != numero)) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        
        printf("Error: nao foi digitado um numero inteiro positivo!\n");
        
        printf("Tente novamente! Digite um valor inteiro positivo: ");
    }
    return (int)(floor(numero));
}

//PROGRAMA PRINCIPAL
int main() {
    int numero = 0;
    printf("Programa para testar a leitura de apenas valores inteiros positivos!\n");

    printf("\nInforme um valor inteiro positivo: ");
    numero = lerInteiroPositivo();
    
    printf("\nO valor digitado foi: %d\n", numero);
    return 0;
}