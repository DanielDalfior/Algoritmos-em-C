#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moradores = 0;
    int fulano = 0, beltrano = 0, ciclano = 0, voto;
    float pfulano, pbeltrano, pciclano;
    printf("VOTACAO PARA SINDICO:\n");
    printf("Menu de candidatos:\n");
    printf("1: para Fulano\n");
    printf("2: para Beltrano\n");
    printf("3: para Ciclano\n");
    while(moradores < 5){
        printf("Voto do morador %i: ", moradores + 1);
        scanf("%i", &voto);
        if(voto < 1 || voto > 3)
            printf("ERRO: Voto incorreto, digite novamente.\n");
        else{
            if(voto == 1)
                fulano++;
            else if(voto == 2)
                beltrano++;
            else ciclano++;
            moradores++;
            printf("Resultado da votacao:\n");
            pfulano = 100.0 * fulano / moradores;
            pbeltrano = 100.0 * beltrano / moradores;
            pciclano = 100.00 * ciclano / moradores;
            printf("Votos de Fulano: %i (%.1f %%)\n", fulano, pfulano);
            printf("Votos de Beltrano: %i (%.1f %%)\n", beltrano, pbeltrano);
            printf("Votos de Ciclano: %i (%.1f %%)\n", ciclano, pciclano);

        }
    }

    return 0;
}
