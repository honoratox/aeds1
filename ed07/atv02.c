
        //NAO TO CONSEGUINDO PRINTAR EM ORDEM DESCRESCENTE//

/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado e gravar essa quantidade em múltiplos de 7, ímpares, em ordem decrescente encerrando em 21.
  Exemplo: n = 5 => { 77, 63, 49, 35, 21 }
*/

#include <stdio.h>
#include <math.h>

int main() {

  FILE *file;
  file = fopen("resultado02.txt", "w");

  int n;
  int cont=0;
  int valor=21;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);

  int valores[n];

  for(int i=0; i<n; i++){
    if(valor%7==0 && valor%2!= 0){
      valores[cont] = valor;
      cont++;
    }
    else
    {
      i--;
    }
    valor += 7;
  }

  for(int i = n - 1 ; i >= 0 ; i--)
  {
    fprintf(file,"\n %d", valores[i]);
  }
  
  fclose(file);
  return 0;
}
