#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("PESQUISA DO IBGE:\n");
    printf("Digite sua idade (em anos): "); scanf("%i", &idade);

    if(idade <= 14)
        printf("ERRO: Idade nao consta na tabela.\n");
    else{
        if(idade <= 20)
            printf("CLASSIFICACAO: Geracao Z\n");
        else if(idade <= 34)
            printf("CLASSIFICACAO: Geracao Y\n");
        else if(idade <= 49)
            printf("CLASSIFICACAO: Geracao X\n");
        else if(idade < 65)
            printf("CLASSIFICACAO: Geracao Baby Boomers\n");
        else
            printf("CLASSIFICACAO: Geracao Silenciosa\n");
    }

    return 0;
}
