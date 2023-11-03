/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - para determinar a média valores em um arranjo.
  - Para testar, ler o arquivo ("DADOS.TXT")
  - armazenar os dados em um arranjo;
  - separar em dois outros arquivos,
  - os valores maiores ou iguais à média, e os menores que ela.
  Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
  media = acharMedia ( n, arranjo );
*/

#include <stdio.h>

int main()
{

    int soma = 0;
    int n, x;

    printf("\n Digite o tamanho do array: ");
    scanf("%d", &n);

    int array[n];

    // fala quais os valores do array
    FILE *gravarValores;
    gravarValores = fopen("gravarDadosExerc06.txt", "w");

    for (int i = 0; i < n; i++)
    {
        printf("\n Valores no array: ");
        scanf("%d", &x);
        fprintf(gravarValores, "%d ", x);

    }
    fclose(gravarValores);

    // lê e faz média dos valores do array
    FILE *lerValores;
    lerValores = fopen("gravarDadosExerc06.txt", "r");

    for (int i = 0; i < n; i++)
    {
        fscanf(lerValores, "%d ", &x);
        array[i] = x;
        soma += x;
    }
    int media = soma / n;

    // lê e grava em arquivos maiores e menores que a média
    FILE *gravarMaiores;
    gravarMaiores = fopen("gravarMaioresExerc06.txt", "w");

    fprintf(gravarMaiores, "\n Media: %d", media);
    for (int i = 0; i < n; i++)
    {
        if (array[i] > media)
        {
            fprintf(gravarMaiores, "\n Valores maiores que a média: %d", x);
        }
    }

    FILE *gravarMenores;
    gravarMenores = fopen("gravarMenoresExerc06.txt", "w");

    fprintf(gravarMenores, "\n Media: %d", media);
    for (int i = 0; i < n; i++)
    {
        if (array[i] < media)
        {
            fprintf(gravarMenores, "\n Valores menores que a média: %d", x);
        }
    }

    fclose(gravarMaiores);
    fclose(gravarMenores);

    return 0;
}
