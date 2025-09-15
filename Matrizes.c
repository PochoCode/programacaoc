#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int Matriz [3][3] = {{1,2,3},{4,5,6},{7,8,9}
};
     // inicialização de matriz com base em condiçõoes simples
    /*for (int i = 0; i < 3; i++) { // loop externo para linhas
        for (int j = 0; j < 3; j++) { // loop interno para colunas
            if(j % 2 == 0) { // se a coluna for par
                Matriz[i][j] = 1;
            } else { // se a coluna for ímpar
                Matriz[i][j] = 0;
            }

    }

    }
    // impressão da matriz
    for (int i = 0; i < 3; i++) { // loop externo para linhas
        for (int j = 0; j < 3; j++) { // loop interno para colunas
        printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }*/

//Modificação condicional de elementos da matriz
/*for (int i = 0; i < 3; i++) { // loop externo para linhas
        for (int j = 0; j < 3; j++) { // loop interno para colunas
            if(Matriz[i][j] > 5){// se o elemento for maior que 5
                Matriz[i][j] = - Matriz[i][j]; // modifica o elemento para negativo

            }
        }
    }
    

    // impressão da matriz
    for (int i = 0; i < 3; i++) { // loop externo para linhas
        for (int j = 0; j < 3; j++) { // loop interno para colunas
        printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }*/

    //contagem de elementos pares e impares
   /* int even_count, odd_count;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(Matriz[i][j] % 2 == 0){
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    printf("Pares: %d\n", even_count);
    printf("Impares: %d\n", odd_count);*/
    //substituição condicional de elementos
    /*for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(Matriz[i][j] % 3 == 0){
                Matriz[i][j] = -1;

            }
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }

*/

  //BUsca condicional de elementos
    int found = 0;
    int target = 5; // elemento a ser buscado
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(Matriz[i][j] == target){
                found = 1;
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(!found){
        printf("Elemento %d nao encontrado na matriz.\n", target);
    } else {
        printf("Elemento %d encontrado na matriz.\n", target);
    }
    return 0;
}