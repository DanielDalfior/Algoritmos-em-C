// BIBLIOTECAS + CONSTANTE (GLOBAL)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// PROTOTIPOS: ABSTRAÇÃO + ENCAPSULAMENTO
// CUBO1: Sem return: void
void cubo1(float L, float *Area, float *Volume);

// CUBO2: Com return: area
float cubo2(float L, float *Volume);

// CUBO3: Com return: volume
float cubo3(float L, float *Area);


// FUNÇÕES: ABSTRAÇÃO + ENCAPSULAMENTO
void cubo1(float L, float *Area, float *Volume){
    *Area = 6 * pow(L, 2);
    *Volume = pow(L, 3);
}

float cubo2(float L, float *Volume){
    float Area;
    Area = 6 * pow(L, 2);
    *Volume = pow(L, 3);
    return Area;
}

float cubo3(float L, float *Area){
    float Volume;
    Volume = pow(L, 3);
    *Area = 6 * pow(L, 2);
    return Volume;
}


//MAIN(I / O): REUSABILIDADE
int main()
{
    int contador = 0;
    float L, Area, Volume;
    while(contador < 100){
        printf("Dados do cubo %i: \n", contador + 1);
        printf("Valor do lado(L > 0): ");
        scanf("%f", &L);
        if(L <= 0)
            printf("ERRO: Lado invalido. Digite novamente.\n");
        else{
            printf("Dados de saida - cubo:\n");
            // REUSABILIDADE: Sem comando return(void)
            cubo1(L, &Area, &Volume);
            printf("Area1: %.1f metros quadrados\n", Area);
            printf("Volume1: %.1f metros cubicos\n", Volume);

            // REUSABILIDADE: Com comando return(Area)
            Area = cubo2(L, &Volume);
            printf("Area2: %.1f metros quadrados\n", Area);
            printf("Volume2: %.1f metros cubicos\n", Volume);

            // REUSABILIDADE: Com comando return(Volume)
            Volume = cubo3(L, &Area);
            printf("Area3: %.1f metros quadrados\n", Area);
            printf("Volume3: %.1f metros cubicos\n", Volume);

            contador = contador + 1;
        }
    };
    return 0;
}
