/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado para representar certa quantidade de valores 
a serem somados dentre os primeiros gravados no exercício anterior.
  - Testar essa função para quantidades diferentes. 
  - Gravar em outro arquivo ("RESULTADO06.TXT") cada quantidade e seu resultado.
*/
/
#include <stdio.h>
#include <math.h>

void lerArquivo(int n, float *soma);
void gerarArquivo (int n, float *soma);

int main(){
  
  int n;
  float soma = 0.0;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  lerArquivo(n, &soma);
  gerarArquivo (n, &soma);

  return 0;
}

void lerArquivo(int n, float *soma){
  
  FILE *file;
  file = fopen("resultado05.txt", "r");

  float valor;

  for (int i=0; i<n; i++){
    fscanf(file, "%f", &valor);
    *soma += valor;
  }

  fclose(file);
}

void gerarArquivo (int n, float *soma){

  FILE *resultFile;
  resultFile = fopen("resultado06.txt", "w");
  fprintf(resultFile, "\n A soma eh: %f", &soma);
  fclose(resultFile);
}
