#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
/*  Modificadores de tipo em C
    int number = 3000000000;// Exemplo de número grande
    unsigned int numerosemsinal = 3000000000;// Exemplo de número grande sem sinal

    printf("Numero grande com sinal: %d\n", number);
    printf("Numero grande sem sinal: %u\n", numerosemsinal);
*/

    int regularnumber =2147483647; // Exemplo de número inteiro regular
    long int bignumber = 2147483647; // Exemplo de número inteiro grande

    printf("Numero inteiro regular: %d\n", regularnumber);
    printf("Numero inteiro grande: %ld\n", bignumber);

    bignumber = 9223372036854775807; // Exemplo de número inteiro muito grande
    printf("Numero inteiro muito grande: %ld\n", bignumber);

    return 0;
}