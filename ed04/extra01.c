/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler certa quantidade de cadeias de caracteres do teclado;
  - contar a quantidade de símbolos alfanuméricos, incluindo espaços em branco, em cada palavra, e calcular o total de todas as palavras, por meio de uma função. 
  OBS.: Para a leitura incluir espaços em branco, usar IO_readln( ), ou gets( ), menos recomendado.
  Exemplo: sequência = (A1b2 + C3d4) * E5f6
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarAlfa(char palavra[]);

int main(){

  char palavra[100];
  int n;
  int total = 0;

  printf("\n\n Digite a quantidade de testes: ");
  scanf("%d", &n);

  getchar(); // consome o caractere '\n' deixado na linha anterior

  for(int i=0; i<n; i++){
    printf("\n Digite uma cadeia de carcteres: ");
    fgets(palavra, sizeof(palavra), stdin);

    total += contarAlfa(palavra);
  }

  printf("\n Total: %d", total);
  return 0;
}

int contarAlfa(char palavra[]){

  int cont=0;

  for(int i=0; i<strlen(palavra); i++){
    if(isalnum(palavra[i])){
      cont++;
      printf("\n Total nessa palavra: %d", cont);
    }
  }
  return cont;
}
