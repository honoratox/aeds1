/*
  Author: Pedro Henrique de Magalhães Honorato
  Matrícula: 784623

  - ler um valor inteiro do teclado e chamar procedimento recursivo para mostrar essa quantidade em valores pares em ordem crescente começando no valor 7.
  Exemplo: valor = 5
*/

#include <stdio.h>

void mostrarParesCrescentes(int n, int valor);

int main() {
    int n;

    printf("\n Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("\n Valores pares crescentes a partir de 7: ");
    mostrarParesCrescentes(n, 7); // o '7' dá esse valor a variável 'valor'

    return 0;
}

void mostrarParesCrescentes(int n, int valor) {
    if (n == 0) {
        return; // se 'n' chegar a 0, encerra a função
    }

    if (valor % 2 == 0) {
        printf("%d ", valor); // Mostrar o valor par
        mostrarParesCrescentes (n - 1, valor + 2); // n - 1 = tira 1 até o valor de n = 0
                                                   // valor + 2 = soma 2 ao primeiro valor par que aparecer
    } else {
        mostrarParesCrescentes (n, valor + 1); // Se o valor atual não for par, avança para o próximo
    }
}
