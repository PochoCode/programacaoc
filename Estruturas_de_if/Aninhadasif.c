#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main() {
    int idade;
    float renda;
    int dependentes;

    // if (condicao1) {
    //     if (condicao2) {
    //       codigo a ser executado se condicao 1 e 2 forem verdadeiras
    //    }
    //         }
    
/*
Programa que verifica se uma pessoa esta qualificada para um
desconto especial com base na idade e na renda mensal.
A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter
uma renda mensal abaixo de 2000 */

/* printf("Digite sua idade\n");
    scanf("%d", &idade);
    printf("Digite sua renda mensal\n");
    scanf("%f", &renda);

    if (idade > 60 || idade < 18) {
        if (renda < 2000) {
            printf("Voce esta qualificado para o desconto especial\n");
        } else {
            printf("Voce nao esta qualificado para o desconto especial por sua renda\n");
        }
    } else {
        printf("Voce nao esta qualificado para o desconto especial pela sua idade\n");
    }*/


   /* printf("Digite sua idade\n");
    scanf("%d", &idade);
    printf("Digite sua renda mensal\n");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes\n");
    scanf("%d", &dependentes);

    // minimo 2 dependentes
    //Maior de 18 anos e menor de 65
    //Renda abaixo de 2000

    if (idade >= 18 && idade < 65) {
        if (dependentes >= 2) {
            if (renda < 2000) {
                printf("Voce esta qualificado para o desconto especial\n");
            } else {
                printf("Voce nao esta qualificado para o desconto especial por sua renda\n");
            }
        } else {
            printf("Voce nao esta qualificado para o desconto especial por numero de dependentes\n");
        }
    } else {
        printf("Voce nao esta qualificado para o desconto especial pela sua idade\n");
    }*/

    int numero;
    printf("Digite um numero\n");
    scanf("%d", &numero);

    //determinar se o numero e positivo ou negativo par ou impar
    if(numero > 0) {
        printf("O numero %d é positivo\n", numero);
        if (numero == 0){
            printf("O numero é zero\n");
        } else if (numero % 2 == 0){
            printf("O numero %d é par\n", numero);
        } else {
            printf("O numero %d é impar\n", numero);
        }
    }  else {
        printf("O numero %d é negativo\n", numero);
    }

    return 0;

}