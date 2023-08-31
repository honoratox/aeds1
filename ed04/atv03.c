/*
  Autor: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler uma sequência de caracteres do teclado;
  - mostrar a quantidade de letras maiúsculas maiores que 'K' contadas por uma função definida para receber uma cadeia de caracteres como parâmetro. 
  Exemplo: sequência = AaKkLmM0*Nx
*/

#include <stdio.h>
#include <string.h>

int contMaiuscula(char palavra[]);

int main() {

  char palavra[100];
  int result;

  printf("\n Digiteuma cadeia de carcteres: ");
  scanf("%s", palavra);

  result = contMaiuscula(palavra);

  printf("\n Quantidade: %d", result);

  return 0;
}

int contMaiuscula(char palavra[]) {

  int cont = 0;
  for (int i = 0; i < strlen(palavra); i++) {
    if (palavra[i] > 'K' && palavra[i] <= 'Z') {
      printf("\n Maiuculas maiores que 'K': %c", palavra[i]);
      cont++;
    }
  }
  return cont;
}
