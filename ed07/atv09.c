/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623
  
  - calcular a quantidade de maiúsculas em cadeia de caracteres de um arquivo texto.
  - Gravar em outro arquivo ("RESULTADO09.TXT") cada cadeia de caracteres e seus resultados.
  - Testar essa função com cadeias de tamanhos diferentes.
  Exemplo: PaReDe de TiJoLoS VerMElHOS
*/

#include <stdio.h>
#include <string.h>

int main(){

  FILE *file;
  file= fopen("resultado09.txt", "w");

  char palavra[100];
  int cont=0;

  printf("\n DIgite uma cadeia de carcteres: ");
  fgets(palavra, sizeof(palavra), stdin);

  for(int i=0; i<sizeof(palavra); i++){
    if(palavra[i]>='A' && palavra[i]<='Z'){
      fprintf(file,"\n Maiusculas: %c", palavra[i]);
      cont++;
    }
  }

  fprintf(file,"\n Quantidade de maiusculas: %d", cont);

  return 0;
}
