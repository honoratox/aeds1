/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - programa ler um valor inteiro do teclado, e
  - gravar em arquivo os seus divisores em ordem decrescente.
*/

#include <stdio.h>

int main(){

  FILE *file;
  file = fopen("extra01.txt", "w");

  int x;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &x);

  for(int i=1; i<=x; i++){
    if(x%i==0){
      fprintf(file, "\n Divisores: %d", i);
    }
  }
  
  return 0;
}
