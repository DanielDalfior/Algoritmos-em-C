#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, d;

    printf("ALGORITMO: DISTANCIA ENTRE PONTOS P(x1,y1) e Q(x2,y2): \n");
    printf("Dados de entrada\n");
    printf("Coordenada x1 - Ponto P: "); scanf("%f", &x1);
    printf("Coordenada y1 - Ponto P: "); scanf("%f", &y1);
    printf("Coordenada x2 - Ponto Q: "); scanf("%f", &x2);
    printf("Coordenada y2 - Ponto Q: "); scanf("%f", &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia entre pontos P (%.2f, %.2f) e Q (%.2f, %.2f): %.2f", x1, y1, x2, y2, d);

    return 0;
}
