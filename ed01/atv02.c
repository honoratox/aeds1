/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler um valor inteiro do teclado;
  - supor que esse valor represente o lado de um quadrado, calcular e mostrar a área e o perímetro de um quadrado com a um terço do tamanho do lado.
  Exemplo: valor = 5
*/

#include <stdio.h>

int main(){

  int n;
  int lado3;
  int area;
  int peri;

  printf("\n Digite um valor: ");
  scanf("%d", &n);

  lado3 = n/3;
  area = lado3*lado3;
  peri = lado3*4;

  printf("\n 1/3 do perimetro: %d\n 1/3 da area: %d", peri, area);

  return 0;
}
