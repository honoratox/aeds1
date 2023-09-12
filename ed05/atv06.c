/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - calcular a soma dos primeiros valores pares positivos começando no valor 3 e não múltiplos de 4.
  - Testar essa função para quantidades diferentes e mostrar os resultados em outro método.
  Exemplo: n = 5 => 3 + 6 + 9 + 15 + 182
*/

#include <stdio.h>

int primeirosMultQuatro(int n);

int main(){

  int n, result;

  printf("\n Digite a quantidade de testes: ");
  scanf("%d", &n);

  result=primeirosMultQuatro(n);

  return 0;
}

int primeirosMultQuatro(int n){

  int cont=0;
  int num=3;
  int soma=0;
  for(int i=0; i<n; i++){
    while(cont<n){
      if(num%2==0 && num%4!=0){
        printf("\n Soma dos primeiros %d valores: %d", n, num);
        cont++;
        soma +=num; //armazena na variável soma todos os valores printados na tela
      }
      num++;
    }
  }
  printf("\n A soma de todos os valores eh: %d", soma);
  return num;
}
