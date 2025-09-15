#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
int vetor[5];
int matriz[3][3];
int matrizsoma[3][3];
int matriz1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
int matriz2[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        matriz[i][j] = i + j;
    }
    }

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
   
        printf("na posicao [%d][%d] o valor e: %d\n", i, j, matriz[i][j] );
    }
printf("\n");
    }

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
    }
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("na posicao [%d][%d] o valor da soma e: %d\n", i, j, matrizsoma[i][j] );
    }
printf("\n");
    }

return 0;
}