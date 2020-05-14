//ALGORITMO USADO PARA MOSTRAR OS MOVIMENTOS NECESSARIOS PARA O MOVIMENTO DE DISCOS DA TORRE DE HANOI
//video aula sobre o assunto: https://www.youtube.com/watch?v=X-I53cLjidg
#include <stdio.h>

//FUNCAO QUE APRESENTA OS MOVIMENTOS
void movimentosDiscos(int numero_discos, char origem, char destino, char auxiliar) {
    if (numero_discos == 1) {
        printf("Mova o disco %d de %c para %c\n", numero_discos, origem, destino);
        return;
    }

    movimentosDiscos(numero_discos - 1, origem, auxiliar, destino);
    printf("Mova o disco %d de %c para %c\n", numero_discos, origem, destino);
    movimentosDiscos(numero_discos - 1, auxiliar, destino, origem);
}


//PROGRAMA PRINCIPAL
int main() {
    printf("Movimentos para 1 disco:\n");
    movimentosDiscos(1,'A','C','B');
    printf("\nMovimentos para 2 disco:\n");
    movimentosDiscos(2,'A','C','B');
    printf("\nMovimentos para 2 disco:\n");
    movimentosDiscos(3,'A','C','B');
    return 0;
}