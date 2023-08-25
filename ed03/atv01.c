/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma palavra do teclado;
  - mostrar as letras maiúsculas.
  DICA: Definir um teste para determinar se um caractere é letra maiúscula.
  Exemplo: palavra = "PaLaVrA" 
*/

#include <stdio.h>
#include <string.h>

int main(){

  char palavra[100];

  printf("\n Digite uma palavra com maiusculas e minusculas: ");
  scanf("%s", palavra);

  for (int i=0; i<palavra[i]; i++){
    if(palavra[i]>='A' && palavra[i]<='Z'){
      printf("\n Maiusculas: %c", palavra[i]);
    }
  }
  return 0;
}
