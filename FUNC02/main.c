#include <stdio.h>
#include <stdlib.h>

int numeroPerfeito(int numero);

int numeroPerfeito(int numero) {
    int contador, soma = 1;
    if(numero == 1)
        return 1;
    for(contador = 2; contador <= numero / 2; contador++){
        if(numero % contador == 0)
            soma += contador;
    }
    if(soma == numero)
        return 1;
    else
        return 0;
}

int main()
{
    int numero;
    int opcao;
    printf("MENU DE OPCOES:\n");
    printf("OPCAO 1: Testar numero perfeito (Inteiro >= 1)\n");
    printf("OPCAO 0: Sair do Programa\n");
    do{
        printf("Sua opcao: "); scanf("%i", &opcao);
        if(opcao == 0) printf("Fim do programa.\n");
        else if(opcao < 0 || opcao > 1)
            printf("ERRO: Opcao invalida. Tente novamente.\n");
        else{
            printf("Entre com um numero (Inteiro: >= 1): ");
            scanf("%i", &numero);
            if(numero < 1) printf("ERRO: Numero invalido. Tente novamente.\n");
            else{
                if(numeroPerfeito(numero))
                    printf("Numero: %i eh perfeito.\n", numero);
                else
                    printf("Numero: %i nao eh perfeito.\n", numero);
            }
        }

    }while(opcao != 0);
    return 0;
}
