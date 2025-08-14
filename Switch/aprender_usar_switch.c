#include <stdio.h>
#include <stdlib.h>

// Exemplo de uso do switch em C
int main() {
    // Declarando variaveis
    int opcao;
    float saldo = 1000.0;
    float deposito, saque;

    // Exibindo o menu de opções
    printf("Escolha uma opção :\n");
    printf("1 - Conferir saldo\n");
    printf("2 - Depositar\n");
    printf("3 - Sacar valor\n");
    printf("4 - Sair\n");
    // Lendo a opção escolhida pelo usuário
    scanf("%d", &opcao);

    // Usando switch para executar ações baseadas na opção escolhida
    switch(opcao) {
        case 1:
        printf("Seu saldo é: %.2f\n", saldo);
        break;
        case 2:
        printf("Digite o valor a depositar: ");
        scanf("%f", &deposito);
        saldo += deposito;
        printf("Depósito realizado com sucesso! Novo saldo: %.2f\n", saldo);
        break;
        case 3:
        printf("Digite o valor a sacar: ");
        scanf("%f", &saque);
        if (saque > saldo) {
            printf("Saldo insuficiente!\n");
        } else {
            saldo -= saque;
            printf("Saque realizado com sucesso! Novo saldo: %.2f\n", saldo);
        }
        break;
        case 4:
        printf("Saindo do programa...\n");
        break;
        default:
        printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        break;

    }

    return 0; // Código após o switch
}