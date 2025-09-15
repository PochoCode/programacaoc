#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define largo 10
#define ancho 10


int main() {
    char *tabuleiro[largo][ancho]; 
    // Declarando navios
    char *navio1[3] = {"3", "3", "3"}; // Navio de tamanho 3
    char *navio2[3] = {"3", "3", "3"}; // Navio de tamanho 3
    char *navio3[3] = {"3", "3", "3"}; // Navio de tamanho 3
    char *navio4[3] = {"3", "3", "3"}; // Navio de tamanho 3
    char letra;
    int numero;
    

  
    // Imprimir o tabuleiro com letras e numeros como coordenadas sendo as letras encima e do lado os numeros
    printf("   Batalha Naval\n");
    printf("   =============\n");
   


    printf("  ");
    for(int j=0; j<ancho; j++){
        printf(" %c ", 'A' + j);
    }
    printf("\n");
    for(int i=0; i<largo; i++){
        printf("%d ", i);
        for(int j=0; j<ancho; j++){
         
            tabuleiro[i][j] = "0"; // Inicializando todas as posições com água
          
            printf(" %s ", tabuleiro[i][j]);
        }

        printf("\n");
        }
         printf("A batalha Naval começou!\n");
         printf("Você tem 2 navios para posicionar no tabuleiro.\n");
         printf("Escolha suas coordenadas para o primeiro Navio na horizontal usando letra(A-J) e numeros(0-9):\n");
         scanf(" %c%d", &letra, &numero);
         //validando coordenadas
         if((letra < 'A' || letra > 'J') || (numero < 0 || numero > 9)) {
            printf("Coordenadas inválidas. Tente novamente.\n");
            return 1;
          }
          // convertendo letra para número da coluna
            int coluna = letra - 'A';
            // evitar sobreposição de navios
            if(tabuleiro[numero][coluna] != "0" || tabuleiro[numero][coluna + 1] != "0" || tabuleiro[numero][coluna + 2] != "0") {
                printf("Posição já ocupada por outro navio. Tente novamente.\n");
                return 1;
            }
            // verificando se o navio cabe na posição
            if(coluna + 2 < ancho) {
                tabuleiro[numero][coluna] = navio1[0];
                tabuleiro[numero][coluna + 1] = navio1[1];
                tabuleiro[numero][coluna + 2] = navio1[2];
            } else {
                printf("Navio não cabe nessa posição. Tente novamente.\n");
                return 1;
            }
            printf("Primeiro navio posicionado em %c%d, %c%d, %c%d\n", letra, numero, letra + 1, numero, letra + 2, numero);
            // segundo navio na vertical
            printf("Escolha suas coordenadas para o segundo Navio na vertical usando letra(A-J) e numeros(0-9):\n");
            //lendo coordenadas do segundo navio
            scanf(" %c%d", &letra, &numero);
            //validando coordenadas
            if((letra < 'A' || letra > 'J') || (numero < 0 || numero > 9)) {
                printf("Coordenadas inválidas. Tente novamente.\n");
                return 1;
            }
            // convertendo letra para número da coluna
            coluna = letra - 'A';
            // evitar sobreposição de navios
            if(tabuleiro[numero][coluna] != "0" || tabuleiro[numero + 1][coluna] != "0" || tabuleiro[numero + 2][coluna] != "0") {
                printf("Posição já ocupada por outro navio. Tente novamente.\n");
                return 1;
            }
            // verificando se o navio cabe na posição
            if(numero + 2 < largo) {
                tabuleiro[numero][coluna] = navio2[0];
                tabuleiro[numero + 1][coluna] = navio2[1];
                tabuleiro[numero + 2][coluna] = navio2[2];
            } else {
                printf("Navio não cabe nessa posição. Tente novamente.\n");
                return 1;
            }
            printf("Segundo navio posicionado em %c%d, %c%d, %c%d\n", letra, numero, letra, numero + 1, letra, numero + 2);

            //posicionando o terceiro e quarto navio nas diagonais
            printf("Escolha em qual diagonal você quer posicionar o terceiro navio com a primeira coordenada da diagonal(A-J)(1-9):\n");
            
            scanf(" %c%d", &letra, &numero);
            //validando coordenadas
            if((letra < 'A' || letra > 'J') || (numero < 0 || numero > 9)) {
                printf("Coordenadas inválidas. Tente novamente.\n");
                return 1;
            }
            // convertendo letra para número da coluna
            coluna = letra - 'A';
            // evitar sobreposição de navios
            if((tabuleiro[numero][coluna] != "0" || tabuleiro[numero + 1][coluna + 1] != "0" || tabuleiro[numero + 2][coluna + 2] != "0")&&(tabuleiro[numero][coluna] != "0" || tabuleiro[numero + 1][coluna - 1] != "0" || tabuleiro[numero + 2][coluna - 2] != "0")) {
                printf("Posição já ocupada por outro navio. Tente novamente.\n");
                return 1;
            }
            // verificando se o navio cabe na posição
            if(numero + 2 < largo && coluna + 2 < ancho) {
                tabuleiro[numero][coluna] = navio3[0];
                tabuleiro[numero + 1][coluna + 1] = navio3[1];
                tabuleiro[numero + 2][coluna + 2] = navio3[2];
            } else if(numero + 2 < largo && coluna - 2 >= 0){
                tabuleiro[numero][coluna] = navio4[0];
                tabuleiro[numero + 1][coluna - 1] = navio4[1];
                tabuleiro[numero + 2][coluna - 2] = navio4[2];
            }else {
                printf("Navio não cabe nessa posição. Tente novamente.\n");
                return 1;
            }
            printf("Terceiro navio posicionado em %c%d, %c%d, %c%d\n", letra, numero, letra + 1, numero + 1, letra + 2, numero + 2);
            // quarto navio na diagonal oposta
            printf("Escolha em qual diagonal você quer posicionar o quarto navio com a primeira coordenada da diagonal(A-J)(1-9):\n");
            scanf(" %c%d", &letra, &numero);
            //validando coordenadas
            if((letra < 'A' || letra > 'J') || (numero < 0 || numero > 9)) {
                printf("Coordenadas inválidas. Tente novamente.\n");
                return 1;
            }
            // convertendo letra para número da coluna
            coluna = letra - 'A';
            // evitar sobreposição de navios
            if((tabuleiro[numero][coluna] != "0" || tabuleiro[numero + 1][coluna - 1] != "0" || tabuleiro[numero + 2][coluna - 2] != "0")&&(tabuleiro[numero][coluna] != "0" || tabuleiro[numero + 1][coluna + 1] != "0" || tabuleiro[numero + 2][coluna + 2] != "0")) {
                printf("Posição já ocupada por outro navio. Tente novamente.\n");
                return 1;
            }
            // verificando se o navio cabe na posição
            if(numero + 2 < largo && coluna - 2 >= 0) {
                tabuleiro[numero][coluna] = navio4[0];
                tabuleiro[numero + 1][coluna - 1] = navio4[1];
                tabuleiro[numero + 2][coluna - 2] = navio4[2];
            } else if(numero + 2 < largo && coluna + 2 < ancho){
                tabuleiro[numero][coluna] = navio3[0];
                tabuleiro[numero + 1][coluna + 1] = navio3[1];
                tabuleiro[numero + 2][coluna + 2] = navio3[2];
            } else {
                printf("Navio não cabe nessa posição. Tente novamente.\n");
                return 1;
            }
            printf("Quarto navio posicionado em %c%d, %c%d, %c%d\n", letra, numero, letra - 1, numero + 1, letra - 2, numero + 2);

            // Imprimir o tabuleiro atualizado
            printf("Tabuleiro atualizado:\n");
            printf("  ");
            for(int j=0; j<ancho; j++){
                printf(" %c ", 'A' + j);
            }
            printf("\n");
            for(int i=0; i<largo; i++){
                printf("%d ", i);
                for(int j=0; j<ancho; j++){
                    printf(" %s ", tabuleiro[i][j]);
                }
                printf("\n");
            }
        

     return 0;

}