#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

float distanciaPeQ(float Px, float Py, float Qx, float Qy);

float distanciaPeQ(float Px, float Py, float Qx, float Qy) {
    float distancia;
    distancia = sqrt(pow(Px - Qx, 2) + pow(Py - Qy, 2));
    return distancia;
}

int main()
{
    float Px, Py, Qx, Qy;
    float distancia;
    int opcao;
    printf("MENU DE OPCOES:\n");
    printf("OPCAO 1: Calcular a Distancia entre P and Q\n");
    printf("OPCAO 0: Sair do Programa\n");
    do{
       printf("Sua opcao: "); scanf("%i", &opcao);
       if(opcao == 0) printf("Fim do programa.\n");

       else if(opcao < 0 || opcao > 1)
        printf("ERRO: Opcao invalida. Tente novamente.\n");
       else{
           printf("Entre com as coordenadas do ponto P:\n");
           printf("Coordenada X - Ponto P: "); scanf("%f", &Px);
           printf("Coordenada Y - Ponto P: "); scanf("%f", &Py);
           printf("Entre com as coordenadas do ponto Q:\n");
           printf("Coordenada X - Ponto Q: "); scanf("%f", &Qx);
           printf("Coordenada Y - Ponto Q: "); scanf("%f", &Qy);

           distancia = distanciaPeQ(Px, Py, Qx, Qy);
           printf("Distancia entre P e Q: P(%.1f, %.1f) e Q(%.1f, %.1f) = %.1f\n\n",
                  Px, Py, Qx, Qy, distancia);


       }



    }while(opcao != 0);
    return 0;
}
