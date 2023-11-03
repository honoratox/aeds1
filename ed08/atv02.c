/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler um arranjo com inteiros positivos de arquivo.
  - Valores negativos e também os pares deverão ser descartados.
  - O arranjo e o nome do arquivo serão dados como parâmetros.
  - Guardar, em arquivo primeiro o tamanho, depois os elementos, um dado por linha.
  - Para testar, ler diferentes nomes e quantidade de dados.
*/

#include <stdio.h>

int main(){

  FILE *file;
  file = fopen("dadosExerc02.txt", "w");

  int n, x;

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

  file = fopen("dadosExerc02.txt", "r");

  FILE *file2;
  file2 = fopen( "dadosExerc02.1.txt", "w");

  for(int i=0; i<n; i++){
    fscanf(file, "%d", &x);
    if(x%2==0 || x<0){
    }
    else{
      fprintf(file2, "\n Tamanho: %d", n);
      fprintf(file2, "\n Valores: %d", x);
    }
  }
  fclose(file2);
  return 0;
}
