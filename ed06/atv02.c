/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler um valor inteiro do teclado e chamar procedimento recursivo para mostrar essa quantidade em múltiplos de 7 em ordem decrescente encerrando no valor 7.
  Exemplo: valor = 5
*/

#include <stdio.h>

void mostrarMultSete( int n, int valor);

int main(){

  int n;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  printf("\n Multiplos de 7 descrescentes: ");
  mostrarMultSete(n, n*7);

  return 0;
}

void mostrarMultSete( int n, int valor){

  if (n==0 || valor<7){ //valor nao pode ser menor que 7
    return;
  }

  if (valor%7==0){
    printf("%d ", valor);
    mostrarMultSete (n-1, valor-7);
  }
}
