#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    int index;
    char *nomealuno[3][3]  = {
        {"Aluno 0", "Pt = 50", "Mt = 60"},
        {"Aluno 1", "Pt = 70", "Mt = 80"},
        {"Aluno 2", "Pt = 90", "Mt = 100"}
    };
    printf("Digite o indice do aluno que deseja ver as notas(0,1,2): ");
    scanf("%d", &index);
    if(index < 0 || index > 2) {
        printf("Indice invalido!\n");
        return 1;
    }
    printf("As notas do %s são: %s e %s\n", nomealuno[index][0], nomealuno[index][1], nomealuno[index][2]);
    return 0;
}