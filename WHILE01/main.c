#include <stdio.h>
#include <stdlib.h>
#define SM 1518.01

int main()
{
    float media, soma = 0, salario;
    int alunos = 0;
    printf("PESQUISA SALARIAL UNIVERSITARIA:\n");
    while(alunos < 3){
        printf("Digite o salario (>= R$ %.1f) - Aluno %i: ", SM, alunos + 1);
        scanf("%f", &salario);
        if(salario < SM)
            printf("ERRO: Valor incorreto, escolha novamente.\n");
        else{
           soma = soma + salario;
           alunos++;
        }
    }
    media = soma / alunos;
    printf("Media salarial dos Universitarios: R$ %.2f\n", media);
    return 0;
}
