/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler um valor real real (x) do teclado; para ler uma quantidade inteira do teclado e, mediante um procedimento, mostrar essa quantidade em valores ímpares crescentes nos denominadores da sequência: 1 1/x 1/x^3 1/x^5
  
  DICA: Usar da biblioteca <math.h> a função pow ( x, y ) para calcular a potência.
  Exemplo: n = 5 => { 1, 1/x, 1/x^3, 1/x^5, 1/x^7}
*/

#include <stdio.h>
#include <math.h>

int imparesCrescentes(int n, float x);

int main(){

  int n, result;
  float x;

  printf("\n Digite um valor real: ");
  scanf("%f", &x);

  printf("\n Digite a quatidade de testes: ");
  scanf("%d", &n);

  result=imparesCrescentes(n, x);

  return 0;  
}

int imparesCrescentes(int n, float x){

  int mult=1;
  int cont=0;
  for(int i=0; i<n; i++){
    while(cont<n){
      float potencia=pow(x, mult);
      if((int)potencia%2==0){
        mult +=1;
      }
      printf("\n Sequencia: 1/%.2f", potencia);
      mult +=1;
      cont++;
    }
  }
  return mult;
}
