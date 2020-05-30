//MERGE SORT
//Obs.:
//Indico o seguinte video para melhor compreensao:
//https://www.youtube.com/watch?v=XaqR3G_NVoo&t=124s
#include <stdio.h>
#include <stdlib.h>

#define QTD_ITENS_ARRANJO 6

void merge(int *arranjo, int inicio, int meio, int fim) {
    int tamanho_esquerda = meio - inicio;
    int tamanho_direita = fim - meio;

    int *esquerda = (int *) malloc(tamanho_esquerda * sizeof(int));
    int *direita = (int *) malloc(tamanho_direita * sizeof(int));

    int i = 0, j = 0, k = 0;
    
    for (i = 0; i < tamanho_esquerda; i++) {
        esquerda[i] = arranjo[inicio + i];
    }
    for (i = 0; i < tamanho_direita; i++) {
        direita[i] = arranjo[meio + i];
    }

    i = 0;
    j = 0;
    k = inicio;

    while ((j < tamanho_direita) && (i < tamanho_esquerda)) {
        if (esquerda[i] < direita[j]) {
            arranjo[k] = esquerda[i];
            k++;
            i++;
        } else {
            arranjo[k] = direita[j];
            k++;
            j++;
        }
    }

    while (i < tamanho_esquerda) {
        arranjo[k] = esquerda[i];
        k++;
        i++;
    }

    while (j < tamanho_direita) {
        arranjo[k] = direita[j];
        k++;
        j++;
    }

    free(esquerda);
    free(direita);
}

void mergeSort(int *arranjo, int inicio, int fim) {
    int meio = 0;
    if (inicio < fim) {
        meio = (inicio+fim)/2;
        mergeSort(arranjo, inicio, meio);
        mergeSort(arranjo, meio+1, fim);
        merge(arranjo, inicio, meio, fim);
    }
}

int main() {
    printf("MERGE SORT\n");
    int arranjo[] = {3, 2, 1, 4, 5, 6};
    int i = 0;

    //vetor nao ordenado
    printf("VETOR NAO ORDENADO:\n");
    for (i = 0; i < QTD_ITENS_ARRANJO; i++) {
        printf("%d ", arranjo[i]);
    }
    printf("\n");

    //ordena
    mergeSort(arranjo, 0, QTD_ITENS_ARRANJO - 1);

    //vetor ordenado
    printf("VETOR ORDENADO:\n");
    for (i = 0; i < QTD_ITENS_ARRANJO; i++) {
        printf("%d ", arranjo[i]);
    }
    printf("\n");

    return 0;
}