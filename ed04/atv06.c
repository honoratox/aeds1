/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma sequência de caracteres do teclado;
  - mostrar as letras (tanto maiúsculas, quanto minúsculas) maiores que 'K' e 'k' separadas por uma função definida para receber uma cadeia de caracteres como parâmetro.
  Exemplo: sequência = AaKkLmM0*Nx
*/

#include <stdio.h>
#include <string.h>

int mostrarLetras (char palavra[]);

int main(){

  char palavra[100];
  int result;

  printf("\n Digite uma cadeia de caracteres: ");
  scanf("%s", palavra);

  result = mostrarLetras(palavra);
  
  return 0;
}

int mostrarLetras (char palavra[]){

  for (int i=0; i<strlen(palavra); i++){
    if(palavra[i]>'k' && palavra[i]<='z' || palavra[i]>'K' && palavra[i]<='Z'){
      printf("\n Letras maiores que 'K' e 'k': %c", palavra[i]);
    }
  }
  return 0;
}
