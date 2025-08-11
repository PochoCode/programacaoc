#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Jogo de Jokenpo (Pedra, Papel e Tesoura) com menu interativo usando switch
int main() {
    // Declarando variáveis
    int opcao;
    int jogador, computador;
   

    // Criando menu interativo
    printf("###Bem-vindo ao Jogo de Jokenpo!###\n");
    printf("Escolha uma opção:\n");
    printf("1. Jogar\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n");
    printf("Digite sua opção: ");
    // Lendo a opção do usuário
    scanf("%d", &opcao);
    // Verificando a opção escolhida
    switch (opcao) {
        case 1:
            // Iniciando o jogo
            srand(time(0));
            printf("Você escolheu jogar! Escolha sua jogada:\n");
            printf("1. Pedra \n");
            printf("2. Papel \n");
            printf("3. Tesoura \n");
            //Verificando a jogada do usuário
            scanf("%d", &jogador);
        
            // Gerando jogada do computador 
            computador = rand() % 3 + 1; // Gera um número entre 1 e 3
    
            //Imprimindo escolhas do jogador e do computador
            switch(jogador) {
                case 1: 
                printf("Você escolheu Pedra -");
                break;
                case 2:
                printf("Você escolheu Papel -");
                break;
                case 3:
                printf("Você escolheu Tesoura -");
                break;
                default:
                printf("Opção inválida! Por favor, escolha uma opção válida.\n");

         }

         switch (computador) {
            case 1:
                printf("O computador escolheu Pedra.\n");
                break;
            case 2:
                printf("O computador escolheu Papel.\n");
                break;
            case 3:
                printf("O computador escolheu Tesoura.\n");
                break;
         }
        
         // Verificando o resultado do jogo
         if (jogador == computador) {
            printf("Empate!\n");
         } else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)) {
            printf("Você ganhou!\n");
         } else {
            printf("Você perdeu!\n");
         }
            break;
        case 2:
            // Exibindo as regras do jogo
            printf("Regras do jogo:\n");
            printf("1. O jogador escolhe entre Pedra, Papel ou Tesoura.\n");
            printf("2. O computador também escolhe uma dessas opções.\n");
            printf("3. Pedra vence Tesoura, Tesoura vence Papel e Papel vence Pedra.\n");
            printf("4. Se ambos escolherem a mesma opção, é um empate.\n");
            break;
        case 3:
            // Saindo do jogo
            printf("Obrigado por jogar! Até a próxima!\n");
            break;
        default:
            // Opção inválida
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
            break;
    }
    // Finalizando o programa
        
         
         return 0;
        

}