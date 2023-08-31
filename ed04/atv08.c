/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma sequência de caracteres do teclado;
  - mostrar todos os símbolos não alfanuméricos (letras e dígitos) em uma cadeia de caracteres separados por meio de uma função. 
  Exemplo: sequência = (A1b2+C3d4)*E5f6
*/

#include <stdio.h>
#include <string.h>

int mostrarSimbolos (char palavra[]);

int main(){

  char palavra[100];
  int result;

  printf("\n Digite uma cadeia de carcteres: ");
  scanf("%s", palavra);

  result = mostrarSimbolos (palavra);

  return 0;
}

int mostrarSimbolos (char palavra[]){

  for(int i=0; i<strlen(palavra); i++){
    if((palavra[i]>='A' && palavra[i]>='Z' || palavra[i]>='a' && palavra[i]>='z' || palavra[i]>='0' && palavra[i]>='0')){
    }
    else{
      printf("\n Simbolos: %c", palavra[i]);
    }
  }
  return 0;
}
