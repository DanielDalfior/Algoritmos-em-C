#include <stdio.h>
#include <stdlib.h>

int FAT(int N);
int ARRANJO(int N, int P);
int COMBINACAO(int N, int P);

int FAT(int N){
    int contador, M = 1;
    if(N == 0 || N == 1) return 1;
    for(contador = 2; contador <= N; contador++)
        M = M * contador;
    return M;
}

int ARRANJO(int N, int P){
    int A;
    A = FAT(N) / FAT(N - P);
    return A;
}

int COMBINACAO(int N, int P){
    int C;
    C = ARRANJO(N, P) / FAT(P);
    return C;
}

int main()
{
    int N, P, F, A, C;
    int opcao;
    printf("CALCULO DO ARRANJO E DA COMBINACAO P A P:\n");
    printf("Menu de opcoes: \n");
    printf("Opcao 1: Calcular o fatorial, arranjo e combinacao.\n");
    printf("Opcao 0: Sair do programa.\n");
    while(1){
        printf("Escolha sua opcao: \n");
        scanf("%i", &opcao);
        if(opcao == 0){
            printf("Fim do programa.\n");
            break;
        }
        else if(opcao < 0 || opcao > 1)
            printf("ERRO: Opcao invalida. Tente novamente.\n");
        else{
            do{
                printf("Escolha os dados de N (inteiro >= 0): \n");
                scanf("%i", &N);
                if(N < 0)
                    printf("ERRO: Valor invalido. Tente novamente.\n");
            }while(N < 0);
            do{
                printf("Escolha os dados de P (inteiro >= 0): \n");
                scanf("%i", &P);
                if(P < 0)
                    printf("ERRO: Valor invalido. Tente novamente.\n");
            }while(P < 0);
            printf("Dados de saida:\n");
            F = FAT(N);
            printf("Fatorial de N = %i: %i\n", N, F);
            F = FAT(P);
            printf("Fatorial de P = %i: %i\n", P, FAT(P));
            A = ARRANJO(N, P);
            printf("Arranjo de N(%i) e P(%i): %i\n", N, P, A);
            C = COMBINACAO(N, P);
            printf("Combinacao de N(%i) e P(%i): %i\n", N, P, C);
        }
    }
    return 0;
}
