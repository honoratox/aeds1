/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler uma quantidade inteira (n) do teclado e, mediante um procedimento, mostrar essa quantidade em valores múltiplos de 7 em ordem crescente.
  Exemplo: n = 5 => { 7, 14, 21, 28, 35 }
*/

#include <stdio.h>

int mostrarMult7 (int n);

int main(){

  int n;
  int result;

  printf("\n Digite a quantidade que deseja ver: ");
  scanf("%d", &n);

  result = mostrarMult7(n);

}

int mostrarMult7 (int n){

  int num=1;
  for(int i=0; i<n; i++){
    while(num<=n){
      printf("\n Primeiros %d multiplos de 7: %d", n, num*7);
       num=num+1;
    }
  }
  return num;
}
