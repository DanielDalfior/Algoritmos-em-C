#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;
    printf("AUTENTIFICACAO:\n");
    printf("Senha Numerica (XXXX): "); scanf("%i", &senha);

    if(senha <= 999 || senha >= 10000)
        printf("ERRO: Senha deve ter 4 digitos");
    else{
        if(senha % 2 != 0 && senha % 17 == 0)
            printf("Senha de criptografia: Forte\n");
        else
            printf("Senha de criptografia: Fraca\n");
    }

    return 0;
}
