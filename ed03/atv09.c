/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler dois valores reais (a e b), o primeiro (a) menor que o segundo (b), confirmadamente, para definirem um intervalo aberto (a:b);
  - ler a quantidade (n) de valores reais a serem testados, e ler outros tantos valores (x) quantos os indicados por essa quantidade;
  - contar e mostrar todos os valores lidos, pertencentes ao do intervalo, cujas partes inteiras forem ímpares.
  DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int), antes de testar se é ímpar (ver 0110).
  Exemplo: ( 2.7: 7.9 ), e n = 7, com { 1.0, 2.4, 3.3, 4.1, 5.5, 6.3, 8.4 }
*/

#include <stdio.h>

int main(){

  float a,b,x;
  int n;
  int cont=0;

  printf("\n Digite 2 valores para serem limites de intervalo: ");
  scanf("%f %f", &a, &b);
  
  if(a>b){
    printf("\n O primeiro valor deve ser menor que o primeiro!\n DIgite outros valores: ");
    scanf("%f %f", &a, &b);
  }

  printf("\n Quantos valores deseja testar: ");
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    printf("\n Digite um valor: ");
    scanf("%f", &x);

    if(x>a && x<b){
      if((int)x%2!=0){ // Usei os parênteses "(int)x" para transformar momentaneamente o 'floa't em 'int' e considerar apenas a parte inteira
        printf("\n %f Eh impar e pertence ao intervalo (%f:%f)\n", x, a, b);
        cont++;
      }
    }
  }
  printf("\n Quantidade: %d", cont);
  return 0;
}
