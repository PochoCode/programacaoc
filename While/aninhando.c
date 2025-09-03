#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    int i,j;
    // Aninhando estruturas de repetição

    /*for(i = 0; i <= 5; i++) {
        int j;
        for(j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }*/
   // i=0;
    /*while(i <= 5) {
        int j = 0;
        while(j < 10){
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        
        printf("\n");
        i++;
    }*/
   /* do{
        int j = 0;
        do{
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }while(j < 10);
        printf("\n");
        i++;
    }while(i <= 5);*/

    char letra;
    letra = 'A';
    for(i = 0; i< 5; i++){
        
        
        for(j = 0; j<= 5; j++){
            printf("%c ", letra);
           
        }
        
        printf("\n");
        ++letra;
    }
    return 0;
}