//FIBONACCI RECURSIVO
#include <stdio.h>
#include <math.h> //lembre-se de compilar com (-lm)

//CONSTANTES PARA CORES
#define VERMELHO 1
#define VERDE 3
#define PADRAO 0

//FUNCAO QUE RETORNA O VALOR DO TERMO DA SEQUENCIA FIBONACCI DE FORMA RECURSIVA
int fibonacciRecursiva(int termo) {
    if ((termo == 1) || (termo == 2)) {
        return 1;
    } else {
        return fibonacciRecursiva(termo - 1) + fibonacciRecursiva(termo - 2);
    }
}

//FUNCAO QUE MUDA A COR DO TEXTO BASEADA EM LINK = http://web.theurbanpenguin.com/adding-color-to-your-output-from-c/
void mudaCor(int cor){
    switch (cor)
    {
    //vermelho
    case 1:
        printf("\033[0;31m");
        break;
    //verde
    case 3:
        printf("\033[0;32m");
        break;
    //padrao
    default:
        printf("\033[0m");
        break;
    }
}

//FUNCAO BASEADA EM ler_inteiro() OBTIDA NO LINK = https://ideone.com/iv7iOt
int lerInteiroPositivo() {
    static double numero = 0.0;
    while ((scanf("%lf", &numero) != 1) || (numero < 1) || (floor(numero) != numero)) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        
        mudaCor(VERMELHO);
        printf("Error: nao foi digitado um numero inteiro positivo!\n");
        
        mudaCor(PADRAO);
        printf("Tente novamente! Digite um valor inteiro positivo: ");
    }
    return (int)(floor(numero));
}

//PROGRAMA PRINCIPAL
int main() {
    int termo = 0;

    printf("Funcao fibonacci recursiva!\n");
    printf("Informe o termo da sequencia de fibonacci que voce quer saber:\n");    
    
    termo = lerInteiroPositivo();
    
    mudaCor(VERDE);
    printf("\nO %dº termo da sequencia eh: %d\n", termo,fibonacciRecursiva(termo));
    
    return 0;
}