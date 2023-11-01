/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - procurar o menor valor ímpar em um arranjo.
  - Para testar, receber um nome de arquivo como parâmetro e aplicar a função sobre o arranjo com os valores lidos;
  DICA: Procurar o primeiro valor ímpar da tabela como referência inicial para o menor valor ímpar.
  Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
  menor = acharMenorImpar ( n, arranjo );
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int acharMenorImpar(int n, int array[]);

int main() {

  FILE *file;
  file = fopen("dadosExerc04.txt", "w");
  int n;

  printf("Digite um tamanho para o array: ");
  scanf("%d", &n);

  int array[n];

  // Preencher o array com valores aleatórios
  srand(time(NULL)); // Inicializa o gerador de números aleatórios com uma semente

  fprintf(file, "\n Array[%d] = { ", n);
  for (int i=0; i<n; i++){
    array[i] = 1 + rand() % 100; // Gere números aleatórios de 1 a 100
    fprintf(file, "%d ", array[i]);
  }
  fprintf(file, "}");

  int menorImpar = acharMenorImpar(n, array);

  fprintf(file, "\n O menor valor impar no array é: %d", menorImpar);

  return 0;
}

int acharMenorImpar(int n, int array[]){
    
  int menorImpar = -1; // Inicializa com um valor que não existe no array

  for(int i=0; i<n; i++){ //soma sempre 1 ao atual -1, o que facilita pra encontrar o 1º impar
    if(array[i]%2!=0){ // Verifica se o número é ímpar
      if(menorImpar==-1 || array[i]<menorImpar){ //
        menorImpar = array[i];
      }
    }
  }

  return menorImpar;
}
