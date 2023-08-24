/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler dois valores inteiros do teclado;
  - supor que esses dois valores representem lados de um retângulo, calcular e mostrar a área quatro vezes maior.
  DICA: Usar constantes reais em expressões que envolvam valores reais.
  Exemplo: valores = 3 e 5
*/

#include <stdio.h>

int main(){

  int a,b;
  int area;

  printf("\n Digite 2 valores: ");
  scanf("%d %d", &a, &b);

  area = (a*b)*4;

  printf("\n Area 4x maior: %d", area);

  return 0;
}
