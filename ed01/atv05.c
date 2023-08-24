/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler dois valores reais do teclado;
  - supor que esses dois valores representem base e altura de um triângulo, calcular e mostrar a área de um triângulo com a metade da altura do mesmo.
  DICA: Usar constantes reais em expressões que envolvam valores reais.
  Exemplo: valores = 3 e 5
*/

#include <stdio.h>

int main(){

  float b,h,h1;
  float area;

  printf("\n Digite 2 valores reais: ");
  scanf("%f %f", &b, &h);

  h1 = h/2;
  area = b*(h1/2);

  printf("\n Area do trinagulo com 1/2 altura: %0.2f", area);
  
  return 0;
}
