//INSERTION SORT
//Obs.:
//Para melhor compreender o processo indico o seguinte video: 
//https://www.youtube.com/watch?v=ROalU379l3U
#include <stdio.h>

#define QTD_ITENS_ARRANJO 6

int main() {
    printf("INSERTION SORT\n");
    int arranjo[] = {5, 2, 4, 6, 1, 3};
    int i = 0, j = 0, chave = 0;

    //apresenta vetor antes da ordenacao
    printf("VETOR NAO ORDENADO:\n");
    for (i = 0; i < QTD_ITENS_ARRANJO; i++) {
        printf("%d ", arranjo[i]);
    }
    printf("\n");

    //ordena o vetor (arranjo)
    for (i = 1; i < QTD_ITENS_ARRANJO; i++) {
        chave = arranjo[i];
        j = i - 1;
        
        while ((j >= 0) && (arranjo[j] < chave)) {
            arranjo[j+1] = arranjo[j];
            j = j - 1;
        }

        arranjo[j+1] = chave;
    }

    //apresenta o resultado
    printf("VETOR ORDENADO:\n");
    for (i = 0; i < QTD_ITENS_ARRANJO; i++) {
        printf("%d ", arranjo[i]);
    }
    printf("\n");

    return 0;
}