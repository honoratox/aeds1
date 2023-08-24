/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e 
  - dizer se pertence ao intervalo aberto entre (25:65).
  Exemplos: { 15, 25, 30, 35, 65, 70 }
*/

#include <stdio.h>

int main(){

  int n;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  if (n>25 && n<65){
    printf("\n O valor %d estah no intervalo aberto 25:65", n);
  }
  else {
    printf("\n O valor não está no intervalo aberto (25:65)");
  }
}
