//ALGORITMO MERGE SORT IMPLEMENTADO EM C
//Dicas:
//Video aulas de referencia:
//aula01 = https://www.youtube.com/watch?v=y5TcUJN7bfw
//aula02 = https://www.youtube.com/watch?v=wazt8PVKAN0&t=261s
#include <stdio.h>
#include <stdlib.h> //para utilizar malloc

#define MAX 10


//FUNCAO MERGE (JUNTA AS DUAS PARTES)
void merge(int *vetor, int inicio, int meio, int fim) {
    int *esquerda = (int *)malloc((meio - inicio + 1) * sizeof(int));
    int *direita = (int *)malloc((fim - meio + 1) * sizeof(int));

    //preenche os auxiliares direita e esquerda
    int i = 0, j = 0;
    for (i = inicio; i <= meio; i++) {
        esquerda[j] = vetor[i];
        j++;
    }
    int tamanho_esquerda = j - 1;

    j = 0;
    for (i = meio+1; i <= fim; i++) {
        direita[j] = vetor[i];
        j++;
    }
    int tamanho_direita = j - 1;

    //o processo de juncao
    int aux_direita = 0;
    int aux_esquerda = 0;
    i = inicio;

    while ((aux_direita <= tamanho_direita) && (aux_esquerda <= tamanho_esquerda)) {
        if (esquerda[aux_esquerda] <= direita[aux_direita]) {
            vetor[i] = esquerda[aux_esquerda];
            aux_esquerda++;
            i++;
        } else {
            vetor[i] = direita[aux_direita];
            aux_direita++;
            i++;
        }
    }
    //pega o restante
    while (aux_esquerda <= tamanho_esquerda) {
        vetor[i] = esquerda[aux_esquerda];
        aux_esquerda++;
        i++;
    }

    while (aux_direita <= tamanho_direita) {
        vetor[i] = direita[aux_direita];
        aux_direita++;
        i++;
    }

    //libera o espaco que foi utilizados pelas auxiliares
    free(esquerda);
    free(direita);
}

//O VERDADEIRO MERGE SORT
void _mergeSort(int* vetor, int inicio, int fim) {
    int meio = 0;

    if (inicio < fim) {
        meio = (inicio + fim)/2;
        //direita
        _mergeSort(vetor,inicio,meio);
        //esquerda
        _mergeSort(vetor, meio+1, fim);
        //junta as duas partes
        merge(vetor, inicio, meio, fim);
    }
}

//INTERFACE PARA A FUNCAO MERGE SORT
void mergeSort(int *vetor, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    _mergeSort(vetor, inicio, fim);
}


//PROGRAMA PRINCIPAL
int main() {
    int vetor[MAX];
    int tamanho = MAX;
    int i = 0;

    //preenche o vetor com 1000 numeros
    for (i = MAX; i > 0; i--) {
        vetor[MAX-i] = i;
    }

    //apresenta o vetor original
    printf("Vetor original = [");
    for (i = 0; i < MAX-1; i++) {
        printf("%d, ", vetor[i]);
    }
    printf("%d]\n\n", vetor[i]);

    //ordena o vetor utilizando o merge sort
    mergeSort(vetor,tamanho);

    //apresenta o vetor ordenado
    printf("Vetor ordenado = [");
    for (i = 0; i < tamanho - 1; i++) {
        printf("%d, ", vetor[i]);
    }
    printf("%d]\n", vetor[i]);

    return 0;
}