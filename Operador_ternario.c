#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

   /* int variavel;

    //Operador ternário
    Condicao ? Valor_se_verdadeiro : Valor_se_falso;*/


    /*int idade = 20;
    char *resultado;
    // Usando operador ternário para verificar a idade
    resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    printf("Resultado: %s\n", resultado);*/

    /*int idade = 15;
    int resultado;
    // Usando operador ternário para verificar a idade
    resultado = (idade >= 18) ? 1 : 0;

    if(resultado == 1) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }*/

    int num1 = 10, num2 = 20;
    int maior;
    // Usando operador ternário para encontrar o maior número
    /*num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O maior número é: %d\n", maior);*/

    /*maior = (num1 > num2) ? num1 : num2;
    printf("O maior número é: %d\n", maior);*/

    num1 > num2 ? (maior = num1) : (maior = num2);

    if(maior == num1) {
        printf("O maior número é: %d, que é o primeiro número.\n", maior);
    } else {
        printf("O maior número é: %d, que é o segundo número.\n", maior);
    }



    return 0;

}