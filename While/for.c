#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int i;

   /* for(i = 15; i>=4; i--) {
        printf("%d\n",i);
    }*/

   /* for(i =1; i<=20; i++) {
        if(i % 2 == 0) {
            printf("%d é par\n",i);
        }
    }*/
   int num,ind,soma=0;
   for(ind=1;ind<=5;ind++) {
       printf("Digite o %d numero: ",ind);
       scanf("%d",&num);
       if(num%2==0 )
       soma = soma + num;
   }
   printf("A soma dos numeros é: %d\n",soma);

    return 0;
}