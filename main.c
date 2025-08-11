#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float preco, reajuste;
    float totalBruto, totalLiquido, desconto;
    int quantidade;

    printf("MERCADORIA: Dados de entrada\n");
    printf("Preco (R$): "); scanf("%f", &preco);
    printf("Quantidade (Uni.): "); scanf("%i", &quantidade);
    printf("Reajuste (%%): "); scanf("%f", &reajuste);

    totalBruto = preco * quantidade;
    desconto = reajuste / 100 * totalBruto;
    totalLiquido = totalBruto - desconto;

    printf("Total a pagar (sem desconto): R$ %.2f\n", totalBruto);
    printf("Total a pagar (com desconto: %.2f %%): R$  %.2f\n", reajuste, totalLiquido);
    printf("Desconto (%.2f %%): R$ %.2f\n", reajuste, desconto);




    return 0;
}
