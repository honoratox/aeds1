/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma cadeia de caracteres do teclado;
  - dizer se a sequência contém apenas símbolos que não são letras.
  Exemplo: sequência = "4@0!1#""
*/

#include <stdio.h>
#include <string.h>

int main(){

  char palavra[100];

  printf("\n Digite uma cadeia de caracteres: ");
  scanf("%s", palavra);

  for(int i=0; i<palavra[i]; i++){
    if(palavra[i]>='A' && palavra[i]<='Z' || palavra[i]>='a' && palavra[i]<='b'){
    }
    else{
      printf("\n Apenas simbolos que nao sao letras: %c", palavra[i]);
    }
  }
  return 0;
}
