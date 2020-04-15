//LEMBRANDO QUE NAO HA TRATAMENTO NOS VALORES RECEBIDOS
#include <stdio.h>

//FUNCAO PARA CALCULAR O FATORIAL DE FORMA RECURSIVA
int fatorial(int numero) {
    if ((numero == 0) || (numero == 1)) {
        return 1;
    } else {
        return numero * fatorial(numero - 1);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int numero = 0;
    printf("Programa para testar o funcionamento da funcao do fatorial de forma recursiva!\n");
    
    printf("\nInforme um numero que deseja saber o fatorial:  ");
    scanf("%d", &numero);

    printf("\nO valor do fatorial eh: %d\n", fatorial(numero));
    return 0;
}