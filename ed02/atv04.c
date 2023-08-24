/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e 
  - dizer se pertence ao intervalo fechado entre [20:60].
  Exemplos: { 5, 15, 20, 45, 60, 65 }
*/

#include <stdio.h>

int main(){

  int n;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  if (n>=20 && n<=60){
    printf("\n O valor pertecen ao intervalo [20:60]");
  }
  else{
    printf("\n O valor nao pertence ao intervalo [20:60]");
  }
  return 0;
}
