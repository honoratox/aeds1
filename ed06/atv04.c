/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler um valor inteiro do teclado e chamar procedimento recursivo para mostrar essa quantidade em valores decrescentes da sequência: ... 1/28 1/21 1/14 1/7 1.
  Exemplo: valor = 5
*/

#include <stdio.h>

void sequenciaDecrescente (int n, int valor);

int main(){

  int n;

  printf("\n Dgite um valor inteiro: ");
  scanf("%d", &n);

  printf("\n Sequencia decrescente: ");
  sequenciaDecrescente(n, n*7);

  return 0;
}

void sequenciaDecrescente (int n, int valor){

  if(n==0){
    return;
  }

  if(valor%7==0){
    printf("1/%d ", valor);
    sequenciaDecrescente(n-1, valor-7); // valor-7: subtrai um do valor toda nova rodagem
  }
}
