#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;
    float b = 10.3 ; 
    int compare  = (int) a==b;

    // Operadores de comparação
    printf("a == b: %d\n", (int)a == (int)b); // Igualdade
    printf("a != b: %d\n", (int)a != (int)b); // Desigualdade
    printf("a < b: %d\n", (int)a < (int)b);   // Menor
    printf("a > b: %d\n", (int)a > (int)b);   // Maior
    printf("a <= b: %d\n", (int)a <= (int)b); // Menor ou igual
    printf("a >= b: %d\n", (int)a >= (int)b); // Maior ou igual   

    return 0;
}