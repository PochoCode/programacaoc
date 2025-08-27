#include <stdio.h>
#include <stdlib.h>

int main() {
    int menu = 1; // 1 = principal, 2 = secundário
    int opcao;

    while (1) { // loop infinito até escolher sair
        system("clear||cls");

        switch (menu) {
            case 1: // MENU PRINCIPAL
                printf("=== MENU PRINCIPAL ===\n");
                printf("1. Ir para menu secundário\n");
                printf("2. Sair\n");
                printf("Escolha: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        menu = 2; // muda para o menu secundário
                        break;
                    case 2:
                        printf("Saindo...\n");
                        exit(0);
                    default:
                        printf("Opção inválida!\n");
                        system("pause");
                }
                break;

            case 2: // MENU SECUNDÁRIO
                printf("=== MENU SECUNDÁRIO ===\n");
                printf("1. Voltar para o menu principal\n");
                printf("2. Sair\n");
                printf("Escolha: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        menu = 1; // volta para o menu principal
                        break;
                    case 2:
                        printf("Saindo...\n");
                        exit(0);
                    default:
                        printf("Opção inválida!\n");
                        system("pause");
                }
                break;
        }
    }

    return 0;
}
