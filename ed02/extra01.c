/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler três valores literais (caracteres) do teclado e dizer se o primeiro valor lido está entre os outros dois, ou se é igual a um deles.
  Exemplos: { ('a','e','c'), ('e','a','c'), ('a','c','e'), ('e','c','a'), ('a','e','a') }
*/

#include <stdio.h>
#include <string.h>

int main(){

  char x,y,z;

  printf("\n Digite 3 caracteres: ");
  scanf("%c %c %c", &x, &y, &z);

  if(x>y && x<z || x<y && x>z){
    printf("\n O primeiro esta entre os outros 2");
  }
  else if (x==y || x==z){
    printf("\n O primeiro é igual a um dos outros 2");
  }
  else{
    printf("\n O primeiro nao esta entre os outros 2");
  }

  return 0;
}
