/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler dois valores reais (a e b), maiores que 0 e menores que 1, confirmadamente, para definirem um intervalo aberto (a:b);
  - ler uma quantidade (n) de valores reais a serem testados, e ler outros tantos valores quantos os indicados por essa quantidade;
  - contar e mostrar todos os valores lidos que tenham suas partes fracionárias fora do intervalo ]a:b[. 
  DICA: Usar conformação de tipo (type casting) para isolar a parte inteira (int), e obter a parte fracionária mediante a subtração da parte inteira, antes de testar.
  Exemplo: ( 0.25: 0.75 ), e n = 7, com { 1.0, 2.8, 3.3, 4.1, 5.5, 6.9, 8.4 }
*/

#include <stdio.h>

int main(){

  float a,b,x;
  int n;
  int cont=0;

  printf("\n Digite 2 valores entre 0 e 1 para definir um intervalo: ");
  scanf("%f %f", &a, &b);

  if(a<=0 || a>=1 || b<=0 || b>=1){
    printf("Valores inválidos");
    printf("\n Digite 2 valores entre 0 e 1 para definir um intervalo: ");
  scanf("%f %f", &a, &b);
  }

  printf("\n Quantos valores deseja testar: ");
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    printf("\n Digite um valor: ");
    scanf("%f", &x);
    
    float partFracionaria = x - (int)x; // subtração do todo menos a parte inteira

    if(partFracionaria<=a || partFracionaria>=b){
      printf("\n Valores com parte fracionaria fora do intervalo: %.2f", x);
      cont++;
    }
  }
  printf("\n Quantidade: %d", cont);
  return 0;
}
