/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e gravar essa quantidade em valores da sequência: 1 7 49 343 2401 ...
  Exemplo: n = 5 => { 1, 7, 49, 343, 2401 }
*/

#include <stdio.h>
#include <math.h>

int main(){

  FILE *file;
  file= fopen("resultado03.txt", "w");

  int n;
  int valor=1;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    fprintf(file, " %d,", valor);
    valor*=7;
  }

  fclose(file);
  return 0;
}
