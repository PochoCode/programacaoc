#include <stdio.h>
#include <stdlib.h>


int main() {
    int idade;

    printf("Digite sua idade\n");
    scanf("%d", &idade);

    //criança < 12
    //Adolescente 12 <= x < 18
    //Adulto 18 <= x < 60
    //Idoso > 60

    if (idade < 12){
        printf("Voce é uma criança");
    } else if(idade >= 12 && idade < 18){
        printf("Voce é um adolescente");
    } else if (idade >=18 && idade < 60){
        printf("Voce é um adulto");
    } else {
        printf("Voce é um idoso");
    }
    
  return 0;

}