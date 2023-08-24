/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e 
  - dizer se é ímpar e menor que -15, ou par e maior que 15.
  Exemplos: { -60, -13, 0, 13, 26, 39 }
*/

#include <stdio.h>

int main(){

  int n;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  if (n%2!=0 && n<-15){
    printf("\n O valor eh impar e menor que -15");
  }
  else if (n%2!=0 && n>-15){
    printf("\n O valor eh impar e maior que -15");
  }
  else if (n%2==0 && n<15){
    printf("\n O valor eh par e menor que 15");
  }
  else if (n%2==0 && n>15){
    printf("\n O valor eh par e maior que 15");
  }
  return 0;
}
