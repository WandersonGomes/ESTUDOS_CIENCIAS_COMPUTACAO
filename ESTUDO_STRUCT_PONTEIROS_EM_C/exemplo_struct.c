#include <stdio.h>

//ESTRUTURA PADRAO DE UMA STRUCT
struct apelido {
    //campos (int, char, float, double, structs)
};

//REGISTRO ENDERECO
typedef struct end {
    char rua[30];
    int numero;
    char bairro[30];
} Endereco;

/*
typedef struc nom {
    char primeiro[30];
    char sobrenome[30];
} Nome;
*/

//REGISTRO PESSOA
typedef struct pes {
    char nome[30];
    int idade;
    float peso;
    Endereco endereco;
} Pessoa;

Pessoa preencheDados() {
    Pessoa persona;

    printf("Informe o nome do aluno: ");
    scanf("%s", persona.nome);
    printf("Informe a idade do aluno: ");
    scanf("%d", &persona.idade);
    printf("Informe o peso do aluno: ");
    scanf("%f", &persona.peso);

    printf("Informe a rua: ");
    scanf("%s", persona.endereco.rua);
    printf("Informe o numero da casa: ");
    scanf("%d", &persona.endereco.numero);
    printf("Informe bairro: ");
    scanf("%s", persona.endereco.bairro);

    return persona;
}

void imprimirDados(Pessoa aluno) {
    printf("\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Peso: %g\n", aluno.peso);
    printf("Rua: %s\n", aluno.endereco.rua);
    printf("Numero: %d\n", aluno.endereco.numero);
    printf("Bairro: %s\n", aluno.endereco.bairro);
}

int main() {
    Pessoa aluno1, aluno2;

    //ler dados do aluno
    printf("ALUNO 1\n");
    aluno1 = preencheDados();
    printf("\n");
    printf("ALUNO 2:\n");
    aluno2 = preencheDados();

    //apresenta os dados lidos
    imprimirDados(aluno1);
    imprimirDados(aluno2);

    return 0;
}