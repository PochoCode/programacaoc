#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    // Variaveis para armazenar os números
    int numero1,numero2;

    //Variavel para armazenar a suma
    int soma = numero1 + numero2;

    //Variavel para armazenar subtração
    int subtracao = numero1 - numero2;


    // Variavel para armazenar multiplicação
    int multiplicacao = numero1 * numero2;

    // Variavel para armazenar divisão
    int divisao = numero1 / numero2;

    // Solicitar ao usuário que insira os números
    printf("Digite o primeiro número:\n ");
    scanf("%d", &numero1);
    printf("Digite o segundo número:\n ");
    scanf("%d", &numero2);

    // Exibir os resultados
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    return 0;


    
