/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler dois valores reais do teclado e dizer se o segundo é menor, igual ou maior que o dobro do primeiro.
  Exemplos: { (0.5, 1.5), (3.0, 3.0), (-5.5, 6.4), (7.8, -8.7) }
*/

#include <stdio.h>

int main(){

  float a,b;

  printf("\n Digite 2 valores reais: ");
  scanf("%f %f", &a, &b);

  if (a>b){
    printf("\n O segundo eh menor que o primeiro");
  }
  else if (a<b){
    printf("\n O segundo eh maior que o primeiro");
  }
  else{
    printf("\n O segundo eh igual ao primeiro");
  }
  return 0;
}
