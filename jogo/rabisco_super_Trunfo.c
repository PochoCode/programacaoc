#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


   void pausar_tela() {
       printf("Pressione qualquer tecla para continuar...\n");
       getchar(); // Limpa o buffer
       getchar(); // Espera pela entrada do usuário
   }

   void limpar_tela() {
       system("clear||cls"); // Limpa a tela no Linux/Windows
   }    

   int main() {
    //Declarando as propriedades das cartas
    char codigo1[4] ;
    char codigo2[4];
    char cidade1[20];
    char cidade2[20];
    char estado1[20];
    char estado2[20];
    char letra1, letra2;
    int num1,num2,num3,num4;
    int populacao1,populacao2;
    float area1,area2;
    double  PIB1,PIB2,super_poder1,super_poder2;
    int opcao,opcao1,opcao2, resultado1, resultado2  ;
    double PIB_percapita1,PIB_percapita2,densidade1,densidade2;
    int menu = 1; // 1 = principal, 2 = secundário

    //iniciando menu de opções
    while (1) { // loop infinito ate escolher sair
        system("clear||cls");
    
        switch(menu)
        {
            case 1: // MENU PRINCIPAL
                printf("===Bemvindo ao menu principal do Super Trunfo Cidades ===\n");
                printf("1. Jogar\n");
                printf("2. Ver regras do jogo\n");
                printf("3. Sair\n");
                printf("Escolha uma opção: ");
                scanf("%d", &opcao);
    
                switch(opcao)
                {
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
                printf("=== MENU DE JOGO ===\n");
                printf("1. Voltar para o menu principal\n");
                printf("2. Cadastrar cartas e começar jogo \n");
                
                
                printf("3. Sair\n");
                printf("Escolha: ");
                scanf("%d", &opcao);
    
                switch(opcao)
                {
                    case 1:
                        menu = 1; // volta para o menu principal
                        break;
                    case 2:
                        // Cadastrar cartas
                        printf("=== Cadastro de Cartas ===\n");
                        printf("Digite o código da carta 1(a-z)(0)(1-4): ");
                        if(scanf("%c%d%d", &letra1, &num1, &num2) != 3) {
                            printf("Entrada inválida! Tente novamente.\n");
                            system("pause");
                            continue; // Volta para o início do loop
                        } else if(letra1 >= 'a' && letra1 <= 'z' && num1 ==0 && (num2 >= 1 && num2 <= 4)) {
                            scanf("%s", codigo1);
                        } else {
                            printf("Código inválido! Tente novamente.\n");
                            system("pause");
                            continue; // Volta para o início do loop
                        }
                        printf("Digite o nome da cidade 1: ");
                        scanf("%s", cidade1);
                        printf("Digite o nome do estado 1: ");
                        scanf("%s", estado1);
                        printf("Digite a população da cidade 1: ");
                        scanf("%d", &populacao1);
                        printf("Digite a área da cidade 1: ");
                        scanf("%f", &area1);
                        printf("Digite o PIB da cidade 1: ");
                        scanf("%lf", &PIB1);
                        // Calculando PIB per capita
                        PIB_percapita1 = PIB1 / populacao1;
                        // Calculando densidade populacional
                        densidade1 = populacao1 / area1;
                        //calculando super poder
                        super_poder1 = PIB1 + populacao1 + area1 + PIB_percapita1 + densidade1;

                        limpar_tela();
                        pausar_tela();
                        printf("=== Cadastrando carta 2 ===");
                        printf("Digite o código da carta 2(a-z)(0)(1-4): ");
                        if(scanf("%c%d%d", &letra2, &num3, &num4) != 3) {
                            printf("Entrada inválida! Tente novamente.\n");
                            system("pause");
                            continue; // Volta para o início do loop
                        } else if(letra2 >= 'a' && letra2 <= 'z' && num3 == 0 && (num4 >= 1 && num4 <= 4)) {
                            scanf("%s", codigo2);
                        } else {
                            printf("Código inválido! Tente novamente.\n");
                            system("pause");
                            continue; // Volta para o início do loop
                        }
                        printf("Digite o nome da cidade 2: ");
                        scanf("%s", cidade2);
                        printf("Digite o nome do estado 2: ");
                        scanf("%s", estado2);
                        printf("Digite a população da cidade 2: ");
                        scanf("%d", &populacao2);
                        printf("Digite a área da cidade 2: ");
                        scanf("%f", &area2);
                        printf("Digite o PIB da cidade 2: ");
                        scanf("%lf", &PIB2);
                        // Calculando PIB per capita
                        PIB_percapita2 = PIB2 / populacao2;
                        // Calculando densidade populacional
                        densidade2 = populacao2 / area2;
                        //calculando super poder
                        super_poder2 = PIB2 + populacao2 + area2 + PIB_percapita2 + densidade2;
                        limpar_tela();
                        printf("=== Cartas cadastradas com sucesso! ===\n");
                        printf("Carta 1: %s, Cidade: %s, Estado: %s, População: %d, Área: %.2f, PIB: %.2lf, PIB per capita: %.2lf, Densidade: %.2f, Super Poder: %.2f\n",
                               codigo1, cidade1, estado1, populacao1, area1, PIB1, PIB_percapita1, densidade1, super_poder1);
                        printf("Carta 2: %s, Cidade: %s, Estado: %s, População: %d, Área: %.2f, PIB: %.2lf, PIB per capita: %.2lf, Densidade: %.2f, Super Poder: %.2f\n",
                               codigo2, cidade2, estado2, populacao2, area2, PIB2, PIB_percapita2, densidade2, super_poder2);       
                        limpar_tela();
                        pausar_tela();
                        
                        printf("=== Jogo iniciado! ===\n");
                        printf("Escolha uma propriedade para comparar:\n");
                        printf("1. População\n");
                        printf("2. Área\n");
                        printf("3. PIB\n");
                        printf("4. PIB per capita\n");
                        printf("5. Densidade populacional\n");
                        printf("6. Super Poder\n");
                        printf("Escolha uma opção: ");
                        scanf("%d", &opcao1);
                        switch(opcao1) {
                            case 1:
                            printf("Comparando População...\n");
                             {resultado1 = populacao1 > populacao2 ? 1 : 0;
                             }
                                pausar_tela();
                                limpar_tela();
                             break;
                            case 2:
                            printf("Comparando Área...\n");
                             {resultado1 = area1 > area2 ? 1 : 0;  
                             }
                             pausar_tela();
                             limpar_tela();
                             break;
                            case 3:
                            printf("Comparando PIB...\n");
                             {resultado1 = PIB1 > PIB2 ? 1 : 0;
                             }
                                pausar_tela();
                                limpar_tela();
                             break;
                            case 4:
                            printf("Comparando PIB per capita...\n");
                             {resultado1 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
                             }
                                pausar_tela();
                                limpar_tela();
                             break;
                            case 5:
                            printf("Comparando Densidade populacional...\n");
                             {resultado1 = densidade1 < densidade2 ? 1 : 0;
                             }
                                pausar_tela();
                                limpar_tela();
                             break;
                            case 6:
                            printf("Comparando Super Poder...\n");
                             {resultado1 = super_poder1 > super_poder2 ? 1 : 0;
                             }
                                pausar_tela();
                                limpar_tela();
                             break;     
                            default:
                                printf("Opção inválida!\n");
                                system("pause");
                                continue; // Volta para o início do loop
                                
                                printf("Digite a segunda propriedade para comparar:\n");
                                printf("1. População\n");
                                printf("2. Área\n");
                                printf("3. PIB\n");
                                printf("4. PIB per capita\n");
                                printf("5. Densidade populacional\n");
                                printf("6. Super Poder\n");
                                printf("Escolha uma opção: ");
                                scanf("%d", &opcao2);
                                if(opcao2 == opcao1) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    system("pause");
                                    continue; // Volta para o início do loop
                                }else{
                                switch(opcao2) {
                                    case 1:
                                        printf("Comparando População...\n");
                                        resultado2 = populacao1 > populacao2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    case 2:
                                        printf("Comparando Área...\n");
                                        resultado2 = area1 > area2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    case 3: 
                                        printf("Comparando PIB...\n");
                                        resultado2 = PIB1 > PIB2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    case 4:
                                        printf("Comparando PIB per capita...\n");
                                        resultado2 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    case 5:
                                        printf("Comparando Densidade populacional...\n");
                                        resultado2 = densidade1 < densidade2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    case 6:
                                        printf("Comparando Super Poder...\n");
                                        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    default:
                                        printf("Opção inválida!\n");
                                        system("pause");
                                        continue; // Volta para o início do loop


                        }   
                                if(resultado1 == 1 && resultado2 == 1) {
                                    printf("Você venceu a rodada!\n");
                                } else if(resultado1 == 0 && resultado2 == 0) {
                                    printf("Você perdeu a rodada!\n");
                                } else {
                                    printf("A rodada terminou empatada!\n");
                    }
                        } 
                    }
                        break;   
                    case 3:
                        printf("Saindo...\n");
                        exit(0);
                    default:
                        printf("Opção inválida!\n");
                        system("pause");
                }
                break;
        }
   }