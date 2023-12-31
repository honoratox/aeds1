/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - procurar por determinado valor em arranjo e
  - dizer quantas vezes esse valor pode ser encontrado,
  - indicada a posição inicial para começar a procura.
  - Para testar, ler o arquivo ("DADOS.TXT"),
  - e armazenar os dados em arranjo;
  - ler do teclado um valor inteiro para ser procurado;
  - determinar quantas vezes o valor procurado aparece no arranjo, se ocorrer.
  Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
  vezes = acharQuantos ( procurado, 0, n, arranjo );
*/

#include <stdio.h>

int main(){

  FILE *file;
  file = fopen("dadosExerc10.txt", "w");

  int n, x, y;

  printf("\n Digite o tamanho do array: ");
  scanf("%d", &n);

  int array[n];

  for(int i=0; i<n; i++){
    printf("\n Digite um valor: ");
    scanf("%d", &x);
    fprintf(file, "%d ", x);

    array[i] = x;
  }
  fclose(file);
  
  file = fopen("dadosExerc10.txt", "r");

  printf("\n Digite um valor pra buscar no array: ");
  scanf("%d", &y);
  
  for(int i=0; i<n; i++){
    fscanf(file, "%d", &x);
    if(y==x){
      printf("\n Valor encontrado na posicao: %d", i);
    }
  }

  return 0;
}
