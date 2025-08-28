#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int numero,i;
     /*do{
       printf("Digite um numero par para sair do programa:\n");
       scanf("%d", &numero);

       if(numero %2 == 0) {
        printf("%d é par, saindo do programa...\n", numero);        
       } else {
        printf("%d é impar, tente novamente.\n", numero);
       }

     }while(numero % 2 != 0);*/
     

     /*while(i <=10) {
        if(i % 2 == 0){
          printf("%d é par\n", i);
        }
          i++;  
        
     }*/

     /*for(i=0; i <=10; i++) {
        if(i % 2 != 0){
          printf("%d é impar\n", i);
        }
     }*/

     printf("Digite um numero para ver sua tabuada:\n");
     scanf("%d", &numero);
      for(i=0; i <=10; i++) {
          printf("%d x %d = %d\n", numero, i, numero * i);
      }




    return 0;
}