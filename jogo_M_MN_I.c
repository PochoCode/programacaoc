#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



void pausartela(){
    printf("Pressione Enter para continuar...");
    getchar(); // Espera o usuário pressionar Enter
    getchar(); // Captura o Enter pressionado, pois o primeiro getchar() pode capturar
    
}

void limpar_tela() {
    // Limpa o console (funciona em sistemas Unix/Linux)
    system("clear");
    // Para Windows, use system("cls");
}

    int main() {
        int numerocomputador,numerojogador,resultado;
        char comparacao;

    // Initialize random number generator
    srand(time(0));
    numerocomputador = rand() % 100 + 1; // numero do computador

    // iniciando jogo
   do{
    printf("Bemvindo ao jogo Maior, Menor ou Igual!\n");
    printf("Voce deve escolher um numero e uma forma de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("Para sair, digite S.\n");

    printf("Digite sua escolha:");
    scanf(" %c", &comparacao);

   

    switch(comparacao){

        case 'M':
        case 'm': 
           printf("Digite um numero entre 1 e 100: ");
           scanf("%d", &numerojogador);
           printf("Voce escolheu comparar com Maior.\n");
            resultado = (numerojogador > numerocomputador) ? 1 : 0;
            pausartela();
            limpar_tela();
            break;
        case 'N':
        case 'n':
            printf("Digite um numero entre 1 e 100: ");
            scanf("%d", &numerojogador);
            printf("Voce escolheu comparar com Menor.\n");
            resultado = (numerojogador < numerocomputador) ? 1 :0;
            pausartela();
            limpar_tela();
           
            break;
        case 'I':
        case 'i':
            printf("Digite um numero entre 1 e 100: ");
            scanf("%d", &numerojogador);
            printf("Voce escolheu comparar com Igual.\n");
            resultado = (numerojogador == numerocomputador) ? 1 :0;
            pausartela();
            limpar_tela();
           
            break;
        case 'S':
        case 's':
            printf("Saindo do jogo...\n");
            exit(0) ; // Sair do jogo
            
            break;
        default:
            printf("Opcao invalida!\n");
            pausartela();
            limpar_tela();
            
            break;
       }
    // Exibir resultado
    if (resultado == 1) {
        printf("Parabens! vc acertou!\n");
        printf("O numero do computador era: %d\n", numerocomputador);
        printf("Seu numero era: %d\n", numerojogador);
        pausartela();
        limpar_tela();
    } else  {
        printf("Que pena! vc errou!\n");
        printf("O numero do computador era: %d\n", numerocomputador);
        printf("Seu numero era: %d\n", numerojogador);
        pausartela();
        limpar_tela();
    }
   
} while (comparacao != 'S' && comparacao != 's');

   return 0;


    }
