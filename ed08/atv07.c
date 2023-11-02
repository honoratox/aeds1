/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - receber como parâmetro um arranjo e dizer se está ordenado, ou não, em ordem decrescente.
  DICA: Testar se não está desordenado, ou seja, se existe algum valor que seja maior que o seguinte.
  Não usar break !
*/

#include <stdio.h>

int main(){

  FILE *file;
  file = fopen("dadosExerc07.txt", "w");
  
  int n,x;

  printf("\n Digite o tamanho do array: ");
  scanf("%d", &n);

  int array[n];

  for(int i=0; i<n; i++){
    printf("\n Digite o valor da posição %d: ", i);
    scanf("%d", &array[i]);

    fprintf(file, "%d ", array[i]);
  }

  int cont=0;
  int cont1=0;

  for(int i=0; i<n; i++){
    fscanf(file, "%d", &array[i]);
    if(array[i]>array[i+1]){
      cont++;
      if(cont>=4){
        printf("\n Esta em ordem decrescente");
      }
    }
    else if(array[i]<array[i+1]){
      cont1++;
      if(cont1>=4){
        printf("\n Esta em ordem crescente");
      }
    }
    else{
      printf("\n O array nao esta em nenhuma ordem");
    }
  }
  
  fclose(file);
  return 0;
}
