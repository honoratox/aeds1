/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - calcular a soma dos primeiros valores ímpares positivos começando no
  valor 7.
  - Testar essa função para quantidades diferentes.
  Exemplo: valor = 5 => 7 + 8 + 11 + 16 + 23
*/

#include <stdio.h>

void somaImparesPositivos(int n, int valor);

int main() {

  int n;

  printf("\n Digite um numero inteiro: ");
  scanf("%d", &n);

  printf("\n Soma dos impares positivos >= 7: ");
  somaImparesPositivos(n, 7);

  return 0;
}

void somaImparesPositivos(int n, int valor) {

  if (n == 0) {
    return;
  }

  if (valor % 2 != 0) {
    printf("%d + ", valor);
    somaImparesPositivos(n - 1, valor + 1);
  }
  else{
    somaImparesPositivos(n, valor + 1);
  }
}
