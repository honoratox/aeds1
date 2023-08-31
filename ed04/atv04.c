/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma sequência de caracteres do teclado;
  - mostrar as letras maiúsculas maiores que 'K' separadas por uma função definida para receber uma cadeia de caracteres como parâmetro.
  Exemplo: sequência = AaKkLmM0*Nx
*/

#include <stdio.h>
#include <string.h>

int mostrarMaiusculas (char palavra[]);

int main(){

  char palavra[100];
  int result;

  printf("\n Digite uma cadeia de carcteres: ");
  scanf("%s", palavra);

  result = mostrarMaiusculas (palavra);

  return 0;
}

int mostrarMaiusculas (char palavra[]){

  for(int i=0; i<strlen(palavra); i++){
    if(palavra[i]>'K' && palavra[i]<='Z'){
      printf("\n Maiusculas maiores que 'K': %c", palavra[i]);
    }
  }
  return 0;
}
