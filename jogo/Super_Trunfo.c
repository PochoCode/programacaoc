#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


   void pausar_tela() {
       printf("Pressione qualquer tecla para continuar...\n");
       getchar(); // Limpa o buffer
        
      
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
        
    
        switch(menu)
        {
            case 1: // MENU PRINCIPAL
                printf("===Bemvindo ao menu principal do Super Trunfo Cidades ===\n");
                printf("1. Jogar\n");
                printf("2. Ver regras do jogo\n");
                printf("3. Sair\n");
                printf("Escolha uma opção: ");
                scanf("%d", &opcao1);
                while(getchar() != '\n'); // Limpa o buffer do teclado
                pausar_tela();
                limpar_tela();
    
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
                        pausar_tela();
                        limpar_tela();
                        exit(0);
                    default:
                        printf("Opção inválida!\n");
                        pausar_tela() ;
                        limpar_tela();
                }
                break;
    
            case 2: // MENU SECUNDÁRIO
                printf("=== MENU DE JOGO ===\n");
                printf("1. Voltar para o menu principal\n");
                printf("2. Cadastrar cartas e começar jogo \n");
                printf("3. Sair\n");
                printf("Escolha: ");
                scanf("%d", &opcao2);
                while(getchar() != '\n'); // Limpa o buffer do teclado
                pausar_tela();
                limpar_tela();
    
                switch(opcao2)
                {
                    case 1:
                        menu = 1; // volta para o menu principal
                        break;
                    case 2:
                        // Cadastrar cartas
                        
                        printf("=== Cadastro de Cartas ===\n");
                       
                        
                        
                        printf("=== Cadastrando carta 1 ===\n");

                        printf("Digite o código da carta 1(a-z)(0)(1-4):");
                        fgets(codigo1, sizeof(codigo1), stdin); // Lê a string com espaços
                        codigo1[strcspn(codigo1, "\n")] = 0; // Remove o caractere de nova linha
                         
                        pausar_tela();
                        limpar_tela();
                        // Lê os dados da cidade 1
                        printf("Digite o nome da cidade da carta 1:");

                        
                        fgets(cidade1, sizeof(cidade1), stdin) ; // Lê a string com espaços
                        cidade1[strcspn(cidade1, "\n")] = 0; // Remove o caractere de nova linha
                           
                        // Lê o nome do estado 1
                        
                        limpar_tela();
                        printf("Digite o nome do estado da carta 1 : ");
                        
                        fgets(estado1, sizeof(estado1), stdin); // Lê a string com espaços
                        estado1[strcspn(estado1, "\n")] = 0; // Remove o caractere de nova linha
                        // Lê os dados da cidade 1
                        
                        limpar_tela();

                        
                        printf("Digite a população da cidade da carta 1 :");
                        
                        scanf("%d", &populacao1);
                        while (getchar() != '\n'); // Limpa o buffer do teclado
                        
                        limpar_tela();
                        printf("Digite a área da cidade da carta 1:");
                        scanf("%f", &area1);
                        while(getchar() != '\n'); // Limpa o buffer do teclado
                        
                        limpar_tela();
                        printf("Digite o PIB da cidade da carta 1:");
                        scanf("%lf", &PIB1);
                        while(getchar() != '\n'); // Limpa o buffer do teclado
                        
                        limpar_tela();
                        // Calculando PIB per capita
                        PIB_percapita1 = PIB1*100000000 / populacao1;
                        // Calculando densidade populacional
                        densidade1 = (float) populacao1 / area1;
                        //calculando super poder
                        super_poder1 =PIB1 + populacao1 + area1 + PIB_percapita1 + (1.0f/densidade1);

                       
                        
                        
                        limpar_tela(); 
                        getchar(); // Limpa o buffer do teclado
                        printf("=== Cadastrando carta 2 ===\n");
                        printf("Digite o código da carta 2(a-z)(0)(1-4):");
                        fgets(codigo2, sizeof(codigo2), stdin); // Lê a string com espaços
                        codigo2[strcspn(codigo2, "\n")] = 0; // Remove o caractere de nova linha
                        pausar_tela();                        
                        limpar_tela();
                        // Lê os dados da cidade 2
                        
                        printf("Digite o nome da cidade da carta 2:");
                        fgets(cidade2, sizeof(cidade2), stdin); // Lê a string com espaços
                        cidade2[strcspn(cidade2, "\n")] = 0; // Remove o caractere de nova linha
                        // Lê o nome do estado 2
                        
                        limpar_tela();

                        
                        printf("Digite o nome do estado da carta 2:");
                        fgets(estado2, sizeof(estado2), stdin); // Lê a string com espaços
                        estado2[strcspn(estado2, "\n")] = 0; // Remove o caractere de nova linha
                        
                        limpar_tela();
                        printf("Digite a população da cidade da carta 2:");
                        scanf("%d", &populacao2);
                        while(getchar() != '\n'); // Limpa o buffer do teclado
                        
                        limpar_tela();
                        // Lê a área da cidade 2
                        printf("Digite a área da cidade da carta 2:");
                        scanf("%f", &area2);
                        while(getchar() != '\n'); // Limpa o buffer do teclado
                        
                        limpar_tela();
                        printf("Digite o PIB da cidade da carta 2:");
                        scanf("%lf", &PIB2);
                        while(getchar() != '\n'); // Limpa o buffer do teclado
                    
                        limpar_tela();
                        
                        // Calculando PIB per capita
                        PIB_percapita2 = PIB2*100000000 / populacao2;
                        // Calculando densidade populacional
                        densidade2 = (float)populacao2 / area2;
                        //calculando super poder
                        super_poder2 = PIB2 + populacao2 + area2 + PIB_percapita2 + (1.0f/densidade2);
                        
                        limpar_tela();

                      
                        printf("=== Cartas cadastradas com sucesso! ===\n");


                        pausar_tela();
                        limpar_tela();


                             //Mostrando as cartas cadastradas
                        printf("=== Cartas cadastradas ===\n");
                        printf("###Carta cadastrada 1###\n");
                        printf("Carta 1:%s\n",codigo1);
                        printf("Cidade:%s\n",cidade1);
                        printf("Estado:%s\n",estado1);
                        printf("População:%d\n",populacao1);
                        printf("Area:%.2f\n",area1);
                        printf("PIB:%.2lf\n",PIB1);
                        printf("PIB percapita:%.2f\n",PIB_percapita1);
                        printf("Densidade Populacional:%.2f\n",densidade1);
                        printf("Super Poder:%.2f\n", super_poder1);
                        pausar_tela();
                        limpar_tela();
                        printf("###Carta cadastrada 2###\n");
                        printf("Carta 2:%s\n",codigo2);
                        printf("Cidade:%s\n",cidade2);
                        printf("Estado:%s\n",estado2);
                        printf("População:%d\n",populacao2);
                        printf("Area:%.2f\n",area2);
                        printf("PIB:%.2lf\n",PIB2);
                        printf("PIB percapita:%.2f\n",PIB_percapita2);
                        printf("Densidade Populacional:%.2f\n",densidade2);
                        printf("Super Poder:%.2f\n", super_poder2);
                        pausar_tela();
                        limpar_tela(); 
                           

                              // Iniciando o jogo
        do{   
                        printf("=== Jogo iniciado! ===\n");
                        printf("Escolha uma propriedade para comparar:\n");
                        printf("1. População\n");
                        printf("2. Área\n");
                        printf("3. PIB\n");
                        printf("4. PIB per capita\n");
                        printf("5. Densidade populacional\n");
                        printf("6. Super Poder\n");
                        printf("7. Sair do jogo\n");
                        printf("Escolha uma opção: ");
                        scanf("%d", &opcao3);
                        while(getchar() != '\n'); // Limpa o buffer do teclado
                        
                        limpar_tela();
                        // registrando resultado da primeira propriedade
                        switch(opcao3) {
                            case 1:
                            printf("Comparando População...\n");
                             {resultado1 = populacao1 > populacao2 ? 1 : 0;}
                                pausar_tela();
                                limpar_tela();
                                // registrando resultado da segunda propriedade
                                printf("Digite a segunda propriedade para comparar:\n");
                                printf("1. População\n");
                                printf("2. Área\n");
                                printf("3. PIB\n");
                                printf("4. PIB per capita\n");
                                printf("5. Densidade populacional\n");
                                printf("6. Super Poder\n");
                                printf("Escolha uma opção: ");
                                scanf("%d", &opcao4);
                                    while(getchar() != '\n'); // Limpa o buffer do teclado
                                
                                limpar_tela();
                                // Verifica se a opção escolhida é a mesma da primeira
                                if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    
                                    pausar_tela();
                                    limpar_tela();
                                    continue; // Volta para o início do loop
                                }else{
                                    // Compara a segunda propriedade escolhida
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

                                        // Exibe o resultado da comparação
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

                                      if (resultado1 == 1 && resultado2 == 1) {
                                        printf("Você venceu a rodada!\n");
                                        printf("Carta 1: %s\n População: %d PIB: %.2lf\n " ,cidade1 ,populacao1, PIB1);
                                        printf("Carta 2: %s\n População: %d PIB: %.2lf\n ",cidade2, populacao2, PIB2);
                                    } else if (resultado1 == 0 && resultado2 == 0) {
                                        printf("Você perdeu a rodada!\n");
                                        printf("Carta 1: %s\n População: %d PIB: %.2lf\n ",cidade1, populacao1, PIB1);
                                        printf("Carta 2: %s\n População: %d PIB: %.2lf\n ",cidade2, populacao2, PIB2);
                                    } else {
                                        printf("A rodada terminou empatada!\n");
                                        printf("Carta 1: %s\n População: %d PIB: %.2lf\n ",cidade1, populacao1, PIB1);
                                        printf("Carta 2: %s\n População: %d PIB: %.2lf\n ",cidade2, populacao2, PIB2);
                                    }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 4:
                                        printf("Comparando PIB per capita...\n");
                                        resultado2 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d PIB per capita: %.2f\n ",cidade1, populacao1, PIB_percapita1);
                                            printf("Carta 2: %s\n População: %d PIB per capita: %.2f\n ",cidade2, populacao2, PIB_percapita2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d PIB per capita: %.2f\n ",cidade1, populacao1, PIB_percapita1);
                                            printf("Carta 2: %s\n População: %d PIB per capita: %.2f\n ",cidade2, populacao2, PIB_percapita2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n População: %d PIB per capita: %.2f\n ",cidade1, populacao1, PIB_percapita1);
                                            printf("Carta 2: %s\n População: %d PIB per capita: %.2f\n ",cidade2, populacao2, PIB_percapita2);
                                        }

                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 5:
                                        printf("Comparando Densidade populacional...\n");
                                        resultado2 = densidade1 < densidade2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d Densidade: %.2f\n ",cidade1, populacao1, densidade1);
                                            printf("Carta 2: %s\n População: %d Densidade: %.2f\n ",cidade2, populacao2, densidade2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d Densidade: %.2f\n ",cidade1, populacao1, densidade1);
                                            printf("Carta 2: %s\n População: %d Densidade: %.2f\n ",cidade2, populacao2, densidade2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n População: %d Densidade: %.2f\n ",cidade1, populacao1, densidade1);
                                            printf("Carta 2: %s\n População: %d Densidade: %.2f\n ",cidade2, populacao2, densidade2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 6:
                                        printf("Comparando Super Poder...\n");
                                        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d Super Poder: %.2f\n ",cidade1, populacao1, super_poder1);
                                            printf("Carta 2: %s\n População: %d Super Poder: %.2f\n ",cidade2, populacao2, super_poder2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d Super Poder: %.2f\n ",cidade1, populacao1, super_poder1);
                                            printf("Carta 2: %s\n População: %d Super Poder: %.2f\n ",cidade2, populacao2, super_poder2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n População: %d Super Poder: %.2f\n ",cidade1, populacao1, super_poder1);
                                            printf("Carta 2: %s\n População: %d Super Poder: %.2f\n ",cidade2, populacao2, super_poder2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    default:
                                        printf("Opção inválida!\n");
                                        
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop


                                    }
                                pausar_tela();
                                limpar_tela();
                                break;
                            case 2:
                             

                            printf("Comparando Área...\n");
                             {resultado1 = area1 > area2 ? 1 : 0;  }
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
                                    while(getchar() != '\n'); // Limpa o buffer do teclado
                                
                                limpar_tela();
                                 if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    
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
                                  if(resultado1 == 1 && resultado2 == 1) {
                                    printf("Você venceu a rodada!\n");
                                    printf("Carta 1: %s\n População: %d Area: %f \n", cidade1, populacao1, area1);
                                    printf("Carta 2: %s\n População: %d Area: %f \n", cidade2, populacao2, area2);

                                } else if(resultado1 == 0 && resultado2 == 0) {
                                    printf("Você perdeu a rodada!\n");
                                    printf("Carta 1: %s\n População: %d Area: %f\n ", cidade1, populacao1, area1);
                                    printf("Carta 2: %s\n População: %d Area: %f \n", cidade2, populacao2, area2);
                                } else {
                                    printf("A rodada terminou empatada!\n");
                                    printf("Carta 1: %s\n População: %d Area: %f\n ", cidade1, populacao1, area1);
                                    printf("Carta 2: %s\n População: %d Area: %f \n", cidade2, populacao2, area2);
                                    } 
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
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
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Area: %f PIB: %.2lf\n " ,cidade1 ,area1, PIB1);
                                            printf("Carta 2: %s\n Area: %f PIB: %.2lf\n ",cidade2, area2, PIB2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Area: %f PIB: %.2lf\n ",cidade1, area1, PIB1);
                                            printf("Carta 2: %s\n Area: %f PIB: %.2lf\n ",cidade2, area2, PIB2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Area: %f PIB: %.2lf\n ",cidade1, area1, PIB1);
                                            printf("Carta 2: %s\n Area: %f PIB: %.2lf\n ",cidade2, area2, PIB2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        break;
                                    case 4:
                                        printf("Comparando PIB per capita...\n");
                                        resultado2 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Area: %f PIB per capita: %.2f\n ",cidade1, area1, PIB_percapita1);
                                            printf("Carta 2: %s\n Area: %f PIB per capita: %.2f\n ",cidade2, area2, PIB_percapita2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Area: %f PIB per capita: %.2f\n ",cidade1, area1, PIB_percapita1);
                                            printf("Carta 2: %s\n Area: %f PIB per capita: %.2f\n ",cidade2, area2, PIB_percapita2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Area: %f PIB per capita: %.2f\n ",cidade1, area1, PIB_percapita1);
                                            printf("Carta 2: %s\n Area: %f PIB per capita: %.2f\n ",cidade2, area2, PIB_percapita2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 5:
                                        printf("Comparando Densidade populacional...\n");
                                        resultado2 = densidade1 < densidade2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Area: %f Densidade: %.2f\n ",cidade1, area1, densidade1);
                                            printf("Carta 2: %s\n Area: %f Densidade: %.2f\n ",cidade2, area2, densidade2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Area: %f Densidade: %.2f\n ",cidade1, area1, densidade1);
                                            printf("Carta 2: %s\n Area: %f Densidade: %.2f\n ",cidade2, area2, densidade2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Area: %f Densidade: %.2f\n ",cidade1, area1, densidade1);
                                            printf("Carta 2: %s\n Area: %f Densidade: %.2f\n ",cidade2, area2, densidade2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 6:
                                        printf("Comparando Super Poder...\n");
                                        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Area: %f Super Poder: %.2f\n ",cidade1, area1, super_poder1);
                                            printf("Carta 2: %s\n Area: %f Super Poder: %.2f\n ",cidade2, area2, super_poder2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Area: %f Super Poder: %.2f\n ",cidade1, area1, super_poder1);
                                            printf("Carta 2: %s\n Area: %f Super Poder: %.2f\n ",cidade2, area2, super_poder2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Area: %f Super Poder: %.2f\n ",cidade1, area1, super_poder1);
                                            printf("Carta 2: %s\n Area: %f Super Poder: %.2f\n ",cidade2, area2, super_poder2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    default:
                                        printf("Opção inválida!\n");
                                        
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop

                                }

                                
                                
                                } 

                                pausar_tela();
                                limpar_tela();
                                continue;
                            case 3:
                            printf("Comparando PIB...\n");
                             {resultado1 = PIB1 > PIB2 ? 1 : 0;}
                             
                                printf("Digite a segunda propriedade para comparar:\n");
                                printf("1. População\n");
                                printf("2. Área\n");
                                printf("3. PIB\n");
                                printf("4. PIB per capita\n");
                                printf("5. Densidade populacional\n");
                                printf("6. Super Poder\n");
                                printf("Escolha uma opção: ");
                                scanf("%d", &opcao4);
                                    while(getchar() != '\n'); // Limpa o buffer do teclado
                                
                                limpar_tela();
                                if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    
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
                                          if(resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d PIB: %.2lf\n " ,cidade1 ,populacao1, PIB1);
                                            printf("Carta 2: %s\n População: %d PIB: %.2lf\n ",cidade2, populacao2, PIB2);
                                        } else if(resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d PIB: %.2lf\n ",cidade1, populacao1, PIB1);
                                            printf("Carta 2: %s\n População: %d PIB: %.2lf\n ",cidade2, populacao2, PIB2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n População: %d PIB: %.2lf\n ",cidade1, populacao1, PIB1);
                                            printf("Carta 2: %s\n População: %d PIB: %.2lf\n ",cidade2, populacao2, PIB2);
                                        }   
                                        
                             
                             
                                pausar_tela();
                                limpar_tela();
                             continue;
                                    case 2:
                                        printf("Comparando Área...\n");
                                        resultado2 = area1 > area2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n PIB: %f Area: %f \n", cidade1, PIB1, area1);
                                            printf("Carta 2: %s\n PIB: %f Area: %f \n", cidade2, PIB2, area2);
                                        } else if(resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n PIB: %f Area: %f\n ", cidade1, PIB1, area1);
                                            printf("Carta 2: %s\n PIB: %f Area: %f \n", cidade2, PIB2, area2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n PIB: %f Area: %f\n ", cidade1, PIB1, area1);
                                            printf("Carta 2: %s\n PIB: %f Area: %f \n", cidade2, PIB2, area2);
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
                                        if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf PIB per capita: %.2f\n ",cidade1, PIB1, PIB_percapita1);
                                            printf("Carta 2: %s\n PIB: %.2lf PIB per capita: %.2f\n ",cidade2, PIB2, PIB_percapita2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf PIB per capita: %.2f\n ",cidade1, PIB1, PIB_percapita1);
                                            printf("Carta 2: %s\n PIB: %.2lf PIB per capita: %.2f\n ",cidade2, PIB2, PIB_percapita2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf PIB per capita: %.2f\n ",cidade1, PIB1, PIB_percapita1);
                                            printf("Carta 2: %s\n PIB: %.2lf PIB per capita: %.2f\n ",cidade2, PIB2, PIB_percapita2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 5:
                                        printf("Comparando Densidade populacional...\n");
                                        resultado2 = densidade1 < densidade2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf Densidade: %.2f\n ",cidade1, PIB1, densidade1);
                                            printf("Carta 2: %s\n PIB: %.2lf Densidade: %.2f\n ",cidade2, PIB2, densidade2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf Densidade: %.2f\n ",cidade1, PIB1, densidade1);
                                            printf("Carta 2: %s\n PIB: %.2lf Densidade: %.2f\n ",cidade2, PIB2, densidade2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf Densidade: %.2f\n ",cidade1, PIB1, densidade1);
                                            printf("Carta 2: %s\n PIB: %.2lf Densidade: %.2f\n ",cidade2, PIB2, densidade2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 6:
                                        printf("Comparando Super Poder...\n");
                                        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();  
                                        if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf Super Poder: %.2f\n ",cidade1, PIB1, super_poder1);
                                            printf("Carta 2: %s\n PIB: %.2lf Super Poder: %.2f\n ",cidade2, PIB2, super_poder2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf Super Poder: %.2f\n ",cidade1, PIB1, super_poder1);
                                            printf("Carta 2: %s\n PIB: %.2lf Super Poder: %.2f\n ",cidade2, PIB2, super_poder2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n PIB: %.2lf Super Poder: %.2f\n ",cidade1, PIB1, super_poder1);
                                            printf("Carta 2: %s\n PIB: %.2lf Super Poder: %.2f\n ",cidade2, PIB2, super_poder2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    default:
                                        printf("Opção inválida!\n");
                                    
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop
                                    }
                                    }
                            case 4:
                            printf("Comparando PIB per capita...\n");
                             {resultado1 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;}
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
                                    while(getchar() != '\n'); // Limpa o buffer do teclado
                            
                                limpar_tela();
                                 if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    
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
                                          if(resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d PIB per capita: %.2f\n " ,cidade1 ,populacao1, PIB_percapita1);
                                            printf("Carta 2: %s\n População: %d PIB per capita: %.2f\n ",cidade2, populacao2, PIB_percapita2);
                                        } else if(resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d PIB per capita: %.2f\n ",cidade1, populacao1, PIB_percapita1);
                                            printf("Carta 2: %s\n População: %d PIB per capita: %.2f\n ",cidade2, populacao2, PIB_percapita2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n População: %d PIB per capita: %.2f\n ",cidade1, populacao1, PIB_percapita1);
                                            printf("Carta 2: %s\n População: %d PIB per capita: %.2f\n ",cidade2, populacao2, PIB_percapita2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                        case 2:
                                        printf("Comparando Área...\n");
                                        resultado2 = area1 > area2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Area: %f \n", cidade1, PIB_percapita1, area1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Area: %f \n", cidade2, PIB_percapita2, area2);
                                        } else if(resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Area: %f\n ", cidade1, PIB_percapita1, area1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Area: %f \n", cidade2, PIB_percapita2, area2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Area: %f\n ", cidade1, PIB_percapita1, area1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Area: %f \n", cidade2, PIB_percapita2, area2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                        case 3:
                                        printf("Comparando PIB...\n");
                                        resultado2 = PIB1 > PIB2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f PIB: %.2lf\n " ,cidade1 ,PIB_percapita1, PIB1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f PIB: %.2lf\n ",cidade2, PIB_percapita2, PIB2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f PIB: %.2lf\n ",cidade1, PIB_percapita1, PIB1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f PIB: %.2lf\n ",cidade2, PIB_percapita2, PIB2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f PIB: %.2lf\n ",cidade1, PIB_percapita1, PIB1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f PIB: %.2lf\n ",cidade2, PIB_percapita2, PIB2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                        case 4:
                                        printf("Comparando PIB per capita...\n");
                                        resultado2 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                        case 5:
                                        printf("Comparando Densidade populacional...\n");
                                        resultado2 = densidade1 < densidade2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Densidade: %.2f\n ",cidade1, PIB_percapita1, densidade1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Densidade: %.2f\n ",cidade2, PIB_percapita2, densidade2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Densidade: %.2f\n ",cidade1, PIB_percapita1, densidade1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Densidade: %.2f\n ",cidade2, PIB_percapita2, densidade2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Densidade: %.2f\n ",cidade1, PIB_percapita1, densidade1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Densidade: %.2f\n ",cidade2, PIB_percapita2, densidade2);
                                        }
                                        case 6:
                                        printf("Comparando Super Poder...\n");
                                        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Super Poder: %.2f\n ",cidade1, PIB_percapita1, super_poder1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Super Poder: %.2f\n ",cidade2, PIB_percapita2, super_poder2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Super Poder: %.2f\n ",cidade1, PIB_percapita1, super_poder1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Super Poder: %.2f\n ",cidade2, PIB_percapita2, super_poder2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n PIB per capita: %.2f Super Poder: %.2f\n ",cidade1, PIB_percapita1, super_poder1);
                                            printf("Carta 2: %s\n PIB per capita: %.2f Super Poder: %.2f\n ",cidade2, PIB_percapita2, super_poder2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    default:
                                        printf("Opção inválida!\n");
                                       
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop
                                }
                            }
                                    
                                pausar_tela();
                                limpar_tela();   
                                break;        
                                
                             
                            case 5:
                            printf("Comparando Densidade populacional...\n");
                             {resultado1 = densidade1 < densidade2 ? 1 : 0;}
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
                                    while(getchar() != '\n'); // Limpa o buffer do teclado
                                
                                limpar_tela();
                                if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    
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
                                          if(resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d Densidade: %.2f\n " ,cidade1 ,populacao1, densidade1);
                                            printf("Carta 2: %s\n População: %d Densidade: %.2f\n ",cidade2, populacao2, densidade2);
                                        } else if(resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d Densidade: %.2f\n ",cidade1, populacao1, densidade1);
                                            printf("Carta 2: %s\n População: %d Densidade: %.2f\n ",cidade2, populacao2, densidade2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n População: %d Densidade: %.2f\n ",cidade1, populacao1, densidade1);
                                            printf("Carta 2: %s\n População: %d Densidade: %.2f\n ",cidade2, populacao2, densidade2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 2:
                                        printf("Comparando Área...\n");
                                        resultado2 = area1 > area2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Area: %f \n", cidade1, densidade1, area1);
                                            printf("Carta 2: %s\n Densidade: %.2f Area: %f \n", cidade2, densidade2, area2);
                                        } else if(resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Area: %f\n ", cidade1, densidade1, area1);
                                            printf("Carta 2: %s\n Densidade: %.2f Area: %f \n", cidade2, densidade2, area2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Area: %f\n ", cidade1, densidade1, area1);
                                            printf("Carta 2: %s\n Densidade: %.2f Area: %f \n", cidade2, densidade2, area2);
                                        }   
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 3:
                                        printf("Comparando PIB...\n");
                                        resultado2 = PIB1 > PIB2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f PIB: %.2lf\n " ,cidade1 ,densidade1, PIB1);
                                            printf("Carta 2: %s\n Densidade: %.2f PIB: %.2lf\n ", cidade2, densidade2, PIB2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f PIB: %.2lf\n ",cidade1, densidade1, PIB1);
                                            printf("Carta 2: %s\n Densidade: %.2f PIB: %.2lf\n ", cidade2, densidade2, PIB2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f PIB: %.2lf\n ",cidade1, densidade1, PIB1);
                                            printf("Carta 2: %s\n Densidade: %.2f PIB: %.2lf\n ", cidade2, densidade2, PIB2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 4:
                                        printf("Comparando PIB per capita...\n");
                                        resultado2 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f PIB per capita: %.2f\n ",cidade1, densidade1, PIB_percapita1);
                                            printf("Carta 2: %s\n Densidade: %.2f PIB per capita: %.2f\n ",cidade2, densidade2, PIB_percapita2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f PIB per capita: %.2f\n ",cidade1, densidade1, PIB_percapita1);    
                                            printf("Carta 2: %s\n Densidade: %.2f PIB per capita: %.2f\n ",cidade2, densidade2, PIB_percapita2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f PIB per capita: %.2f\n ",cidade1, densidade1, PIB_percapita1);
                                            printf("Carta 2: %s\n Densidade: %.2f PIB per capita: %.2f\n ",cidade2, densidade2, PIB_percapita2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 5:
                                        printf("Comparando Densidade populacional...\n");
                                        resultado2 = densidade1 < densidade2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade1, densidade1, super_poder1);
                                            printf("Carta 2: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade2, densidade2, super_poder2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade1, densidade1, super_poder1);
                                            printf("Carta 2: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade2, densidade2, super_poder2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade1, densidade1, super_poder1);
                                            printf("Carta 2: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade2, densidade2, super_poder2);
                                        }   
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 6:
                                        printf("Comparando Super Poder...\n");
                                        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade1, densidade1, super_poder1);
                                            printf("Carta 2: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade2, densidade2, super_poder2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade1, densidade1, super_poder1); 
                                            printf("Carta 2: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade2, densidade2, super_poder2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade1, densidade1, super_poder1);
                                            printf("Carta 2: %s\n Densidade: %.2f Super Poder: %.2f\n ",cidade2, densidade2, super_poder2);
                                        }   
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    default:
                                        printf("Opção inválida!\n");
                                        
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop
                                }
                            
                            }
                            
                                pausar_tela();
                                limpar_tela();
                             break;
                                
                            
                            case 6:
                            printf("Comparando Super Poder...\n");
                             {resultado1 = super_poder1 > super_poder2 ? 1 : 0;}
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
                                    while(getchar() != '\n'); // Limpa o buffer do teclado
                                
                                limpar_tela();
                                 if(opcao4 == opcao3) {
                                    printf("Você escolheu a mesma propriedade novamente. Tente uma diferente.\n");
                                    
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
                                          if(resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d Super Poder: %.2f\n " ,cidade1 ,populacao1, super_poder1);
                                            printf("Carta 2: %s\n População: %d Super Poder: %.2f\n ",cidade2, populacao2, super_poder2);
                                        } else if(resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n População: %d Super Poder: %.2f\n ",cidade1, populacao1, super_poder1);
                                            printf("Carta 2: %s\n População: %d Super Poder: %.2f\n ",cidade2, populacao2, super_poder2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n População: %d Super Poder: %.2f\n ",cidade1, populacao1, super_poder1);
                                            printf("Carta 2: %s\n População: %d Super Poder: %.2f\n ",cidade2, populacao2, super_poder2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 2:
                                        printf("Comparando Área...\n");
                                        resultado2 = area1 > area2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Area: %f \n", cidade1, super_poder1, area1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Area: %f \n", cidade2, super_poder2, area2);
                                        } else if(resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Area: %f\n ", cidade1, super_poder1, area1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Area: %f \n", cidade2, super_poder2, area2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Area: %f\n ", cidade1, super_poder1, area1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Area: %f \n", cidade2, super_poder2, area2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 3:
                                        printf("Comparando PIB...\n");
                                        resultado2 = PIB1 > PIB2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f PIB: %.2lf\n " ,cidade1 ,super_poder1, PIB1);
                                            printf("Carta 2: %s\n Super Poder: %.2f PIB: %.2lf\n ", cidade2, super_poder2, PIB2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f PIB: %.2lf\n ",cidade1, super_poder1, PIB1);
                                            printf("Carta 2: %s\n Super Poder: %.2f PIB: %.2lf\n ", cidade2, super_poder2, PIB2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f PIB: %.2lf\n ",cidade1, super_poder1, PIB1);
                                            printf("Carta 2: %s\n Super Poder: %.2f PIB: %.2lf\n ", cidade2, super_poder2, PIB2);
                                        }   
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 4:
                                        printf("Comparando PIB per capita...\n");
                                        resultado2 = PIB_percapita1 > PIB_percapita2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f PIB per capita: %.2f\n ",cidade1, super_poder1, PIB_percapita1);    
                                            printf("Carta 2: %s\n Super Poder: %.2f PIB per capita: %.2f\n ",cidade2, super_poder2, PIB_percapita2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f PIB per capita: %.2f\n ",cidade1, super_poder1, PIB_percapita1);
                                            printf("Carta 2: %s\n Super Poder: %.2f PIB per capita: %.2f\n ",cidade2, super_poder2, PIB_percapita2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f PIB per capita: %.2f\n ",cidade1, super_poder1, PIB_percapita1);
                                            printf("Carta 2: %s\n Super Poder: %.2f PIB per capita: %.2f\n ",cidade2, super_poder2, PIB_percapita2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 5:
                                        printf("Comparando Densidade populacional...\n");
                                        resultado2 = densidade1 < densidade2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Densidade: %.2f\n ",cidade1, super_poder1, densidade1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Densidade: %.2f\n ",cidade2, super_poder2, densidade2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Densidade: %.2f\n ",cidade1, super_poder1, densidade1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Densidade: %.2f\n ",cidade2, super_poder2, densidade2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Densidade: %.2f\n ",cidade1, super_poder1, densidade1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Densidade: %.2f\n ",cidade2, super_poder2, densidade2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    case 6:
                                        printf("Comparando Super Poder...\n");
                                        resultado2 = super_poder1 > super_poder2 ? 1 : 0;
                                        pausar_tela();
                                        limpar_tela();
                                          if (resultado1 == 1 && resultado2 == 1) {
                                            printf("Você venceu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Super Poder: %.2f\n ",cidade1, super_poder1, super_poder1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Super Poder: %.2f\n ",cidade2, super_poder2, super_poder2);
                                        } else if (resultado1 == 0 && resultado2 == 0) {
                                            printf("Você perdeu a rodada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Super Poder: %.2f\n ",cidade1, super_poder1, super_poder1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Super Poder: %.2f\n ",cidade2, super_poder2, super_poder2);
                                        } else {
                                            printf("A rodada terminou empatada!\n");
                                            printf("Carta 1: %s\n Super Poder: %.2f Super Poder: %.2f\n ",cidade1, super_poder1, super_poder1);
                                            printf("Carta 2: %s\n Super Poder: %.2f Super Poder: %.2f\n ",cidade2, super_poder2, super_poder2);
                                        }
                                        pausar_tela();
                                        limpar_tela();
                                        continue;
                                    default:
                                        printf("Opção inválida!\n");
                                        
                                        pausar_tela();
                                        limpar_tela();
                                        continue; // Volta para o início do loop
                                }
                                
                                }
                                
                                pausar_tela();
                                limpar_tela();
                                break;
                            case 7:
                                printf("Saindo...\n");
                                pausar_tela();
                                limpar_tela();
                                continue; // Volta para o início do loop
                                
                         default:
                                printf("Opção inválida!\n");
                                pausar_tela();
                                limpar_tela();
                                continue; // Volta para o início do loop
                            }  
                        
                        }
        } while (opcao3 != 7);
                        continue; // Volta para o início do loop;
                   case 3:
                        printf("Saindo...\n");
                        pausar_tela();
                        limpar_tela();
                        exit(0);
                    default:
                        printf("Opção inválida!\n");
                        pausar_tela();
                        limpar_tela();
                        continue; // Volta para o início do loop
                    }
                
            
              
                                 
                      
                        break;   
                    case 3:
                        printf("Saindo...\n");
                        pausar_tela();
                        limpar_tela();
                        exit(0);
                    default:
                        printf("Opção inválida!\n");
                        pausar_tela();
                        limpar_tela();
                        
                        continue; // Volta para o início do loop
                            
                     
                                 
                       
                
                

             
        }
        }

    
   

   return 0;
}
