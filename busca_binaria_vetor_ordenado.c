#include <stdio.h>

//ALGORITMO DE BUSCA BINARIA EM VETOR ORDENADO
int buscaBinaria(int valor_pesquisado, int *vetor, int inicio, int fim) {
    int meio = (fim + inicio)/2;

    if (inicio == fim) {
        if (vetor[inicio] == valor_pesquisado) {
            return inicio;
        } else {
            return -1;
        }
    }

    if (vetor[meio] == valor_pesquisado) {
        return meio;
    }


    if (valor_pesquisado > vetor[meio]) {
        return buscaBinaria(valor_pesquisado, vetor, meio + 1, fim);
    } else {
        return buscaBinaria(valor_pesquisado, vetor, inicio, meio);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int valor = 0;

    while (1) {
        scanf("%d", &valor);
        printf("%d\n", buscaBinaria(valor, vetor, 0, 9));
    }
    return 0;
}