/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado, e até essa quantidade, um valor por vez, e guardar esses valores em um vetor
  - calcular a soma dos inversos das potências do exercício 04.
  - Gravar em outro arquivo ("RESULTADO07.TXT") cada quantidade e seu resultado.
  Exemplo: n = 5 => { 1/2401, 1/343, 1/49, 1/7, 1 }
*/

#include <stdio.h>

float lerExer4 (int n);

int main(){

  int n;
  float result;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  result = lerExer4 (n);

  FILE *resultFile;
  resultFile = fopen("resultado07.txt", "w");

  fprintf(resultFile, "\n A soma eh: %.2f", result);
  
  return 0;
}

float lerExer4 (int n){

  FILE *file;
  file = fopen("resultado04.txt", "r");

  float cont=0;
  float valor;

  for(int i=0; i<n; i++){
    fscanf(file, "%f", &valor);
    cont += valor;
  }

  return cont;
}
