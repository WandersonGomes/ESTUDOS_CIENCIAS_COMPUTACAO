//PARA MAIS INFORMACOES COMO EH FEITA A IMPLENTACAO DE UMA OLHADA
//NA VIDEOS AULA DO SEGUINTE CANAL:
//https://www.youtube.com/watch?v=d3rSW_1l6mo
//IMPLEMENTACAO DE UMA ARVORE BINARIA DE BUSCA
#include <stdio.h>
#include <stdlib.h>

//ITEM CONTEUDO DE UM NO
struct item {
    int valor;
};
typedef struct item Item;


//NO DE UMA ARVORE
struct no {
    Item item;
    struct no *esquerdo;
    struct no *direito;
};
typedef struct no No;

//FUNCAO PARA INICIALIZAR UMA ARVOVE
//serve mais para legibilidade da logica
No* inicializaArvore() {
    return NULL;
}

//FUNCAO PARA CRIAR UM ITEM
Item criaItem(int valor) {
    Item item;
    item.valor = valor;
    return item;
}

//FUNCAO QUE INSERE UM NO NA ARVORE
No *insereNoArvore(No *no, Item item) {
    No *aux = NULL;
    if (no == NULL) {
        aux = (No *)malloc(sizeof(No));
        aux->item = item;
        aux->esquerdo = NULL;
        aux->direito = NULL;
        return aux;
    } else {
        if (item.valor < no->item.valor) {
            no->esquerdo = insereNoArvore(no->esquerdo, item);
        } else if (item.valor > no->item.valor) {
            no->direito = insereNoArvore(no->direito, item);
        }
    }

    return no;
}

//FUNCAO QUE IMPRIME UMA ARVORE
void imprimiArvore(No *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->item.valor);
        imprimiArvore(raiz->esquerdo);
        imprimiArvore(raiz->direito);
    }
}

//FUNCAO QUE BUSCA UM ELEMENTO EM UMA ARVORE
No *pesquisaItemArvore(No *no, int valor) {
    if (no != NULL) {
        if (no->item.valor == valor) { 
            return no;
        } else {
            if (valor < no->item.valor) {
                return pesquisaItemArvore(no->esquerdo, valor);
            } else {
                return pesquisaItemArvore(no->direito, valor);
            }
        }
    }

    return NULL;
}

//FUNCAO QUE ENCONTRA O MENOR ITEM DE UMA ARVORE
No *econtraItemMinimoArvore(No *raiz) {
    No *aux = NULL;
    if (raiz != NULL) {
        aux = raiz;
        while (aux->esquerdo != NULL) {
            aux = aux->esquerdo;
        }
        return aux;
    }
    return NULL;
}


//FUNCAO QUE REMOVE UM ITEM DA ARVORE
No *removeElemento(No *raiz, int valor) {
    No *aux = NULL;
    Item item_aux;

    if (raiz != NULL) {
        if (valor > raiz->item.valor) {
            raiz->direito = removeElemento(raiz->direito,valor);
            return raiz;
        }
        if (valor < raiz->item.valor) {
            raiz->esquerdo = removeElemento(raiz->esquerdo, valor);
            return raiz;
        }

        //encontrou o elemento
        if (valor == raiz->item.valor) {
            //eh um no folha (nao tem filhos)
            if ((raiz->esquerdo == NULL) && (raiz->direito == NULL)) {
                free(raiz);
                return NULL;
            }

            //tem apenas um filho
            if ((raiz->esquerdo != NULL) && (raiz->direito == NULL)) {
                aux = raiz->esquerdo;
                free(raiz);
                return aux;
            }
            if ((raiz->direito != NULL) && (raiz->esquerdo == NULL)) {
                aux = raiz->direito;
                free(raiz);
                return aux;
            }

            //tem dois filhos
            if ((raiz->direito != NULL) && (raiz->esquerdo != NULL)) {
                aux = econtraItemMinimoArvore(raiz);
                item_aux = aux->item;
                raiz = removeElemento(raiz, item_aux.valor);
                raiz->item = item_aux;
                return raiz;
            }
        }
    }

    return NULL;
}

//FUNCAO QUE LIMPAR A ARVORE
void limpaArvore(No *raiz) {
    if (raiz != NULL) {
        limpaArvore(raiz->esquerdo);
        limpaArvore(raiz->direito);
        free(raiz);
    }
}

//PROGRAMA PRINCIPAL
int main() {
    No *raiz = inicializaArvore();

    raiz = insereNoArvore(raiz, criaItem(10));
    raiz = insereNoArvore(raiz, criaItem(15));
    raiz = insereNoArvore(raiz, criaItem(20));
    raiz = insereNoArvore(raiz, criaItem(12));
    raiz = insereNoArvore(raiz, criaItem(5));

    imprimiArvore(raiz);
    printf("\n");
    raiz = removeElemento(raiz, 15);
    imprimiArvore(raiz);
    printf("\n");

    limpaArvore(raiz);

    return 0;
}