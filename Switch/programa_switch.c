#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Criando menu interativo com switch
int main() {
    // Declarando variaveis
    int opcao;
    int numerosecreto, palpite;

    // Criando menu interativo
    printf("Bem-vindo ao jogo de adivinhação!\n");
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
            numerosecreto = rand() % 10; // Número secreto entre 0 e 9
            printf("Você escolheu jogar! Tente adivinhar o número secreto entre 0 e 9.\n");
            printf("Digite seu palpite: ");
            // Lendo o palpite do usuário
            scanf("%d", &palpite);
            // Verificando o palpite
            if (palpite == numerosecreto) {
                printf("Parabéns! Você acertou o número secreto: %d\n", numerosecreto);
            } else {
                printf("Que pena! O número secreto era: %d. Tente novamente!\n", numerosecreto);
            }
            break;
        case 2:
            // Exibindo as regras do jogo
            printf("Regras do jogo:\n");
            printf("1. O computador escolherá um número secreto entre 0 e 9.\n");
            printf("2. Você deve tentar adivinhar o número secreto.\n");
            printf("3. Se você acertar, ganhará o jogo. Caso contrário, poderá tentar novamente.\n");
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
    return 0;

}