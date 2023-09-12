/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler uma quantidade inteira do teclado e, mediante um procedimento, mostrar essa quantidade em valores múltiplos de 3 e 4 em ordem crescente.
  Exemplo: n = 5 => { 12, 24, 36, 48, 60 }
*/

#include <stdio.h>

int multTresEQuatro(int n);

int main(){

  int n, result;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  result = multTresEQuatro(n);

  return 0;
}

int multTresEQuatro(int n){

  int mult=1;
  for(int i=0; i<n; i++){
    while(mult<=n){
      printf("\n Primeiros %d multiplos de 3 e 4: %d", n, mult*3*4);
      mult=mult+1;
    }
  }
  return mult;
}
