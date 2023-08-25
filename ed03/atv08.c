/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler dois valores inteiros (a,b), limites para definirem um intervalo [a:b];
  - ler uma quantidade (n) de valores inteiros a serem testados;
  - ler outros tantos valores quantos os indicados pela quantidade, um (x) por vez;
  - contar e mostrar quantos dentre esses valores lidos (x) os que forem múltiplos de 3, que não forem também múltiplos de 5, e pertençam ao intervalo [a:b].
  Exemplo: [ 20: 60 ], e n = 7, com { 10, 20, 30, 42, 51, 66, 84 }
*/

#include <stdio.h>

int main(){

  int a,b,n,x;
  int cont=0;

  printf("\n Digite 2 valores para serem limites de intervalo: ");
  scanf("%d %d", &a, &b);

  printf("\n Quantos valores deseja testar: ");
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    printf("\n Digite um valor: ");
    scanf("%d", &x);

    if(x>a && x<b || x>b && x<b){
      if(x%3==0 && x%5!=0){
        printf("\n %d Eh multiplo de 3 e nao de 5 e pertence ao intervalo [%d:%d]\n", x, a, b);
        cont++;
      }
    }
  }
  printf("\n Quantidade: %d", cont);
  return 0;
}
