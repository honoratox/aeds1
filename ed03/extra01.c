/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler uma linha do teclado;
  - separar em outra cadeia de caracteres e mostrar todos os símbolos não alfanuméricos (letras ou dígitos) na cadeia de caracteres.
  DICA: A leitura de uma linha inteira, incluindo espaços em branco, poderá ser feita por meio de IO_readln( "_" ), ou gets( ), embora menos recomendado.
  Exemplo: sequência = "P4LaVr@O! & pAl4vR1n#a"
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

  char palavra[100];

  printf("\n Digite uma linha do teclado: ");
  fgets(palavra, sizeof(palavra), stdin);   // fgets lê e armazena a linha do teclado (ele lê linhas em branco, diferente do scanf)
                                            // sizeof(variavel) informa o tam max da variável, informado anteriormente no 'char palavra[100]'
                                            // stdin recebe a informação de entrada do usuário
  printf("\n Simbolos nao alfanumericos na linha: ");

  for(int i=0; i<palavra[i]; i++){   // Verifica se o caractere não é palavra, digito ou espaço em branco
    if(!isalnum(palavra[i]) && !isspace(palavra[i])){   // a '!' antes das funções é significa negação, oq inverte o sentido delas
      printf("\n Simblos especial: %c", palavra[i]);    // a função 'isalnum' = verifica se é letra ou um dígito
    }                                                   // a função 'isspace' = verifica se é um espaço em branco
  }
  return 0;
}

//OBS: fgets só é usado para quando for ler uma linha
