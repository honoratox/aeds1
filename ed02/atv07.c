/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler dois valores inteiros do teclado e dizer se o primeiro é ímpar e negativo, e se o segundo é par e positivo.
  Exemplos: { (-5, -15), (-13, 20), (-30, 45), (60, 72), (-89, -98) }
*/

#include <stdio.h>

int main(){

  int a,b;

  printf("\n Digite 2 valores inteiros: ");
  scanf("%d %d", &a, &b);

  if(a>=0){
    if(a%2==0){
      printf("\n O primeiro valor eh positivo e par");
    }
    else{
      printf("\n O primeiro valor eh potivio e impar");
    }
  }
  if(a<0){
    if(a%2==0){
      printf("\n O primeiro valor eh negativo e par");
    }
    else{
      printf("\n O primeiro valor eh negativo e impar");
    } 
  }


  if(b>=0){
    if(b%2==0){
      printf("\n O segundo valor eh positivo e par");
    }
    else{
      printf("\n O segundo valor eh potivio e impar");
    }
  }
  if(b<0){
    if(b%2==0){
      printf("\n O segundo valor eh negativo e par");
    }
    else{
      printf("\n O segundo valor eh negativo e impar");
    }
  }
  return 0;
}
