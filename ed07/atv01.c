/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e gravar essa quantidade em múltiplos de 3, ímpares, em ordem crescente, começando em 9.
  Exemplo: n = 5 => { 9, 15, 21, 27, 33 }
*/

#include <stdio.h>

int main(){

  FILE *file;
  file = fopen("resultado01.txt", "w");

  int n;
  int cont=0;
  int valor=9;

  printf("\n Digite um valor inteiro: ");
  scanf(" %d", &n);

  while(cont<n){
    if(valor%2==0){
    }
    else{ // valor ímpar
      if(valor%3==0){ //multiplo de 3
        fprintf(file,"\n %d", valor);
        cont++;
      }
    }
    valor+=1; //soma um toda rodagem pra verificar dnv
  }
  

  fclose(file); //fecha corretamente o arquivo
  return 0;
}
