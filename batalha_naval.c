#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//Criando uma função para pausar a tela
void pausar_tela() {
    printf("\nPressione ENTER para continuar...");
    while(getchar() != '\n'); // limpa buffer
    getchar(); // espera ENTER
}
//criando uma função para limpar a tela
void limpar_tela(){
    system("clear||cls");
}

//Definindo as variaveis para as coordenadas
#define l 10
#define a 10
//declarando a matriz tabuleiro
char tabuleiro[l][a]; 

//Declarando os arrays de efeito
char efeito_cruz[5][5]= {
    
    {'0','0','3','0','0'},
    {'0','0','3','0','0'},
    {'3','3','3','3','3'},
    {'0','0','3','0','0'},
    {'0','0','3','0','0'}
};
char efeito_otoedro[5][5] = {
    {'0','0','3','0','0'},
    {'0','3','0','3','0'},
    {'3','0','0','0','3'},
    {'0','3','0','3','0'},
    {'0','0','3','0','0'}

};
char efeito_cone[5][5] = {
    {'0','0','3','0','0'},
    {'0','3','3','3','0'},
    {'3','3','3','3','3'},
    {'3','3','3','3','3'},
    {'0','0','0','0','0'}
};


// Criando uma função para inicializar o tabuleiro caso necessario
void inicializar_tabuleiro(char tabuleiro[l][a]){
    for(int i= 0; i < l ; i++){
        for(int j = 0; j<a;j++){
            tabuleiro[i][j]= '0';
        }

    }
}

// Criando uma função para imprimir o tabuleiro
void imprimir_tabuleiro(char tabuleiro[l][a]){
    printf("  ");
    for(int j=0;j <a;j++){
        printf("  %c",'A'+ j);
    }
    printf("\n"); 

    for(int i=0;i<l;i++){
        printf(" %d ",i);
        for(int j=0;j < a;j++){
          printf(" %c ",tabuleiro[i][j]);

        }
        printf("\n");
    }
}

//Criando as funções para aplicar os diferentes efeitos
int aplicar_efeitocruz(char tabuleiro[l][a], int linha,int coluna){
    int acertou_navio = 0;

    if(linha - 2 >= 0 && linha + 2 < l && coluna - 2 > 0 && coluna + 2 < a){
        for(int i = -2; i <= 2; i++){
            for(int j = -2; j <= 2; j++){
                if(efeito_cruz[i+2][j+2] == '3'){
                    int nova_linha = linha + i;
                    int nova_coluna = coluna +j;

                    if(nova_linha >= 0 && nova_linha < l && nova_coluna >= 0 && nova_coluna < a){
                        if(tabuleiro[nova_linha][nova_coluna] == '3'){
                            acertou_navio = 1;
                            printf("Voce acertou o navio nas coordenadas %d %d!\n",nova_linha,nova_coluna);
                            pausar_tela();
                            limpar_tela();
                        }
                        tabuleiro[nova_linha][nova_coluna] = '5';
                        pausar_tela();
                        limpar_tela();
                    }
                }
            }
        }
       
    }
    return   acertou_navio; 
}
int aplicar_efeito_otoedro(char tabuleiro[l][a], int linha, int coluna) {
    int acertos = 0;

    // Percorre a "máscara" do efeito (5x5 centrada no disparo)
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            // Só aplica onde a máscara do efeito é marcada
            if (efeito_otoedro[i+2][j+2] == '3') {
                int nova_linha = linha + i;
                int nova_coluna = coluna + j;

                // Garante que está dentro dos limites do tabuleiro
                if (nova_linha >= 0 && nova_linha < l && nova_coluna >= 0 && nova_coluna < a) {
                    if (tabuleiro[nova_linha][nova_coluna] == '3') {
                        acertos++;
                          
                        printf("Acertou o navio em (%d, %d)!\n", linha, coluna);
                        
                        
                    }
                  // Marca como atingido independente de ter navio
                  
                        
                        tabuleiro[nova_linha][nova_coluna] = '5';
                }
            }
        }
    }
    return acertos; // retorna quantos navios foram atingidos
}


int aplicar_efeito_cone(char tabuleiro[l][a], int linha, int coluna) {
    int acertou_navio = 0;

    if (linha - 2 >= 0 && linha + 2 < l && coluna - 2 >= 0 && coluna + 2 < a) {
        for (int i = -2; i <= 2; i++) {
            for (int j = -2; j <= 2; j++) {
                if (efeito_cone[i+2][j+2] == '3') {
                    int nova_linha = linha + i;
                    int nova_coluna = coluna + j;

                    if (nova_linha >= 0 && nova_linha < l && 
                        nova_coluna >= 0 && nova_coluna < a) {
                        if (tabuleiro[nova_linha][nova_coluna] == '3') {
                            acertou_navio = 1;
                            printf("Voce acertou o navio nas coordenadas %d %d!\n",
                                   nova_linha, nova_coluna);
                        }
                        tabuleiro[nova_linha][nova_coluna] = '5';
                    }
                }
            }
        }
    }
    return acertou_navio;
}


//Criando funções para posicionar os barcos
//primeiro barco na vertical
int colocar_vertical(int x, int y, int tamanho){
    if(x+ tamanho <= a){
        int ok = 1;
        for(int i= 0;i< tamanho; i++){
             if (tabuleiro[x+i][y] != '0') ok = 0;
        if (ok) {
            for (int i = 0; i < tamanho; i++) tabuleiro[x+i][y] = '3';
            return 1;
        }
    }
    }
    if(x - tamanho+ 1 >=0){
        int ok = 1;
        for(int i = 0; i < tamanho;i++){
        if (tabuleiro[x-i][y] != '0') ok = 0;
        if (ok) {
            for (int i = 0; i < tamanho; i++) tabuleiro[x-i][y] = '3';
            return 1;
        }
    }
    }
    return 0;
}

//segundo na horizontal
int colocar_horizontal(int x, int y, int tamanho) {
    // tenta pra direita
    if (y + tamanho <= l) {
        int ok = 1;
        for (int j = 0; j < tamanho; j++){
            if (tabuleiro[x][y+j] != '0') ok = 0;
        if (ok) {
            for (int j = 0; j < tamanho; j++) tabuleiro[x][y+j] = '3';
            return 1;
        }
    }
    }
    // tenta pra esquerda
    if (y - tamanho + 1 >= 0) {
        int ok = 1;
        for (int j = 0; j < tamanho; j++)
            if (tabuleiro[x][y-j] != '0') ok = 0;
        if (ok) {
            for (int j = 0; j < tamanho; j++) tabuleiro[x][y-j] = '3';
            return 1;
        }
    }
    return 0;
}

//tercero na diagonal
 int colocar_diagonal1(int x, int y, int tamanho) {
    // analisando a diagonal para baixo
    if (x + tamanho <= a && y + tamanho <= l) {
        int ok = 1;
        for (int i = 0; i < tamanho; i++)
            if (tabuleiro[x+i][y+i] != '0') ok = 0;
        if (ok) {
            for (int i = 0; i < tamanho; i++) tabuleiro[x+i][y+i] = '3';
            return 1;
        }
    }
    // analisando a diagonal para cima
    if (x - tamanho + 1 >= 0 && y - tamanho + 1 >= 0) {
        int ok = 1;
        for (int i = 0; i < tamanho; i++)
            if (tabuleiro[x-i][y-i] != '0') ok = 0;
        if (ok) {
            for (int i = 0; i < tamanho; i++) tabuleiro[x-i][y-i] = '3';
            return 1;
        }
    }
    return 0;
}   

//cuarto na diagonal
int colocar_diagonal2(int x, int y, int tamanho) {
    // analisar a diagonal para a entrada das coordenadas
    if (x + tamanho <= a && y - tamanho + 1 >= 0) {
        int ok = 1;
        for (int i = 0; i < tamanho; i++)
            if (tabuleiro[x+i][y-i] != '0') ok = 0;
        if (ok) {
            for (int i = 0; i < tamanho; i++) tabuleiro[x+i][y-i] = '3';
            return 1;
        }
    }
    // analisar a outra diagnal usando if
    if (x - tamanho + 1 >= 0 && y + tamanho <= a) {
        //declarando e inicialisando variavel para aplicação do efeito
        int ok = 1;
        //usando for para comprobar a diagonal
        for (int i = 0; i < tamanho; i++)
            if (tabuleiro[x-i][y+i] != '0') ok = 0;
        if (ok) {
            for (int i = 0; i < tamanho; i++) tabuleiro[x-i][y+i] = '3';
            return 1;
        }
    }
    return 0;
}

    
 int main() {
    //declarando variaves para armazenar as coordenadas
    int linha;
    int coluna;
    
  
   
   //Declarando variaveis para registrar as coordenadas introducidas pelo usuario
    char letra;
    
    

  
    // Imprimir o tabuleiro com letras e numeros como coordenadas sendo as letras encima e do lado os numeros
   //Inicializando o jogo
    printf("   Batalha Naval\n");
    printf("   =============\n");
   
    //Inicializando o tabuleiro
    inicializar_tabuleiro(tabuleiro);
    imprimir_tabuleiro(tabuleiro);

   
    printf("A batalha Naval começou!\n");
    printf("Você tem 2 navios para posicionar no tabuleiro.\n");
    //Pedindo a entrada de dados
    printf("Digite a coordenada inicial do navio vertical (ex: B 3): \n");
    //Registrando a entrada dos dados
    scanf(" %c %d", &letra, &coluna);
    //Transformando letra no  numeroda linha
    linha = toupper(letra) - 'A';
    //Logica de colocação do navio usando funções
    if (!colocar_vertical(coluna, linha, 3)) {
        printf("Nao coube vertical!\n");
    }else{
        colocar_vertical(coluna, linha, 3);
    }

    //imprimindo o tabuleiro atualizado
    imprimir_tabuleiro(tabuleiro);

    // colocando navio horizontal
    printf("\nDigite a coordenada inicial do navio horizontal (ex: C 5): ");
    //Registrando as coordenadas introdycidas
    scanf(" %c %d", &letra, &coluna);

    //Transformando a letra no numero de linha
    linha = toupper(letra) - 'A';
    //Logica da colocação do navio na horizontal usando as funções previamente declaradas
    if (!colocar_horizontal(coluna, linha, 3)) {
        printf("Nao coube horizontal!\n");
    }else{
        colocar_horizontal(coluna, linha, 3);
    }
    //Imprimindo tabuleiro atualizado
    imprimir_tabuleiro(tabuleiro);
    // colocando navio nas diagonais
    printf("\nDigite a coordenada inicial do navio diagonal 1: ");
    //Guardando as coordenadas introducidas
    scanf(" %c %d", &letra, &coluna);
    //Transformando a letra no numero de linha
    linha = toupper(letra) - 'A';
    //Logica de colocação do navio na diagonal usando as funções
    if (!colocar_diagonal1(coluna, linha, 3)){
         printf("Nao coube diagonal 1!\n");
    }else{
        colocar_diagonal1(coluna,linha,3);
    }
    //imprimindo tabuleiro atualizado
    imprimir_tabuleiro(tabuleiro);

    // colocando mais um navio na diagonal  
    printf("\nDigite a coordenada inicial do navio diagonal 2: ");
    //Guardando as coordenadas introducidas
    scanf(" %c %d", &letra, &coluna);
    //Convertendo a letra no numero de linha
    linha = toupper(letra) - 'A';
    //logica de colocação do navio usando funções
    if (!colocar_diagonal2(coluna, linha, 3)) {
        printf("Nao coube diagonal 2!\n");
    }else{
        colocar_diagonal2(coluna, linha, 3);
    }
    //Imprimindo o tabuleiro atualizado
    imprimir_tabuleiro(tabuleiro);
        //Inicializando a aplicação dos efeitos
        printf("Escolha um effeito especial para usar\n");
        printf("1. Efeito Cruz\n");
        printf("2. Efeito Octaedro\n");
        printf("3. Efeito Cone\n");
        //Declarando a variavel escolha para usar switch
            int escolha;
        //Guardando a escolha
            scanf("%d", &escolha);
            //Usando switch para inicializar os efeitos
            switch(escolha){
                //aplicando efeito cruz partindo desde a cordenada central
                case 1:
                    printf("Voce escolheu o efeito cruz. Escolha a coordenada central (ex:A8):\n");
                    //Declarando variaveis para usar o efeito cruz
                    char letra1;
                    int numero1;
                    //Guardando os dados inceridos
                    scanf(" %c%d", &letra1, &numero1);

                    //Pausando e limpando a tela
                    pausar_tela();
                    limpar_tela();
                    //validando coordenadas
                    if((letra1 < 'A' || letra1 > 'J') || (numero1 < 0 || numero1 > 9)) {
                        printf("Coordenadas inválidas. Tente novamente.\n");
                        return 1;
                    }
                    // convertendo letra para número da coluna
                    coluna = letra1 - 'A';
                    linha = numero1;
                   //Aplicando o efeito cruz usando as funçoes ja declaradas
                   if( aplicar_efeitocruz( tabuleiro, linha, coluna)){
                    pausar_tela();
                   //Imprimindo tabuleiro atualizado
                    imprimir_tabuleiro(tabuleiro);
                        
                        printf("O efeito cruz acertou um ou mais navios\n");
                        
                    }else{
                       imprimir_tabuleiro(tabuleiro);
                        printf("O efeito não atingiu nenhum objetivo\n");
                    }
                    //Inicializando o efeito octaedro
                    case 2: {
        printf("Voce escolheu o efeito octaedro. Escolha a coordenada central (ex:D7):\n");
        //Declaração de variaveis para inicializar o efeito 
        char letra1; 
        int numero1;
        // Guardando valores nas variaveis
        scanf(" %c%d", &letra1, &numero1);

        pausar_tela();
        limpar_tela();
        //Validando a entrada de dados
          if((letra1 < 'A' || letra1 > 'J') || (numero1 < 0 || numero1 > 9)) {
                        printf("Coordenadas inválidas. Tente novamente.\n");
                        return 1;
                    }
        //Transformando a letra em numero de coluna
        linha = numero1;
        coluna = toupper(letra1) - 'A';
       
        //Logica da aplicação do efeito usando as funções
        if(aplicar_efeito_otoedro(tabuleiro, linha, coluna)){
            pausar_tela();
            imprimir_tabuleiro(tabuleiro);
            printf("##O efeito octaedro acertou um ou mais navios##\n");
        }else{
            imprimir_tabuleiro(tabuleiro);
            printf("O efeito octaedro não acertou nada\n");
        }
        break;
    }

    //Aplicando o efeito cone
    case 3: {
        printf("Voce escolheu o efeito cone. Escolha a coordenada central (ex: E4):\n");
        //Declarando as variaves a usar para guardar os dados inseridos
        char letra1; 
        int numero1;
        //Guardando os dados inseridos 
        scanf(" %c%d", &letra1, &numero1);
        pausar_tela();
        limpar_tela();

        //Verificando as coordenaddas inseridas
          if((letra1 < 'A' || letra1 > 'J') || (numero1 < 0 || numero1 > 9)) {
                        printf("Coordenadas inválidas. Tente novamente.\n");
                        return 1;
                    }
        //Transformando a letra em numero de coluna
        linha = numero1;
        coluna = toupper(letra1) - 'A';
        
        //Aplicanddo logica de efeito de cone usando funções
        if(aplicar_efeito_cone(tabuleiro, linha, coluna)){
            pausar_tela();
            printf("O efeito cone acertou um ou mais navios\n");
        }else{
            printf("O efeito cone não acertou nada\n");
        }
        break;
    }
    default:
        printf("Opção inválida!\n");
}
                
                        
        

     return 0;

}