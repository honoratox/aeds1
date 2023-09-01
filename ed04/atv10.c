/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler certa quantidade de cadeias de caracteres do teclado, uma por vez;
  - mostrar e contar a quantidade de símbolos alfanuméricos (letras e dígitos)
  em cada palavra, por meio de uma função, e calcular o total acumulado de todas
  as palavras. Exemplo: sequências = { (A1b2+C3d4)*E5f6, [P&&Q]||[R&&!S],
  (a<b&&b<c) }
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int simbolosAlfa(char palavra[], int n, int somaSimbolos);

int main() {

  int n;
  int total = 0;
  char palavra[100];
  int somaSimbolos = 0;

  printf("\n Quantidade de testes: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("\n\n Digite uma cadeia: ");
    scanf("%s", palavra);
    
    somaSimbolos = simbolosAlfa(palavra, n, somaSimbolos);
    
    printf("\n Quantidade na palavra: %d", somaSimbolos);
  }
  total += somaSimbolos;
  printf("\n Quantidade total de simbolos: %d", total);
  return 0;
}

int simbolosAlfa(char palavra[], int n, int somaSimbolos) {
  for (int i = 0; i < palavra[i]; i++) {
    if (isalnum(palavra[i])) {
      printf("\n Simbolos: %c", palavra[i]);
      somaSimbolos++;
    }
  }
  return somaSimbolos;
}
