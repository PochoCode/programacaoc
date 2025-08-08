#include <stdio.h>
#include <stdlib.h>


int main() {
 int condicao1 , condicao2;

 //estrutura aninhada
 if(condicao1) {
    if(condicao2) {
        // Codigo a ser executado se verdadeiro
    }
 }

 //estrutura encadeada
 if(condicao1) {
    // Codigo a ser executado se condicao for verdadeira
 } else if (condicao2) {
    //Codigo a ser executado se condicao1 for falsa e condicao2 verdadeira
 } else `{
    // Codigo a ser executado se todas as condições forem falsas
 }

}