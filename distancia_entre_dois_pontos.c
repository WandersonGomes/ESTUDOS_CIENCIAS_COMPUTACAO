//FUNCAO PARA DETERMINAR A DISTANCIA ENTRE DOIS PONTOS NO PLANO (X,Y)
#include <math.h>
double distanciaEntrePontos(double x0, double y0, double x1, double y1) {
    double tmp = ((x1 - x0) * (x1 - x0)) + ((y1 - y0) * (y1 - y0));

    return sqrt(tmp);
}

int main() {
    printf("%.2lf\n", distanciaEntrePontos(0,0,1,1));
    return 0;
}