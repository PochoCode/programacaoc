#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int i;

    /*for(i = 1; i<=5; i++) {
        printf("%d\n",i);
    }*/

    for(i =1; i<=20; i++) {
        if(i % 2 == 0) {
            printf("%d é par\n",i);
        }
    }

    return 0;
}