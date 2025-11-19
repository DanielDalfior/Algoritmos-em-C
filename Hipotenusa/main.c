#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusaA(float b, float c);

float hipotenusaA(float b, float c){
    float hipotenusa;
    hipotenusa = sqrt(pow(b, 2) + pow(c, 2));
    return hipotenusa;
}
int main()
{
    float hipotenusa;
    float b, c;
    int contador = 0;
    printf("Calculo da hipotenusa de um triangulo retangulo:\n");
    while(contador < 5){
        printf("Entre com o valor do cateto b: \n");
        scanf("%f", &b);
        printf("Entre com o valor do cateto c: \n");
        scanf("%f", &c);
        if(b <= 0 || c <= 0)
            printf("ERRO: Valor dos catetos incorretos. Tente novamente.\n");
        else{
            printf("Dados de saida:\n");
            hipotenusa = hipotenusaA(b, c);
            printf("Valor da hipotenusa A com os catetos b = %.1f e c = %.1f: %.1f\n",
                   b, c, hipotenusa);
            contador++;
        }
    }
    return 0;
}
