#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float preco, total;
    int quantidade;
    printf("CARRINHO DE COMPRA:\n");
    printf("MERCADORIA: Dados de entrada:\n");
    printf("Preco (R$): "); scanf("%f", &preco);
    printf("Quantidade (Unid.): "); scanf("%i", &quantidade);

    total = preco * quantidade;
    if(total > 1000.00)
        total *= 0.97;
    printf("Total a pagar: R$ %.2f\n", total);


    return 0;
}
