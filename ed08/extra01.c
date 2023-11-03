/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler um valor inteiro do teclado, e mediante funções para calcular e retornar a quantidade e seus divisores guardados em arranjo, o qual deverá ser mostrado na tela após o retorno, bem como gravado em arquivo ( "DIVISORES.TXT" ).
  DICA: Supor que a quantidade de divisores será, no máximo, igual ao próprio número
*/

#include <stdio.h>

int divisores (int x);

int main(){

  int x;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &x);

  int result;
  result = divisores(x);

  printf("\n Quantidade de divisores: %d", result);
  
  return 0;
}

int divisores (int x){

  FILE *file;
  file = fopen("divisores.txt", "w");

  int cont=0;

  for(int i=1; i<=x; i++){
    if(x%i==0){
      printf("\n Divisor: %d", i);
      fprintf(file, "\n Divisores de %d", x);
      fprintf(file, "\n Divisor: %d", i);
      cont++;
    }
  }

  fprintf(file, "\n Quantidade de divisores: %d", cont);
  return cont;
}
