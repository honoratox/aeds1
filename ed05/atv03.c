/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - a ler uma quantidade inteira do teclado e, mediante um procedimento, mostrar essa quantidade em valores ímpares potências de 5 em ordem decrescente.
  Exemplo: n = 5 => { 3125, 625, 125, 25, 5 }
*/

#include <stdio.h>
#include <math.h>

int multCincoDecres(int n);

int main(){

  int n, result;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  result = multCincoDecres(n);
  
}

int multCincoDecres(int n){

  int mult=n;
  for(int i=0; i<n; i--){
    if(mult%2!=0){
      while(mult>0){
        int potencia = pow(5, mult);
        printf("\n Potencias decrescentes: %d", potencia);
        mult=mult-1;
      }
    }
  }
  return mult;
}
