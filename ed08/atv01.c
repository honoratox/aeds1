/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler o tamanho de um arranjo para inteiros do teclado, bem como todos os seus elementos, garantindo que só tenha valores positivos e ímpares.
  - Verificar se o tamanho (ou dimensão) não é nulo ou negativo.
  - Para testar, ler diferentes quantidades de dados.
*/

#include <stdio.h>

int main(){

  int n, x;

  printf("\n Digite um tamanho para array: ");
  scanf("%d", &n);

  while(n<=0){
    printf("\n #ERRO!\n Digite um valor válido: ");
    scanf("%d", &n);
  }

  int array[n];

  for(int i=0; i<n; i++){
    printf("\n Digite valores positivos e impares para o array:");
    scanf("%d", &x);

    if(x%2==0 || x<0){
      printf("\n #ERRO!\n Digite um valor válido: ");
      scanf("%d", &x);
    }

    array[i] = x;
  }

  printf("\n Array[n] = { ");
  for(int i=0; i<n; i++){
    
    printf("%d ", array[i]);
  }
  printf("}");
  return 0;
}
