/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - calcular a soma dos inversos (1/x) dos primeiros valores pares positivos, começando no valor 6 e não múltiplos de 5.
  - Testar essa função para quantidades diferentes e mostrar os resultados em outro método.
  Exemplo: n = 5 => 1/7 + 1/14 + 1/21 + 1/28 + 1/42
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
      if(num%5!=0 && num%2==0){
        printf("\n Inversos pares e nao multiplos de 5: 1/%d", num);
        soma+=num;
        cont++;
      }
      num++;
    }
  }
  printf("\n Soma dos inversos eh ~= 1/%d", soma); 
  return soma;
}
