/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma palavra do teclado;
  - contar e mostrar apenas as letras maiúsculas. 
  Exemplo: palavra = "PaLaVrA"
*/

#include <stdio.h>
#include <string.h>

int main(){

  char palavra[100];
  int cont = 0;

  printf("\n Digite uma palavra com maiusculas e minusculas: ");
  scanf("%s", palavra);

  for(int i=0; i<palavra[i]; i++){
    if(palavra[i]>='A' && palavra[i]<='Z'){
      printf("\n Maiusculas: %c", palavra[i]);
      cont++;
    }
  }
  printf("\n Numero de maiusculas: %d", cont);
  return 0;
}
