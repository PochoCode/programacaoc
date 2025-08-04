#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int nota1,nota2,nota3;
    float media;

    printf("******Calculadora de Média*******\n");


    printf("Digite sua primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3.0;
    printf("Sua média é: %.1f", media);

}