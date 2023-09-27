/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler um valor inteiro do teclado e chamar procedimento recursivo para mostrar essa quantidade em valores da sequência: 1 7 14 21 28 ...
  Exemplo: valor = 5
*/

#include <stdio.h>

void mostrarMultSete (int n, int valor);

int main(){

  int n;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  printf("\n Valores na sequencia multipla de 7: ");
  mostrarMultSete (n, 7);

  return 0;
}

void mostrarMultSete (int n, int valor){

  if (n==0){
    return;
  }

  if(valor%7==0){
    printf("%d ", valor);
    mostrarMultSete(n-1, valor+7);
  }
}
