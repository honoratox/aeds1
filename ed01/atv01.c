
/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - definir e ler um valor inteiro do teclado;
  - supor que esse valor represente o lado de um quadrado, calcular e mostrar a área de outro quadrado com o lado seis vezes maior.
  DICA: Usar constantes reais em expressões que envolvam valores reais.
*/

#include <stdio.h>

int main() {

  int n;
  int lado6;
  int area;

  printf("\n Digite um valor do teclado: ");
  scanf("%d", &n);

  lado6 = n*6;
  area = lado6*lado6;
  
  printf("\n Quadrado 6x maior tem area de : %d", area);

  return 0;
}
