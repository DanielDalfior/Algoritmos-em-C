/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N1, N2;

  printf("Mini calculadora de inteiros:\n");
  printf("Valor de N1:\n");
  scanf("%i", &N1);
  printf("Valor de N2:\n");
  scanf("%i", &N2);
  printf("SAÍDA DAS OPERAÇÕES ARITMETICAS BASICAS:\n");
  printf("ADIÇÃO: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
  printf("SUBTRAÇÃO: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
  printf("MULTIPLICAÇÃO: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
  printf("DIVISÃO COM VIRGULA: N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1 / N2);  
  printf("DIVISÃO INT: N1 / N2 = %i / %i = %i\n", N1, N2, N1 / N2);
  printf("RESTO DA DIVISÃO: N1 % N2 = (%i) % (%i) = %i\n", N1, N2, N1 % N2);
  printf("POTENCIALIZAÇÃO: N1 pow N2 = %i pow %i = %.1f\n", N1, N2, (float) pow(N1,N2));
  printf("RADICIAÇÃO: N1 rad N2 = %i rad %i = %.1f\n", N1, N2, (float) pow(N1, 1.0 / N2));
   return 0;
}
