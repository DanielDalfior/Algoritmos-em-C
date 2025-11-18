#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{
    float R, area, volume, volumeLitros;

    printf("ESFERA: Dados de entrada: \n");
    printf("Valor do Raio (em metros): ");
    scanf("%f", &R);

    area = 4 * PI * pow(R, 2);
    volume = 4.0 / 3 * PI * pow(R, 3);
    volumeLitros = 1000 * volume;

    printf("Dados da Esfera: \n");
    printf("Area: %.2f Metros Quadrados\n", area);
    printf("Volume: %.2f Metros Cubicos\n", volume);
    printf("Volume: %.2f Litros\n", volumeLitros);
    return 0;
}
