//ESTUDO SOBRE PROGRAMACAO DINAMICA
//O PROBLEMA DA MOCHILA
//link video aula da Aline Regioli = https://www.youtube.com/watch?v=m1s8KOWgsKI&t=1569s
#include <stdio.h>

#define MAX 50
#define MAX_CAPACIDADE 200

//ARRAY PARA ARMAZENAR OS DADOS JA CALCULADOS
int memo[MAX][MAX_CAPACIDADE];

//MAX
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

//FUNCAO QUE DEVOLVE O MAIOR VALOR QUE SE PODE TER NA MOCHILA DO LADRAO
int mochila(int pos, int cap, int quantidade_itens, int pesos[MAX], int custos[MAX]) {
    int resultado = 0, tmp = 0;

    //SE ESGOTOU TODOS OS ITENS OU SE A CAPACIDADE FOI COMPLETADA
    if ((pos == quantidade_itens) || (cap == 0)) {
        return 0;
    }

    //VERIFICA SE O VALOR JA FOI CALCULADO
    if (memo[pos][cap] != -1) {
        return memo[pos][cap];
    }

    //EXECUTA CASO NAO PEGUE NENHUM ITEM
    resultado = mochila(pos + 1, cap, quantidade_itens, pesos, custos);
    
    if (pesos[pos] <= cap) {
        //QUANDO PEGA ALGUM ITEM
        tmp = custos[pos] + mochila(pos + 1, cap - pesos[pos], quantidade_itens--, pesos, custos);
        //PEGA O MAIOR RESULTADO
        resultado = max(resultado, tmp);
    }

    memo[pos][cap] = resultado;
    return resultado;
}

//PROGRAMA PRINCIPAL
int main() {
    int pesos[MAX], custos[MAX];
    int quantidade_itens = 0, capacidade = 0;

    //ler os dados do arquivo
    freopen("./input_problema_mochila.txt", "r", stdin);

    scanf("%d %d", &quantidade_itens, &capacidade);

    //inicializa memo
    int i = 0, j = 0;
    for (; i < MAX; i++) {
        for (j = 0; j < MAX_CAPACIDADE; j++) {
            memo[i][j] = -1;
        }
    } 


    //preenche os itens
    for(i = 0; i < quantidade_itens; i++) {
        scanf("%d %d", &pesos[i], &custos[i]);
    }

    //apresenta o resultado
    printf("%d\n", mochila(0,capacidade, quantidade_itens, pesos, custos));

    return 0;
}