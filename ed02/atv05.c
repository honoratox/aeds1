/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e 
  - dados os intervalos fechados [15:30] e (25:50), 
  - dizer se pertence à interseção ou a apenas a um deles.
  Exemplos: { 5, 15, 20, 25, 30, 60 }
*/

#include <stdio.h>

int main(){

  int n;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  if (n>=15 && n<=24){
    printf("\n Pertence ao intervalo [15:30]");
  }
  else if (n>25 && n<50){
    printf("\n Pertence ao intervalo (25:50)");
  }
  else if (n>=25 && n<=30){
    printf("\n Pertence a intersecao [25:30]");
  }
  else{
    printf("\n Nao pertence a nenhum dos intervalos");
  }
  return 0;
}
