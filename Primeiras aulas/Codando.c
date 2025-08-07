#include <stdio.h>
#include <stdlib.h>

int main() {

    char ProdutoA[50]="Produto A";
    char ProdutoB[50]="Produto B";
    float PrecoA = 10.5;
    float PrecoB = 20.0;
    int EstoqueA = 100;
    int EstoqueB = 50;
    int estoqueMinimoA = 20;
    int estoqueMinimoB = 50;

    printf("Existe no estoque %d unidades do %s\n", EstoqueA, ProdutoA);
    printf("Existe no estoque %d unidades do %s\n", EstoqueB, ProdutoB);
    printf("O %s custa R$ %.2f\n", ProdutoA, PrecoA);
    printf("O %s custa R$ %.2f\n", ProdutoB, PrecoB);

    printf("Temos o estoque minimo do %s?:%d\n", ProdutoA, EstoqueA >= estoqueMinimoA   );
    printf("Temos o estoque minimo do %s?:%d\n", ProdutoB, EstoqueB >= estoqueMinimoB   );  
    printf("O %s tem o mesmo preco do %s?:%d\n", ProdutoA, ProdutoB, PrecoA == PrecoB);

    printf("O valor total do %s(R$ %d) é maior que o valor total do %s(R$ %d)?:%d\n", 
           ProdutoA, (int)(PrecoA * EstoqueA), ProdutoB, (int)(PrecoB * EstoqueB), 
           (PrecoA * EstoqueA) > (PrecoB * EstoqueB));


    return 0;
}