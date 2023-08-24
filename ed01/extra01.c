/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler um valor real do teclado;
  - supor que esse valor informe a área de uma circunferência,
  - calcular e mostrar o raio um terço dessa área.
  Exemplo: valor = 5.0
*/

#include <stdio.h>
#include <math.h>

int main(){

  float a,a1,r;
  float pi = 3.14;

  printf("\n Digite um valor real: ");
  scanf("%f", &a);
  
  a1 = a/3;
  r = sqrt(a1/pi);
  
  printf("\n Raio 1/3 dessa area eh: %0.2f", r);
}
