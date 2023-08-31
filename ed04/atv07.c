/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma sequência de caracteres do teclado;
  - mostrar a quantidade de dígitos ímpares em uma cadeia de caracteres contados por uma função definida para receber uma cadeia de caracteres como parâmetro.
  DICA: Considerar o valor inteiro do código equivalente (type casting) para teste.
  Exemplo: sequência = A1b2C3d4E5f6
*/

#include <stdio.h>
#include <string.h>

int digitosImpares(char palavra[]);

int main(){

  char palavra[100];
  int result;

  printf("\n Digite uma cadeia de caracteres: ");
  scanf("%s", palavra);

  result = digitosImpares(palavra);

  printf("\n Quantidade: %d", result);

  return 0;
}

int digitosImpares(char palavra[]){

  int cont=0;
  for (int i=0; i<strlen(palavra); i++){
    if((int)palavra[i]>='0' && (int)palavra[i]<='9'){
      if((int)palavra[i]%2!=0){
        cont++;
      }
    }
  }
  return cont;
}
