#include <stdio.h>

void alteraNumero(int *num) {
    printf("Informe outro valor: ");
    scanf("%d", num);
}

void alteraVetor(int *vetor, int tam) {
    int i = 0;
    for (i = 0; i < tam; i++) {
        vetor[i] = vetor[i] + 1;
    }
}

void imprimirVetor(int *vetor, int tam) {
    int i = 0;
    int *ponteiro = vetor;
    for (i = 0; i < tam; i++) {
        printf("%d\n", (*ponteiro));
        ponteiro = ponteiro + 1;
    }
}

typedef struct pes {
    int id;
    int idade;
} Pessoa;

void alteraIdade(Pessoa *aluno) {
    printf("Informe a nova idade: ");
    scanf("%d", &aluno->idade);
}


int main() {
    Pessoa aluno1;
    aluno1.id = 1;
    aluno1.idade = 18;
    
    printf("Idade: %d\n", aluno1.idade);
    alteraIdade(&aluno1);
    printf("Idade alterada: %d\n", aluno1.idade);

    //vetor
    int vetor[5] = {1, 2, 3, 4, 5};

    //variaveis
    int numero = 10;
    float nota = 11.0;
    char letra = 'A';

    //ponteiros
    int *ponteiro_inteiro;
    float *ponteiro_float;
    char *ponteiro_char;

    ponteiro_inteiro = &numero;
    ponteiro_float = &nota;
    ponteiro_char = &letra;

    printf("VETOR ANTES = \n");
    imprimirVetor(vetor, 5);

    alteraVetor(vetor, 5);
    printf("VETOR DEPOIS = \n");
    imprimirVetor(vetor, 5);

    printf("Endereco na memoria RAM:\n");
    printf("END. NUMERO = %p\n", ponteiro_inteiro);
    printf("END. NOTA = %p\n", ponteiro_float);
    printf("END. LETRA = %p\n", ponteiro_char);
    printf("\n");

    alteraNumero(&numero);

    printf("\n");
    printf("NUMERO = %d\n", (*ponteiro_inteiro));
    printf("NOTA = %g\n", (*ponteiro_float));
    printf("LETRA = %c\n", (*ponteiro_char));

    return 0;
}