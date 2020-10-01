#include <stdio.h>
#include <unistd.h>

int main() {
    int numero = 11, i = 0;

    printf("ENDERECO NUMERO: %p\n", &numero);

    while (1) {
        printf("[%d] - Numero = %d\n", i, numero);
        sleep(1);
        i++;
    }

    return 0;
}