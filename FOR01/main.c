#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, quantidade = 0;
    printf("SUGESTOES DE SENHA: \n");
    for(contador = 1000; contador < 10000; contador++){
        if(contador % 2 != 0 && contador % 39 == 0){
            quantidade++;
            printf("SENHA %i: %i\n", quantidade, contador);
        }
    }
    return 0;
}
