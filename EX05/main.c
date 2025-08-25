#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double B1, B2, PF, media;
    printf("Nota [0.0, 10.0] do Bimestre 1: "); scanf("%lf", &B1);
    printf("Nota [0.0, 10.0] do Bimestre 2: "); scanf("%lf", &B2);

    if (B1 < 0 || B1 > 10 || B2 < 0 || B2 > 10)
        printf("ERRO: Nota incorreta\n");
    else{
        media = (B1 + B2) / 2;
        media = round(media * 10) / 10.0;
        printf("Media: %.1f\n", media);
        if(media < 3.0)
            printf("STATUS: Reprovacao\n");
        else if(media < 7.0) {
            printf("Nota [0.0, 10.0] da Prova Final: ");
            scanf("%lf", &PF);
            if(PF < 0.0 || PF > 10.0)
                printf("ERRO: Nota incorreta\n");
            else{
                media = (media + PF) / 2;
                media = round(media * 10) / 10.0;
                printf("Media: %.1f\n", media);
                if(media < 5.0)
                    printf("STATUS: Reprovacao\n");
                else
                    printf("STATUS: Aprovacao\n");
            }


        }
        else
            printf("STATUS: Aprovacao\n");
    }
    return 0;
}
