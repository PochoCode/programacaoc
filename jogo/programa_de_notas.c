#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void pausar_console() {
    // Limpa o console (funciona em sistemas Unix/Linux)
    printf("Pressione Enter para continuar... \n");
    getchar(); // Usa getchar() para esperar a entrada do usuário
    getchar(); // Captura o Enter pressionado, pois o primeiro getchar() pode capturar
}

void limpar_console() {
    // Limpa o console (funciona em sistemas Unix/Linux)
    system("clear");
    // Para Windows, use system("cls");
}
int main() {

    int opcao;
    float nota1, nota2;
    float media;


do{ 

    // Limpa o console para uma melhor visualização
       //exibindo o menu de gerenciamento de notas
    printf("Menu de gerenciamento de notas do estudante\n");
    printf("1. Calcular média\n");
    printf("2. Determinar status do estudante\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);


    switch(opcao) {
        case 1:
            // Lendo as notas do estudante
            printf("Digite a nota 1: ");
            scanf("%f", &nota1);
            printf("Digite a nota 2: ");
            scanf("%f", &nota2);

            // Calculando a média
            if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
              media = (nota1 + nota2) / 2;
              printf("A média é: %.2f\n", media);
            } else {
                printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
                }
            pausar_console();
            limpar_console();
            break;

        case 2:
            // Determinando o status do estudante
            printf("Digite a média do estudante: ");
            scanf("%f", &media);

           
            
            //media >= 5.0 ? printf("O estudante está aprovado.\n") : printf("O estudante está reprovado.\n");
            if(media >= 7.5) {
                printf("O estudante está aprovado.\n");
            } else if(media >= 5.0 ) {
                printf("O estudante está em recuperação.\n");
            }else {
                printf("O estudante está reprovado.\n");
            }
            pausar_console();
            limpar_console();
            break;
            

        case 3:
            // Saindo do programa
            printf("Saindo do programa...\n");
            pausar_console();
            limpar_console();
            break;

        
        default:
            printf("Opção inválida!\n");
            pausar_console();
            limpar_console();
            break;
       
    }
}while(opcao != 3);
    return 0;

}