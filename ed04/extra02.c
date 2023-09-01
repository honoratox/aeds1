/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - ler duas cadeias de caracteres do teclado;
  - calcular qual das duas sequências possui a maior quantidade de dígitos, por meio de uma função. 
  Exemplo: sequência = { A1b2, C3d4E5 }
*/

#include <stdio.h>
#include <string.h>

int contCadeia1(char cadeia1[]);
int contCadeia2(char cadeia2[]);
int qualMaior (int cont1, int cont2);

int main(){

  char cadeia1[100];
  char cadeia2[100];
  int result, cont1, cont2;

  printf("\n Digite 2 cadeias de caracteres: ");
  scanf("%s %s", cadeia1, cadeia2);

  cont1 = contCadeia1(cadeia1);
  cont2 = contCadeia2(cadeia2);
  result = qualMaior(cont1, cont2);
  
  return 0;
}

int contCadeia1(char cadeia1[]){

  int cont1=0;
  for(int i=0; i<strlen(cadeia1); i++){
    cont1++;
  }
  return cont1;
}

int contCadeia2(char cadeia2[]){

  int cont2=0;
  for(int i=0; i<strlen(cadeia2); i++){
    cont2++;
  }
  return cont2;
}

int qualMaior (int cont1, int cont2){

  if(cont1>cont2){
    printf("\n A primeira eh maior que a segunda");
  }
  else{
    printf("\n A segunda eh maior que a primeira");
  }
  return 0;
}
