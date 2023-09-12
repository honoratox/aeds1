/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler uma quantidade inteira do teclado e, mediante um procedimento, mostrar essa quantidade em valores crescentes nos denominadores (sequência dos inversos) múltiplos de 7.
  Exemplo: n = 5 => { 1/7, 1/14, 1/21, 1/28, 1/35 }
*/

#include <stdio.h>

int inversosMultSete(int n);

int main(){

  int n, result;

  printf("\n Digitee um valor inteiro: ");
  scanf("%d", &n);

  result=inversosMultSete(n);

  return 0;
}

int inversosMultSete(int n){

  int mult=1;
  for(int i=0; i<n; i++){
    while(mult<=n){
      printf("\n Sequencia dos inversos: 1/%d", mult*7);
      mult=mult+1;
    }
  }
  return mult;
}
