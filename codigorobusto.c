#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define Linhas  10
#define Colunas 10

int main() {
    int Matris [Linhas][Colunas];
    int found = 0;
    int target = 50
    ;
    int soma = 1;
    //inicialização da matriz com valores aleatórios
    for(int i=0; i<Linhas; i++){
        for(int j=0; j<Colunas; j++){
            Matris[i][j]= soma;
            soma++;
            printf("%d ", Matris[i][j]);
        }
        printf("\n");
       
    }

    for(int i=0; i<Linhas; i++){
        for(int j=0; j<Colunas; j++){
            if(Matris[i][j] == target){
                printf("Elemento %d encontrado na posicao [%d][%d]\n", target, i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
        
    }

    return 0;
}