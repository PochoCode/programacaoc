#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    /*int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }*/
   char *nomes[2][3] = {
        {"Ana", "Beatriz", "Carla"},
        {"Daniel", "Eduardo", "Fernando"}
    };
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("O nome na posicao [%d][%d] e: %s\n", i, j, nomes[i][j]);
        }
    }
    return 0;
}