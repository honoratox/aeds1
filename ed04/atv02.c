/*
  Autor: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler uma sequência de caracteres do teclado;
  - contar e mostrar a quantidade de letras maiúsculas maiores que 'K'. 
  DICA: Definir uma função para determinar se um caractere é letra maiúscula.
  Exemplo: sequência = AaKkLmM0*Nx
*/

#include <stdio.h>
#include <string.h>

int main(){

  char palavra[100];
  int cont = 0;

  printf("\n Digite uma cadeia de carcteres: ");
  scanf("%s", palavra);

  for (int i=0; i<palavra[i]; i++){
    if(palavra[i]>'K' && palavra[i]<'Z'){
      printf("\n Maiusculas maiores que 'K': %c", palavra[i]);
      cont++;
    }
  }
  printf("\n Quantidade: %d", cont);

  return 0;
}
