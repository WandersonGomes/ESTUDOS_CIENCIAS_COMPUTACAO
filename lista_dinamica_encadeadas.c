/*
Lista Dinamica Encadeada
Para mais informacoes acesse as video aulas desse canal:
https://www.youtube.com/watch?v=e3xCN3Ff3es&t=83s
*/
#include <stdio.h>
#include <stdlib.h>

//ESTRUTURA QUE ARMAZENA O DADOS ARMAZENADOS NA LISTA
typedef struct dataNode {
    int id;
} DataNode;

//ESTRUTURA DOS NOS DA LISTA
typedef struct node {
    DataNode data;
    struct node* next;
} Node;

//ESTRUTURA DA CABECA DA LISTA
typedef struct list {
    int size;
    Node* head;
} List;


//FUNCAO QUE CRIA A LISTA (INICIALIZA)
List* createList() {
    List* list = (List *) malloc(sizeof(List));
    list->size = 0;
    list->head = NULL;
    return list;
}

//FUNCAO QUE INSERE UM ELEMENTO NO INICIO DA LISTA
void push(List* list, DataNode data) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}

//FUNCAO QUE INFORMA SE A LISTA ESTA VAZIA
int isEmpty(List* list) {
    return (list->size == 0);
}

//FUNCAO QUE IMPRIME OS ELEMENTOS DA LISTA
void printList(List* list) {
    if (isEmpty(list)) {
        printf("List is empty!\n");
        return;
    }

    Node* pointer = list->head;
    while (pointer != NULL) {
        printf("%d ", pointer->data.id);
        pointer = pointer->next;
    }
    printf("\n");
}

//FUNCAO QUE REMOVE O PRIMEIRO ELEMENTO
void pop(List* list) {
    if (!isEmpty(list)) {
        Node* pointer = list->head;
        list->head = pointer->next;
        free(pointer);
        list->size--;
    }
}

//FUNCAO QUE RETORNA OS DADOS DE UM DETERMINADO INDICE
Node* atPos(List* list, int index) {
    if ((index >= 0) && (index < list->size)) {
        Node* node = list->head;

        int i = 0;
        for (i = 0; i < index; i++) {
            node = node->next;
        }

        return node;        
    }
    printf("Invalid index!\n");
    return NULL;
}

//FUNCAO QUE RETORNA O INDICE DE UM DETERMINADO DADO
int indexOf(List* list, Node* node) {
    if (node != NULL) {
        Node* pointer = list->head;

        int index = 0;
        while (pointer != node && pointer != NULL) {
            pointer = pointer->next;
            index++;
        }

        if (pointer != NULL) {
            return index;
        }
    }
    printf("Node not in List!\n");
    return -1;
}

//FUNCAO QUE REMOVE UM ELEMENTO DA LISTA DADO UM INDICE DO ELEMENTO
void erase(List* list, int index) {
    if (index == 0) {
        pop(list);
    } else {
        Node* current = atPos(list, index);
        
        if (current != NULL) {
            Node* previous = atPos(list, index - 1);
            previous->next = current->next;

            free(current);
            list->size--;
        }
    }
}

//FUNCAO QUE INSERE UM ELEMENTO EM UM DETERMINADO INDICE
void insert(List* list, DataNode data, int index) {
    if (index == 0) {
        push(list, data);
    } else {
        Node* current = atPos(list, index);

        if ((current != NULL) || (index == list->size)) {
            Node* previous = atPos(list, index - 1);

            Node* newNode = (Node*) malloc(sizeof(Node));
            newNode->data = data;
            
            previous->next = newNode;
            newNode->next = current;
            list->size++;
        }
    }
}

//FUNCAO PARA TROCAR DOIS NOS
void xchgNodes(List* list, Node* nodeA, Node* nodeB) {
    if (nodeA == nodeB) {
        return;
    }

    int indexA = indexOf(list, nodeA);
    int indexB = indexOf(list, nodeB);

    if ((indexA == -1) || (indexB == -1)) {
        return;
    }

    if (indexA > indexB) {
        nodeA = nodeB;
        nodeB = atPos(list, indexA);

        indexA = indexB;
        indexB = indexOf(list, nodeB);
    } 

    Node* pb = atPos(list, indexB - 1);

    if (nodeA == list->head) {
        list->head = nodeB;
    } else {
        Node* pa = atPos(list, indexA - 1);
        pa->next = nodeB;
    }

    pb->next = nodeA;

    Node* pointer = nodeA->next;
    nodeA->next = nodeB->next;
    nodeB->next = pointer;
}

//FUNCAO QUE RETORNA O MENOR INDICE
Node* min(List* list, int index) {
    Node* pointer = atPos(list, index);
    
    if (pointer != NULL) {
        Node* minNode = pointer;

        while (pointer != NULL) {
            if (pointer->data.id < minNode->data.id) {
                minNode = pointer;
            }
            pointer = pointer->next;
        }

        return minNode;
    }

    return NULL;
}

//FUNCAO QUE RETORNA O MAIOR INDICE
Node* max(List* list, int index) {
    Node* pointer = atPos(list, index);
    
    if (pointer != NULL) {
        Node* maxNode = pointer;

        while (pointer != NULL) {
            if (pointer->data.id > maxNode->data.id) {
                maxNode = pointer;
            }
            pointer = pointer->next;
        }

        return maxNode;
    }

    return NULL;
}

//FUNCAO QUE ORDENA DE FORMA CRESCENTE A LISTA
void incSort(List* list) {
    int i = 0;
    for (i = 0; i < list->size - 1; i++) {
        xchgNodes(list, atPos(list, i), min(list, i));
    }
}

//FUNCAO QUE ORDENA DE FORMA DECRESCENTE
void decSort(List* list) {
    int i = 0;
    for (i = 0; i < list->size - 1; i++) {
        xchgNodes(list, atPos(list, i), max(list, i));
    }
}

//PROGRAMA PRINCIPAL
int main() {
    //cria a lista
    List* lista = createList();

    //cria o dado que vai ser armazenada na lista
    DataNode data;
 
    //insere alguns dados na lista
    data.id = 1;
    push(lista, data);
    data.id = 9;
    push(lista, data);
    data.id = 10;
    push(lista, data);
    data.id = 7;
    push(lista, data);

    //imprime a lista
    printList(lista);

    //retira o primeiro elemento da lista
    pop(lista);

    //imprime com o primeiro elemento removido
    printList(lista);

    //pega o segundo elemento da lista indices[0, 1, ...]
    printf("%d\n", atPos(lista, 1)->data.id);

    //imprime o index do elemento procurado
    printf("%d\n", indexOf(lista, lista->head));

    //elimina o indice de valor 1
    erase(lista, 4);
    printList(lista);

    //insere um elemento em uma determinada posicao
    data.id = 12;
    insert(lista, data, 3);
    data.id = 13;
    insert(lista, data, 2);

    printList(lista);

    //trocando a posicao entre dois dados
    xchgNodes(lista, lista->head, lista->head->next->next);
    printList(lista);

    //retorna o Node com o menor indice
    printf("%d\n", min(lista, 0)->data.id);

    //retorna o Node com o maior indice
    printf("%d\n", max(lista, 0)->data.id);

    //ordena de forma crescente
    incSort(lista);
    printList(lista);

    //ordena de forma decrescente
    decSort(lista);
    printList(lista);

    return 0;
}