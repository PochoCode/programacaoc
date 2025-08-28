#include <stdio.h>

#include <string.h>


int main() {
  // Declaração de variáveis
   int i;
  // Movendo a Torre no tabuleiro
   printf("Movendo a torre...\n");

   // Usando for para mover a torre
   for(i = 0; i < 5; i++ ){
    printf("Direita\n");
   }

   //Inicializando i com 0 para mover a Rainha
   i=0;

   //Movendo a Rainha com while
   printf("Movendo a Rainha...\n");
     while(i <= 8){
       printf("Esquerda\n");
       i++;
       }

       //Inicializando i com 0 para mover o bispo
       i=0;

       //Movendo o Bispo com do while
        printf("Movendo o Bispo...\n");
        do{
          printf("Cima Direita\n");
          i++;
        } while(i < 5);


   return 0;
}