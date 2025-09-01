#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, quantidade = 0, X, soma = 0;
    float media;
    printf("Digite o valor inteiro de X (X >= 1): ");
    scanf("%i", &X);

    if(X < 1)
        printf("ERRO: Valor incorreto de X.");
    else{
        printf("Os impares entre [%i, %.0f] sao: \n", X, pow(X, 3));
        for(contador = X; contador <= pow(X, 3); contador++){
            if(contador % 2 != 0){
                quantidade++;
                printf("IMPAR %i: %i\n", quantidade, contador);
                soma = soma + contador;
            }
        }
        media = 1.0 * soma / quantidade;
        printf("Soma dos %i impares = %i\n", quantidade, soma);
        printf("Media dos %i impares = %.1f\n", quantidade, media);
    }
    return 0;
}
