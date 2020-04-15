#include <stdio.h>

//FUNCAO QUE MUDA A COR DO TEXTO BASEADA EM LINK = http://web.theurbanpenguin.com/adding-color-to-your-output-from-c/
void mudaCor(int cor){
    switch (cor)
    {
    //vermelho
    case 1:
        printf("\033[0;31m");
        break;
    //vermelho (negrito)
    case 2:
        printf("\033[1;31m");
        break;
    //verde
    case 3:
        printf("\033[0;32m");
        break;
    //verde (negrito)
    case 4:
        printf("\033[1;32m");
        break;
    //amarelo
    case 5:
        printf("\033[0;33m");
        break;
    //amarelo(negrito)
    case 6:
        printf("\033[1;33m");
        break;
    //azul
    case 7:
        printf("\033[0;34m");
        break;
    //azul (negrito)
    case 8:
        printf("\033[1;34m");
        break;
    //magenta
    case 9:
        printf("\033[0;35m");
        break;
    //magenta (negrito)
    case 10:
        printf("\033[1;35m");
        break;
    //ciano
    case 11:
        printf("\033[0;36m");
        break;
    //ciano (negrito)
    case 12:
        printf("\033[1;36m");
        break;
    //padrao
    default:
        printf("\033[0m");
        break;
    }
}

//PROGRAMA PRINCIPAL
int main() {
    mudaCor(1);
    printf("Texto em vermelho normal\n");
    
    mudaCor(2);
    printf("Texto em vermelho negrito\n");
    
    mudaCor(3);
    printf("Texto em verde normal\n");

    mudaCor(4);
    printf("Texto em verde negrito\n");

    mudaCor(5);
    printf("Texto em amarelo normal\n");
    
    mudaCor(6);
    printf("Texto em amarelo negrito\n");
    
    mudaCor(7);
    printf("Texto em azul normal\n");

    mudaCor(8);
    printf("Texto em azul negrito\n");
    
    mudaCor(9);
    printf("Texto em magenta normal\n");
    
    mudaCor(10);
    printf("Texto em magenta negrito\n");
    
    mudaCor(11);
    printf("Texto em ciano normal\n");

    mudaCor(12);
    printf("Texto em ciano negrito\n");
    
    mudaCor(0);
    printf("Texto em cor padrao\n");
    
    return 0;
}