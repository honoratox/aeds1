/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma cadeia de caracteres do teclado;
  - contar e mostrar todos os dígitos, percorrendo do fim para o início da cadeia de caracteres.
  Exemplo: palavra = "P4LaVr@1"
*/

#include <stdio.h>
#include <string.h>

int main(){

  char palavra[100];
  int cont=0;

  printf("\n Digite uma cadeia de carcteres: ");
  scanf("%s", palavra);

  for(int i=0; i<palavra[i]; i++){
    if(palavra[i]>='0' && palavra[i]<='9'){
      printf("\n Digitos: %c", palavra[i]);
      cont++; // ta dando erro na soma
    }
  }
  printf("\n Quantidade: %d", cont);
  return 0;
}
