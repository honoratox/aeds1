/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - calcular a soma dos inversos (1/x) dos primeiros valores pares positivos começando no valor 7.
  - Testar essa função para quantidades diferentes.
  Exemplo: valor = 5 => 1/7 + 1/14 + 1/21 + 1/28 + 1/35
*/

#include <stdio.h>

void somaInversos (int n, int valor);

int main(){

  int n;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  printf("\n Soma dos inversos: ");
  somaInversos (n, 7);

  return 0;
}

void somaInversos (int n, int valor){

  if(n==0 || valor<7){
    return;
  }

  if(valor%2==0){
    printf("1/%d + ", valor);
    somaInversos (n-1, valor+1);
  }
  else{
    somaInversos (n, valor+1);
  }
}
