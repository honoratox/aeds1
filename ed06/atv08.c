/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - contar os dígitos com valores pares em uma cadeia de caracteres.
  - Testar essa função para cadeias de diferentes tamanhos.
  Exemplo: sequência = "P4LaVr@1"
*/

#include <stdio.h>

int contarDigitosPares(char str[], int posicao);

int main() {
  char cadeia[100]; // Assumindo um tamanho máximo da sequência

  printf("Digite uma cadeia de caracteres: ");
  scanf("%s", cadeia);

  int resultado = contarDigitosPares(cadeia, 0);

  printf("Quantidade de digitos pares na cadeia: %d\n", resultado);

  return 0;
}

int contarDigitosPares(char str[], int posicao) {
  if (str[posicao] == '\0') {
    return 0;
  }

  int digito = str[posicao] - '0'; // Converte o caractere em um valor inteiro

  if (digito >= 0 && digito <= 9 && digito % 2 == 0){ // Verifica se o dígito é par
    return 1 + contarDigitosPares(str, posicao + 1); // Incrementa o contador e chama recursivamente
  } 
  else {
    return contarDigitosPares(str, posicao + 1); // Chama recursivamente sem incrementar o contador
  }
}
