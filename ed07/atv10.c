/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - contar dígitos maiores ou iguais a 5 em uma cadeia de caracteres.
  - Gravar em outro arquivo ("RESULTADO10.TXT") cada cadeia de caracteres e seu resultado.
  - Testar essa função para cadeias de tamanhos diferentes.
  Exemplo: P4R3D3 de T1J0L05 V3rMElH05
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

  FILE *file;
  file = fopen("resultado10.tct", "w");

  int cont=0;
  char palavra[100];

  printf("\n Digite uma cadeia de caracteres: ");
  fgets(palavra, sizeof(palavra), stdin);

  for(int i=0; i<sizeof(palavra); i++){
    if(isdigit(palavra[i])){
      if(palavra[i]>='5'){
        fprintf(file, "\n Digitos >=5 : %c", palavra[i]);
        cont++;
      }
      else{
        fprintf(file, "\n Nao ha digitos >-5");
      }
    }
  }

  fprintf(file, "\n Total de digitos: %d", cont);
  return 0;
}
