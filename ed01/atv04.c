/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler dois valores inteiros do teclado;
  - supor que esses dois valores representem lados de um retângulo, calcular e mostrar a área e o perímetro de um retângulo com um quinto dos tamanhos dos lados.
  Exemplo: valores = 3 e 5
*/

#include <stdio.h>

int main(){

  int a,b;
  int lado5a;
  int lado5b;
  int area;
  int peri;

  printf("\n Digite 2 valores: ");
  scanf("%d %d", &a, &b);

  lado5a = a/5;
  lado5b = b/5;
  area = lado5a*lado5b;
  peri = (lado5a*2)+(lado5b*2);

  printf("\n 1/5 de perimetro: %d\n 1/5 de area: %d", peri, area);

  return 0;
}
