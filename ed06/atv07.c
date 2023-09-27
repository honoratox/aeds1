/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler uma cadeia de caracteres e chamar procedimento recursivo para mostrar cada símbolo separadamente, um por linha.
  Exemplo: sequência = "abcde"
*/

#include <stdio.h>
#include <string.h>

void mostrarCaracteres (char str[], int posicao);

int main(){

  char cadeia[100];

  printf("\n Digite uma cadeia de caracteres: ");
  scanf("%s", cadeia);

  printf("\n Caracteres:\n");
  mostrarCaracteres (cadeia, 0);

  return 0;
}

void mostrarCaracteres (char str[], int posicao){//variavel posição indica qual letra deve ser capturada, inicianod em 0

  if(str[posicao] == '\0'){ // encerrar quando nn tiver mais caracteres pra serem lidos
    return;
  }

  printf("\n %c", str[posicao]); // Mostrar o caractere atual

  mostrarCaracteres(str, posicao + 1); // Chamada recursiva que adiciona 1 a posição, ou seja, pula pro próximo caractere
}
