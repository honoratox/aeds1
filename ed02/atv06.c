/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler dois valores inteiros do teclado e  dizer se o primeiro é par e o segundo é ímpar.
  Exemplos: { (5, 15), (35, 40), (60, 72), (50, 63), (89, 98) }
*/

#include <stdio.h>

int main(){

  int a,b;

  printf("\n Digite 2 valores inteiros: ");
  scanf("%d %d", &a, &b);

  if(a%2==0){
    printf("\n O primeiro valor eh par");
  }
  else{
    printf("\n O primeiro valor eh impar");
  }

  if(b%2==0){
    printf("\n O segundo valor eh par");
  }
  else{
    printf("\n O segundo valor eh impar");
  }
  return 0;
}
