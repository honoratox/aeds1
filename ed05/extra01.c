/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  ler um número inteiro do teclado (n) e, mediante o uso da função, calcular e
  mostrar o fatorial desse valor em outro método: n! = n * (n-1) * (n-2) * ... *
  3 * 2 * 1 se n>0
*/

#include <stdio.h>

int fatorial(int n);

int main() {

  int n, result;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  result = fatorial(n);
  return 0;
}

int fatorial(int n) {
  
  int guardarValor = 1;

  for (int i=1; i<=n; i++) { //soma até 'i' ser igual a 'n'
      guardarValor*=i; //armazena o valor a cada rodagem e multiplica em loop ate i=n
  }

  printf("\n%d! = %d\n", n, guardarValor);
  return guardarValor;
}
