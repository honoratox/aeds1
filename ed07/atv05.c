/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler um valor inteiro do teclado (n) e outro valor real (x), gravar essa quantidade (n) em valores reais da sequência: 1 1/x2 1/x3 1/x4...
  DICA: Usar pow ( x, y ) da biblioteca <math.h> para calcular a potência.
  Exemplo: n = 5 => { 1, 1/x2, 1/x3, 1/x4, 1/x5}
*/

#include <stdio.h>
#include <math.h>


int main(){

  FILE *file;
  file = fopen("resultado05.txt", "w");

  int n;
  float x;
  float valor=1.0;

  printf("\n Digite um valor inteiro e um real: ");
  scanf("%d %f", &n, &x);

  for(int i=0; i<n; i++){
    fprintf(file, " 1/%.2f", valor=pow(x,i));
  }

  fclose(file);
  return 0;
}
