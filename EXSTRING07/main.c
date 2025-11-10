#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000
int main()
{
    char palavra[TAMANHO], inversa[TAMANHO];
    int i, j, resposta;
    int TP;
    printf("Verificando se a string e um palindromo:\n");
    printf("Digite uma palavra qualquer: \n");
    scanf(" %[^\n]", palavra);
    TP = strlen(palavra);
    if(TP < 2)
        printf("ERRO: Palavra invalida. Tente novamente.\n");
    else{
        for(i = TP - 1, j = 0; i >= 0; i--, j++){
            inversa[j] = palavra[i];

        }
        inversa[j] = '\0';
        resposta = strcmp(palavra, inversa);
        if(resposta == 0)
                printf("A string %s e um palindromo.\n", palavra);
        else
            printf("A string %s nao e um palindromo.\n", palavra);

    }
    return 0;
}
