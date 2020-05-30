//PESQUISA BINARIA
#include <stdio.h>

#define QTD_ITENS 13

int pesquisaBinaria(int *arranjo, int inicio, int fim, int valor) {
    int meio = (fim+inicio)/2;
    if (valor == arranjo[meio]) {
        return meio;
    } else {
        if (valor < arranjo[meio]) {
            return pesquisaBinaria(arranjo, inicio, meio, valor);
        } else {
            return pesquisaBinaria(arranjo, meio+1, fim, valor);
        }
    }
    return -1;
}

int main() {
    int arranjo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int valor = 0, posicao = 0;

    posicao = pesquisaBinaria(arranjo, 0, QTD_ITENS-1, 10);

    printf("%d\n", posicao+1);

    return 0;
}