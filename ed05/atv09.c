/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - calcular a soma dos quadrados da adição dos números naturais começando no valor 7.
  - Testar essa função para quantidades diferentes de valores e mostrar os resultados em outro método.
  Exemplo: n = 5 => 49 + 81 + 144 + 256 + 289
*/

#include <stdio.h>
#include <math.h>

int somaQuadrados(int n);

int main(){

  int n, result;

  printf("\n Digite a quantidade de testes: ");
  scanf("%d", &n);

  result=somaQuadrados(n);

  return 0;
}

int somaQuadrados(int n){

  int soma=0;
  int cont=0;
  int num=7;

  for(int i=0; i<n; i++){
    while(cont<n){
      int potencia = pow(num, 2);
      printf("\n Numeros: %d\n Seu quadrado: %d\n", num, potencia);
      cont++;
      soma+=potencia;
      num++;
    }
  }
  printf("\n A soma dos quadrados eh: %d", soma);
  return soma;
}
