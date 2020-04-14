//FUNCAO QUE RETORNA SE EH POSSIVEL FAZER UM TRIANGULO COM AS MEDIDAS DOS LADOS INFORMADOS
//0 PARA NAO E 1 PARA SIM
int formaTriangulo(float lado1, float lado2, float lado3) {

    if (lado1 > (lado2 + lado3)) {
        return 0;
    }

    if (lado2 > (lado1 + lado3)) {
        return 0;
    }

    if (lado3 > (lado2 + lado1)) {
        return 0;
    }

    return 1;
}