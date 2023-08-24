/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler três valores reais do teclado;
  - supor que esses valores correspondam ao comprimento, à largura e à altura de um paralelepípedo, respectivamente,
  - calcular e mostrar o volume do sólido com um sexto desses valores.
  Exemplo: valores = 3.0, 4.0 e 5.0
*/

#include <stdio.h>

int main(){

  float c,l,h,c1,l1,h1;
  float v;

  printf("\n Digite 3 valores reais: ");
  scanf("%f %f %f", &c, &l, &h);

  c1 = c/6;
  l1 = l/6;
  h1 = h/6;

  printf("\n Um sólido com 1/6 desses valores\n Volume: %0.2f\n", v=h1*l1*h1);
}
