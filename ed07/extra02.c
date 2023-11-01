/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler palavras de um arquivo, uma por linha, e
  - contar quantas começam com a letra 'd' (ou 'D')
*/

#include <stdio.h>

int main(){

  FILE *sendFile;
  sendFile = fopen("palavrasExtra02.txt", "w");

  FILE *readFile;
  readFile = fopen("palavrasExtra02.txt", "r");

  int n;
  int cont=0;
  char palavra[100];

  printf("\n Quantas palavras deseja mandar pro arquivo: ");
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    printf("\n Digite uma palavra: ");
    scanf("%s", palavra);
    fprintf(sendFile, "\n %s", palavra);
  }
  fclose(sendFile);

  for(int i=0; i<n; i++){
    fscanf(readFile, "%s", palavra);
    if(palavra[0]=='D' || palavra[0]=='d'){
      cont++;
    }
    else{
    }
  }
  fclose(readFile);

  printf("\n Palavras que comecam com d ou D: %d", cont);
  return 0;
}
