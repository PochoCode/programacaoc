#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
int nota;

printf("Digite sua nota:\n");
scanf("%d", &nota);

// nota >= 90 -> A
// nota >= 80 -> B
// nota >= 70 -> C
// nota >= 60 -> D
// nota >= 50 -> E
// nota < 50 -> F
if (nota >= 90) {
    printf("Voce tirou A\n");
} else if (nota >= 80) {
    printf("Voce tirou B\n");
} else if (nota >= 70) {
    printf("Voce tirou C\n");
} else if (nota >= 60) {
    printf("Voce tirou D\n");   
} else if (nota >= 50) {
    printf("Voce tirou E\n");
} else {
    printf("Voce tirou F\n");
}

return 0;


}