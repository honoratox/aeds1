/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma cadeia de caracteres do teclado;
  - contar e mostrar tudo o que não for dígito e também não for letra.
  Exemplo: palavra = "P4LaVr@O!"
*/

#include <stdio.h>
#include <string.h>

int main(){

  char palavra[100];
  int cont=0;

  printf("\n Digite uma cadeia de caracteres: ");
  scanf("%s", palavra);

  for(int i=0; i<palavra[i]; i++){
    if(palavra[i]>='A' && palavra[i]<='Z' || palavra[i]>='a' && palavra[i]<='z' || palavra[i]>='0' && palavra[i]<='9'){
    }
    else{
      printf("\n Nao eh digito nem letra: %c", palavra[i]);
      cont++;
    }
  }
  printf("\n Quantidade: %d", cont);
  return 0;
}
