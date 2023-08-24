/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler um valor real do teclado;
  - supor que esse valor represente o raio de um círculo, calcular e mostrar a área de um semicírculo com metade do raio.
  DICA: Na biblioteca <math.h> há definição da constante equivalente a PI (M_PI).
  Exemplo: valor = 5.0
*/

#include <stdio.h>
#include <math.h>

int main(){

  float r,r1;
  float area;
  float pi = 3.14;

  printf("\n Digite um valor real: ");
  scanf("%f", &r);

  r1 = r/2;
  area = (pi*pow(r1,2))/2;

  printf("\n A area eh: %0.2f", area);
  return 0;
}
