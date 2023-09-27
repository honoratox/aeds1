/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - calcular a quantidade de maiúsculas maiores que 'K' em uma cadeia de caracteres.
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

  printf("Quantidade de maiusuclas maiores que K na cadeia: %d\n", resultado);

  return 0;
}

int contarDigitosPares(char str[], int posicao) {
  if (str[posicao] == '\0') {
    return 0;
  }

  if (str[posicao] >= 'K' && str[posicao] <= 'Z'){ // Verifica se é maior que K e maiúscula
    return 1 + contarDigitosPares(str, posicao + 1); // Incrementa o contador e chama recursivamente
                                                     // 'return 1+' = adiciona 1 a cada rodagem com verificação verdadeira
  } 
  else {
    return contarDigitosPares(str, posicao + 1); // Chama recursivamente sem incrementar o contador
  }
}
