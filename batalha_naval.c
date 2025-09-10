#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main() {
    char *tabuleiro[10][10] = {
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"},
        {"0", "0", "0", "0", "0","0","0","0","0","0"}
  
       
    };
    

    // Imprimir o tabuleiro
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
           
            printf("%s ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // modificando ou colocando barcos com o numero 3 no tabuleiro usando for
               
    // na horizontal
    for(int j = 3; j < 6; j++) {
        tabuleiro[0][j] = "3";
    }
    // na vertical
    for(int i = 2; i < 5; i++) {
        tabuleiro[i][2] = "3";
    }
         

    // Imprimir o tabuleiro com letras e numeros como coordenadas
    printf("  ");
    for(int j = 0; j < 10; j++) {
        printf("%2d", j + 1);
    }
        printf("\n");

        for(int i = 0; i < 10; i++) {
            printf("%c ", 'A' + i);
            for(int j = 0; j < 10; j++) {
                printf(" %s", tabuleiro[i][j]);
            }
            printf("\n");
        }

       
           
            
            
         
        
       
        
        return 0;

}