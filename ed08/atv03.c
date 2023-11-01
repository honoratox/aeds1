/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - gerar um valor inteiro aleatoriamente dentro de um intervalo, cujos limites de início e de fim serão recebidos como parâmetros;
  - Para para testar, ler os limites do intervalo do teclado; 
  - ler a quantidade de elementos ( N ) a serem gerados;
  - gerar essa quantidade ( N ) de valores aleatórios dentro do intervalo e armazená-los em arranjo;
  - gravá-los, um por linha, em um arquivo ("DADOS.TXT").
  - A primeira linha do arquivo deverá informar a quantidade de números aleatórios ( N ) que serão gravados em seguida.
  DICA: Usar a função rand( ), mas tentar limitar valores muito grandes (usar mod=%).
  Exemplo: valor = gerarInt ( inferior, superior );
*/

#include <stdio.h>
#include <time.h>

int main(){

  FILE *file;
  file = fopen("dadosExerc03.txt", "w" );
  
  int a, b, n, aleatorio;
  int array[n];

  printf("\n Digite valores para limites de um intervalo: ");
  scanf( "%d %d", &a, &b );

  printf("\n Tamanho do intervalo: ");
  scanf("%d", &n);

  fprintf(file, "\n Aleatorios gravados em seguida: %d", n);

  srand(time(NULL));

  fprintf(file, "\n [%d:%d] = { ", a, b);
  for(int i=0; i<n; i++){
    array[i] = a + rand() % (b-a+1);
//limite inferior + rand() % (limite superior + 1 - limite inferior)
    fprintf(file, "%d ", array[i]);

    array[i] = aleatorio;
  }
  fprintf(file, " }");

  fclose(file);
  return 0;
}
