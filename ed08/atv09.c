/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - procurar por determinado valor em arranjo e 
  - dizer onde se encontra esse valor,
  - indicada a posição inicial para começar a procura.
  - Para testar, ler o arquivo ("DADOS.TXT"),
  - e armazenar os dados em arranjo;
  - ler do teclado um valor inteiro para ser procurado;
  - determinar onde o valor procurado estiver no arranjo, se houver.
  Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
  onde = acharPosicao ( procurado, 0, n, arranjo );
*/

#include <stdio.h>

int main(){

  FILE *file;
  file = fopen("dadosExerc08.txt", "w");

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

  file = fopen("dadosExerc08.txt", "r");

  printf("\n Digite um valor pra buscar no array: ");
  scanf("%d", &y);

  for(int i=0; i<n; i++){
    fscanf(file, "%d", &x);
    if(y==x){
      printf("\n Valor encontrado na posição %d", i);
    }
  }

  return 0;
}
