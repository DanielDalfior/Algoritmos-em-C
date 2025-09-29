#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1000
#define MAX 9999
#define TAMANHO 1000
#define INTERVALO (MAX - MIN + 1) + MIN

int main()
{
    int SENHA[TAMANHO], i, quantidade = 0;
    printf("VALORES ALEATORIOS DE SENHAS:\n");
    printf("Relatorio 1: Senhas multiplas de 5:\n\n");

    srand(time(NULL));
       for(i = 0; i < TAMANHO; i++){
        SENHA[i] = (rand() % 900) + 100;

    }
        for(i = 0; i < TAMANHO; i++){
        if(SENHA[i] % 5 == 0){
            quantidade++;
            printf("Indice %i - Senha: %i\n", quantidade, SENHA[i]);
        }



    }
    return 0;
}
