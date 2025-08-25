#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, reajuste, valorReajustado;
    int opcao;

    printf("MERCADORIA: Dados de entrada\n");
    printf("Menu de opcoes\n");
    printf("[1]: Acrescimo\n");
    printf("[2]: Desconto\n");
    printf("Sua opcao: "); scanf("%i", &opcao);

    if(opcao != 1 && opcao != 2)
        printf("ERRO: Opcao nao disponivel\n");
    else{
        printf("Preco: R$ "); scanf("%f", &preco);
        printf("Reajuste (%%): "); scanf("%f", &reajuste);

        if(preco <= 0 || reajuste <= 0)
            printf("ERRO: Valor incorreto\n");
        else{
            if(opcao == 1)
                valorReajustado = preco * (1 + reajuste / 100);
            else
                valorReajustado = preco * (1 - reajuste / 100);
            printf("Preco reajustado (%.2f %%): R$ %.2f\n", reajuste, valorReajustado);
        }
    }


    return 0;
}
