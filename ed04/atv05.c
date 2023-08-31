/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma sequência de caracteres do teclado;
  - mostrar a quantidade de letras (tanto maiúsculas, quanto minúsculas) maiores que 'K' e 'k' contadas por uma função definida para receber uma cadeia de caracteres como parâmetro.
  Exemplo: sequência = AaKkLmM0*Nx
*/

#include <stdio.h>
#include <string.h>

int contarLetras (char palavra[]);

int main(){

  char palavra[100];
  int result;

  printf("\n Digite uma cadeia de carcteres: ");
  scanf("%s", palavra);

  result = contarLetras (palavra);

  printf("\n Quantidade: %d", result);
  
  return 0;
}

int contarLetras (char palavra[]){

  int cont=0;
  for (int i=0; i<strlen(palavra); i++){
    if(palavra[i]>'k' && palavra[i]<='z' || palavra[i]>'K' && palavra[i]<='Z'){
      cont++;
    }
  }
  return cont;
}
