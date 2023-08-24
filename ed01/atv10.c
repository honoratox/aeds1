/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler um valor real do teclado;
  - supor que esse valor represente o raio de uma esfera, calcular e mostrar o volume de uma esfera com três oitavos do raio.
  DICA: Usar constantes reais em expressões que envolvam valores reais.
  Exemplo: valor = 5.0
*/

#include <stdio.h>
#include <math.h>

int main(){

  float r,v;
  float r1;
  float pi = 3.14;

  printf("\n Digite um valor real: ");
  scanf("%f", &r);
  
  r1 = (r/8)*3;
  v = (4*(pi*pow(r1,3)))/3;

  printf("\n O volume eh: %0.2f", v);
}
