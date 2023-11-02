/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - procurar o maior valor par em um arranjo.
  - Para testar, receber um nome de arquivo como parâmetro e aplicar a função sobre o arranjo com os valores lidos;
  DICA: Usar o primeiro valor par da tabela, se houver, como referência inicial.
  Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
  maior = acharMaiorPar ( n, arranjo );
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int acharMaiorPar (int n, int array[]);

int main(){

  FILE *file;
  file = fopen ("dadosExerc05.txt", "w");

  int n;

  printf("\n Digite o tamanho do array: ");
  scanf("%d", &n);

  int array[n];

  srand(time(NULL));

  fprintf(file,"\n Array[%d] = { ", n);
  for(int i=0; i<n; i++){
    array[i] = 1+ rand() % 100;
    fprintf(file,"%d ", array[i]);
  }  
  fprintf(file,"}");

  int maiorPar = acharMaiorPar (n, array);
  fprintf(file, "\n Maior par: %d", maiorPar);

  fclose(file);
  return 0;
}

int acharMaiorPar (int n, int array[]){

  int maiorPar = 102; //valor que não existe no array

  for(int i=0; i<n; i++){
    if(array[i]%2==0){
      if(maiorPar==102 || array[i]>maiorPar){
        maiorPar = array[i];
      }
    }
  }

    return maiorPar;
}
