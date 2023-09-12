/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - calcular a soma dos inversos (1/x) das adições de números naturais começando no valor 6.
  - Testar essa função para quantidades diferentes de valores e mostrar os resultados em outro método.
  Exemplo: n = 5 => 1/6 + 1/7 + 1/9 + 1/12 + 1/16
*/

#include <stdio.h>

int somaInversos(int n);

int main(){

  int n, result;

  printf("\n Digite a quantidade de testes: ");
  scanf("%d", &n);

  result=somaInversos(n);
  return 0;
}

int somaInversos(int n){

  int soma=0;
  int cont=0;
  int num=6;

  for(int i=0; i<n; i++){
    while(cont<n){
      printf("\n Inversos dos naturais a partir de 6: 1/%d", num);
      cont++;
      soma+=num;
      num++;
    }
  }
  printf("\n Soma dos inversos naturais ~=: 1/%d", soma);
  return soma;
}
