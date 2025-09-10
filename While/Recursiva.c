#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void contagemRegressiva(int n){
    if(n > 0){
        printf("%d\n", n);
        contagemRegressiva(n - 1);
    }
}
    int main() {
        int num = 5;
        contagemRegressiva(num);
        return 0;


        
    }
