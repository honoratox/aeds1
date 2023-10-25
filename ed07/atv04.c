/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e gravar essa quantidade em valores decrescentes da sequência: ... 1/2401 1/343 1/49 1/7 1.
  Exemplo: n = 5 => { 1/2401, 1/343, 1/49, 1/7, 1 }
*/

#include <stdio.h>
#include <math.h>

int main(){

  FILE *file;
  file = fopen("resultado04.txt", "w");

  int n;
  int valor=1;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  for(int i=n-1; i>=0; i--){
    fprintf(file, " 1/%d,", valor=pow(7, i));
  }

  fclose(file);
  return 0;
}
