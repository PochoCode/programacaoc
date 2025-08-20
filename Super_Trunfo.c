#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


   void pausar_tela() {
       printf("Pressione qualquer tecla para continuar...\n");
       getchar(); // Limpa o buffer
         getchar(); // Aguarda a entrada do usuário
      
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
    int opcao3,opcao4,opcao1,opcao2, resultado1, resultado2  ;
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
                scanf("%d", &opcao1);
    
                switch(opcao1)
                {
                    case 1:
                        menu = 2; // muda para o menu secundário
                        break;
                    case 2:
                        printf("Exibindo regras do jogo:\n");
                        printf("1. Cada jogador cadastra uma carta.\n");
                        printf("2. O jogo consiste em comparar propriedades das cartas.\n");
                        printf("3. O jogador escolhe uma propriedade para comparar.\n");
                        printf("4. O jogador com a propriedade mais alta vence a rodada.\n");
                        pausar_tela();
                        limpar_tela();
                        continue; // Volta para o início do loop
                    case 3:
                        printf("Saindo...\n");
                        exit(0);
                    default:
                        printf("Opção inválida!\n");
                        pausar_tela() ;
                }
                break;
    
            case 2: // MENU SECUNDÁRIO
                printf("=== MENU DE JOGO ===\n");
                printf("1. Voltar para o menu principal\n");
                printf("2. Cadastrar cartas e começar jogo \n");
                printf("3. Sair\n");
                printf("Escolha: ");
                scanf("%d", &opcao2);
    
                switch(opcao2)
                {
                    case 1:
                        menu = 1; // volta para o menu principal
                        break;
                    case 2:
                        // Cadastrar cartas
                        pausar_tela();
                        limpar_tela();
                        printf("=== Cadastro de Cartas ===\n");
                       
                        
                        pausar_tela();
                        limpar_tela();
                        printf("=== Cadastrando carta 1 ===\n");
                        printf("Digite o código da carta 1(a-z)(0)(1-4):");
                        fgets(codigo1, sizeof(codigo1), stdin); // Lê a string com espaços
                         
                        pausar_tela();
                        limpar_tela();
                        // Lê os dados da cidade 1
                        printf("Digite o nome da cidade 1:");

                        
                        fgets(cidade1, sizeof(cidade1), stdin) ; // Lê a string com espaços
                           
                        // Lê o nome do estado 1
                        pausar_tela();
                        limpar_tela();
                        printf("Digite o nome do estado : ");
                        
                        fgets(estado1, sizeof(estado1), stdin); // Lê a string com espaços
                        estado1[strcspn(estado1, "\n")] = 0; // Remove o caractere de nova linha
                        // Lê os dados da cidade 1
                        pausar_tela();
                        limpar_tela();

                        
                    printf("Digite a população da cidade 1 :");
                        
                        scanf("%d", &populacao1);
                        pausar_tela();

                        limpar_tela();
                    printf("Digite a área da cidade 1:");
                        scanf("%f", &area1);
                        pausar_tela();
                        limpar_tela();
                        printf("Digite o PIB da cidade 1:");
                        
                        scanf("%lf", &PIB1);
                        pausar_tela();
                        limpar_tela();
                        // Calculando PIB per capita
                        PIB_percapita1 = PIB1 / populacao1;
                        // Calculando densidade populacional
                        densidade1 = populacao1 / area1;
                        //calculando super poder
                        super_poder1 =PIB1 + populacao1 + area1 + PIB_percapita1 + densidade1;

                       
                        
                        pausar_tela();
                        limpar_tela(); 
                        
                        printf("=== Cadastrando carta 2 ===\n");
                        printf("Digite o código da carta 2(a-z)(0)(1-4):");
                        fgets(codigo2, sizeof(codigo2), stdin); // Lê a string com espaços

                        pausar_tela();
                        limpar_tela();
                        // Lê os dados da cidade 2
                        printf("Digite o nome da cidade 2:");
                        
                        fgets(cidade2, sizeof(cidade2), stdin); // Lê a string com espaços
                       
                        // Lê o nome do estado 2
                        pausar_tela();
                        limpar_tela();
                        printf("Digite o nome do estado 2:");

                     
                        fgets(estado2, sizeof(estado2), stdin); // Lê a string com espaços
                        
                        pausar_tela();
                        limpar_tela();
                        printf("Digite a população da cidade 2:");
                        scanf("%d", &populacao2);
                        pausar_tela();
                        limpar_tela();
                        // Lê a área da cidade 2
                        printf("Digite a área da cidade 2:");
                        scanf("%f", &area2);
                        pausar_tela();
                        limpar_tela();
                        printf("Digite o PIB da cidade 2:");
                        scanf("%lf", &PIB2);
                        pausar_tela();
                        limpar_tela();
                        
                        // Calculando PIB per capita
                        PIB_percapita2 = PIB2 / populacao2;
                        // Calculando densidade populacional
                        densidade2 = populacao2 / area2;
                        //calculando super poder
                        super_poder2 = PIB2 + populacao2 + area2 + PIB_percapita2 + densidade2;
                        pausar_tela();
                        limpar_tela();

                      
                       printf("=== Cartas cadastradas com sucesso! ===\n");



                        printf("Carta 1:%s\nCidade:%s\nEstado:%s\nPopulação:%d\nÁrea:%.2f\nPIB:%.2lf\nPIB per capita:%.2f\nDensidade:%.2f\nSuper Poder:%.2f\n" 
                            ,codigo1, cidade1, estado1, populacao1, area1, PIB1, PIB_percapita1, densidade1, super_poder1);
                        printf("Carta 2:%s\n  Cidade: %s\n  Estado: %s\n  População: %d\n  Área: %.2f\n  PIB: %.2lf\n  PIB per capita: %.2f\n  Densidade: %.2f\n  Super Poder: %.2f\n",
                               codigo2, cidade2, estado2, populacao2, area2, PIB2, PIB_percapita2, densidade2, super_poder2);       
                       
                         pausar_tela();
                         limpar_tela();


                        printf("=== Jogo iniciado! ===\n");
                        printf("Escolha uma propriedade para comparar:\n");
                        printf("1. População\n");
                        printf("2. Área\n");
                        printf("3. PIB\n");
                        printf("4. PIB per capita\n");
                        printf("5. Densidade populacional\n");
                        printf("6. Super Poder\n");
                        printf("Escolha uma opção: ");
                        scanf("%d", &opcao3);
                        switch(opcao3) {
                            case 1:
                            printf("Comparando População...\n");
                             {resultado1 = populacao1 > populacao2 ? 1 : 0;
                             }
                                pausar_tela();
                                limpar_tela();
                                printf("Digite a segunda propriedade para comparar:\n");
                                printf("1. População\n");
                                printf("2. Área\n");
                                printf("3. PIB\n");
                                printf("4. PIB per capita\n");
                                printf("5. Densidade populacional\n");
                                printf("6. Super Poder\n");
                                printf("Escolha uma opção: ");
                                scanf("%d", &opcao4);
                                if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    system("pause");
                                    pausar_tela();
                                    limpar_tela();
                                    continue; // Volta para o início do loop
                                }else{
                                switch(opcao4) {
                                    case 1:
                                        printf("Comparando População...\n");
                                        resultado2 = populacao1 > populacao2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    case 2:
                                        printf("Comparando Área...\n");
                                        resultado2 = area1 > area2 ? 1 : 0;

                                if(resultado1 == 1 && resultado2 == 1) {
                                  printf("Você venceu a rodada!\n");
                                  printf("Carta 1: %s\n População: %d\n Area: %f \n", cidade1, populacao1, area1);
                                  printf("Carta 2: %s\n População: %d\n Area: %f \n", cidade2, populacao2, area2);

                                } else if(resultado1 == 0 && resultado2 == 0) {
                                    printf("Você perdeu a rodada!\n");
                                    printf("Carta 1: %s\n População: %d\n Area: %f\n ", cidade1, populacao1, area1);
                                    printf("Carta 2: %s\n População: %d\n Area: %f \n", cidade2, populacao2, area2);

                                } else {
                                    printf("A rodada terminou empatada!\n");
                                    printf("Carta 1: %s\n População: %d\n Area: %f\n ", cidade1, populacao1, area1);
                                    printf("Carta 2: %s\n População: %d\n Area: %f \n", cidade2, populacao2, area2);
                                    } 
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
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
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop


                                }
                             break;
                            case 2:
                            printf("Comparando Área...\n");
                             {resultado1 = area1 > area2 ? 1 : 0;  
                             }
                             pausar_tela();
                             limpar_tela();
                               printf("Digite a segunda propriedade para comparar:\n");
                                printf("1. População\n");
                                printf("2. Área\n");
                                printf("3. PIB\n");
                                printf("4. PIB per capita\n");
                                printf("5. Densidade populacional\n");
                                printf("6. Super Poder\n");
                                printf("Escolha uma opção: ");
                                scanf("%d", &opcao4);
                                if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    system("pause");
                                    pausar_tela();
                                    limpar_tela();
                                    continue; // Volta para o início do loop
                                }else{
                                switch(opcao4) {
                                    case 1:
                                        printf("Comparando População...\n");
                                        resultado2 = populacao1 > populacao2 ? 1 : 0;

                                  if(resultado1 == 1 && resultado2 == 1) {
                                  printf("Você venceu a rodada!\n");

                                } else if(resultado1 == 0 && resultado2 == 0) {
                                    printf("Você perdeu a rodada!\n");
                                } else {
                                    printf("A rodada terminou empatada!\n");
                    } 
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    case 2:
                                        printf("Comparando Área...\n");
                                        resultado2 = area1 > area2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();

                                    printf("Resultado da comparação:\n");
                                    if(resultado1 == 1 && resultado2 == 1) {
                                    printf("Você venceu a rodada!\n");

                                }   else if(resultado1 == 0 && resultado2 == 0) {
                                    printf("Você perdeu a rodada!\n");
                                }   else {
                                    printf("A rodada terminou empatada!\n");
                    } 
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
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop


                                }
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
                            }   
                                printf("Digite a segunda propriedade para comparar:\n");
                                printf("1. População\n");
                                printf("2. Área\n");
                                printf("3. PIB\n");
                                printf("4. PIB per capita\n");
                                printf("5. Densidade populacional\n");
                                printf("6. Super Poder\n");
                                printf("Escolha uma opção: ");
                                scanf("%d", &opcao4);
                                if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    system("pause");
                                    pausar_tela();
                                    limpar_tela();
                                    continue; // Volta para o início do loop
                                }else{
                                switch(opcao4) {
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
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop

                                }
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
                        pausar_tela();
                        limpar_tela();
                        system("pause");
                        continue; // Volta para o início do loop
                            
                            
                        
                       
                }
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                system("pause");
                pausar_tela();
                limpar_tela();
                continue; // Volta para o início do loop
        }

       
   }

   return 0;
}
