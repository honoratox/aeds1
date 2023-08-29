/*
  Autor: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler dois valores reais para definir um intervalo fechado;
  - ler certa quantidade de valores reais e contar quantos desses valores estão
  dentro do intervalo, e quantos estão fora dele. Exemplo: n = 10 e [ 14.2
  : 23.1 ] com { 5.1, 10.5, 12.4, 14.2, 15.3, 18.3, 20.4, 21.7, 23.1, 24.2 }
*/

#include <stdio.h>

int main() {

  float a, b, x;
  int n;
  int cont1 = 0;
  int cont2 = 0;

  printf("\n Digite 2 valores reais: ");
  scanf("%f %f", &a, &b);

  printf("\n Quantos valores deseja testar: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("\n Digite um valor para teste: ");
    scanf("%f", &x);

    if (x > a && x < b || x < a && x > b) {
      printf("\n\n %.2f estah dentro do intervalo [%.2f:%.2f]", x, a, b);
      cont1++;
    } 
    else {
      printf("\n\n %.2f nao estah dentro do intervalo [%.2f:%.2f]", x, a, b);
      cont2++;
    }
  }
  printf("\n Quantidade dentro do intervalo: %d", cont1);
  printf("\n Quantidade fora do intervalo: %d", cont2);

  return 0;
}
