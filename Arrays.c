#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
   /* int numeros[5] = {20,32,41,70,21};

    printf("O primeiro numero do array e: %d\n", numeros[0]);
    printf("O segundo numero do array e: %d\n", numeros[1]);
    printf("O terceiro numero do array e: %d\n", numeros[2]);
    printf("O quarto numero do array e: %d\n", numeros[3]);
    printf("O quinto numero do array e: %d\n", numeros[4]);
  */

  char *nomes[] = {"Robin", "Pedro", "Joao", "Maria", "Ana"};

  for(int i = 0; i < 5; i++) {
    printf("O nome na posicao %d e: %s\n", i, nomes[i]);
  }

    return 0;
}