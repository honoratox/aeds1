/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - calcular a soma da adição dos primeiros números naturais começando no valor 7.
  - Testar essa função para quantidades diferentes de valores e mostrar os resultados em outro método.
  Exemplo: n = 5 => 7 + 8 + 10 + 13 + 17
*/

#include <stdio.h>

int somaNaturais(int n);

int main(){

  int n, result;

  printf("\n Digite uma quantidade de testes: ");
  scanf("%d", &n);

  result=somaNaturais(n);

  return 0;
}

int somaNaturais(int n){

  int soma=0;
  int num=7;
  int cont=0;

  for(int i=0; i<n; i++){
    while(cont<n){
      printf("\n Naturais: %d", num);
      soma+=num;
      cont++;
      num++;
    }
  }
  printf("\n A soma dos naturais eh: %d", soma);
  return soma;
}
