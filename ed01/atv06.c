/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler um valor real do teclado;
  - supor que esse valor represente o lado de um triângulo equilátero, calcular e mostrar a altura, área e o perímetro do triângulo com o dobro do lado.
  DICA: Usar constantes reais em expressões que envolvam valores reais.
  Exemplo: valor = 5.0
*/

#include <stdio.h>
#include <math.h>

int main(){

  float b;
  float area;
  float peri;
  float h;

  printf("\n Digite um valor real: ");
  scanf("%f", &b);

  h = (sqrt(3)*b)/2;
  area = (b*h)/2;
  peri = b*3;

  printf("\n Um triangulo com 2x o lado\n Altura: %0.2f\n Area: %0.2f\n Perimetro: %0.2f", h, area, peri);

  return 0;
}
