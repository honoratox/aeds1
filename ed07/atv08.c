/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler um valor inteiro do teclado, e até atingir essa quantidade, um valor por vez,
  - gravar o valor correspondente aos primeiros termos pares da série de Fibonacci.
  - Gravar em outro arquivo ("RESULTADO08.TXT") cada quantidade e seu resultado.
  Exemplo: n = 5 => { 2, 8, 34, 144, 610}
*/

#include <stdio.h>

int fibonacci (int n);

int main(){

  FILE *file;
  file = fopen("resultado08.txt", "w");

  int n;
  int cont=0;

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &n);


  for(int i=0; cont<n; i++) {
    int termo = fibonacci(i);
    if(termo%2==0 && termo>0){
      fprintf(file, "%d ", termo);
      cont++;
    }
  }

  return 0;
}

int fibonacci (int n){

  if(n<=1){
    return n;
  }
  else{
   return fibonacci(n-1)+fibonacci(n-2); //soma os 2 termos anteriores de n 
  }
}
