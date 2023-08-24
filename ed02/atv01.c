/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e 
  - dizer se é par ou ímpar.
  DICA: Considerar o zero como par.
  Exemplos: { -6, -3, 0, 3, 6, 9 }
*/

#include <stdio.h>

int main(){

  int n;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  if (n%2==0){
    printf("\n O valor é par");
  }
  else {
    printf("\n O valor é ímpar");
  }

  return 0;
}
