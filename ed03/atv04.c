/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma cadeia de caracteres do teclado;
  - contar e mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas. 
  Exemplo: palavra = "P4LaVr@"
*/

#include <stdio.h>
#include <string.h>

int main(){

  char palavra[100];
  int cont = 0;

  printf("\n Digite uma cadeia de caracteres: ");
  scanf("%s", palavra);

  for(int i=0; i<palavra[i]; i++){
    if(palavra[i]>='A' && palavra[i]<='Z' || palavra[i]>='a' && palavra[i]<='z')
      printf("\n Simbolos que são letras: %c", palavra[i]);
      cont++;
     }
  printf("\n Quantidade: %d", cont);
  return 0;
}
