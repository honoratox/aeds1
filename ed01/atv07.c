/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler um valor real do teclado;
  - supor que esse valor represente a medida de lados de um cubo, calcular e mostrar o volume do sólido com sete vezes a medida do lado.
  DICA: Usar constantes reais em expressões que envolvam valores reais.
  Exemplo: valor = 5.0
*/

#include <stdio.h>
#include <math.h>

int main(){

  float b, b1, v;

  printf("\n Digite um valor real: ");
  scanf("%f", &b);

  b1 = b*7;
  v = pow(b1,3);

  printf("\n Volume com 7x lado eh: %0.2f", v);
  return 0;
}
