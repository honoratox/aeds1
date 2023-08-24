/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler três valores reais do teclado e dizer se o último está entre os dois primeiros, quando esses dois forem diferentes entre si.
  OBS.: Notar a ordem dos testes.
  Exemplos: { (0.5, 1.5, 1.8), (3.6, 4.5, 2.4), (6.3, 7.2, 6.5), (9.8, 8.9, 8.9) }
*/

#include <stdio.h>

int main(){

  float a,b,c;

  printf("\n Digite 3 valores reais: ");
  scanf("%f %f %f", &a, &b, &c);

  if (a!=b){
    if (a<c && c<b || a>c && c>b){
      printf("\n O terceiro esta entre os 2 primeiros");
    }
    else{
      printf("\n O terceiro nao esta entre os 2 primeiros");
    }
  }
  else{
    printf("\n Os 2 primeiros sao iguais");
  }

  return 0;
}
