#include <stdio.h>
#include <string.h>

#define L 10
#define A 10

// Matrizes de efeitos
char efeito_cruz[5][5] = {
    {'0', '0', '3', '0', '0'},
    {'0', '3', '3', '3', '0'},
    {'0', '0', '3', '0', '0'},
    {'0', '0', '3', '0', '0'},
    {'0', '0', '3', '0', '0'}
};

// Função para inicializar o tabuleiro com '0'
void inicializar_tabuleiro(char tabuleiro[L][A]) {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < A; j++) {
            tabuleiro[i][j] = '0';  // '0' significa água
        }
    }
}

// Função para imprimir o tabuleiro
void imprimir_tabuleiro(char tabuleiro[L][A]) {
    printf("  ");
    for (int j = 0; j < A; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");
    
    for (int i = 0; i < L; i++) {
        printf("%d ", i);
        for (int j = 0; j < A; j++) {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para aplicar o efeito cruz no tabuleiro
int aplicar_efeito_cruz(char tabuleiro[L][A], int linha, int coluna) {
    int acertou_navio = 0;

    // Verifica se as coordenadas estão dentro dos limites
    if (linha - 2 >= 0 && linha + 2 < L && coluna - 2 >= 0 && coluna + 2 < A) {
        // Aplicando o efeito cruz
        for (int i = -2; i <= 2; i++) {
            for (int j = -2; j <= 2; j++) {
                // Verifica se a posição corresponde ao '3' e se ela é afetada pela cruz
                if (efeito_cruz[i + 2][j + 2] == '3') {
                    int nova_linha = linha + i;
                    int nova_coluna = coluna + j;
                    if (nova_linha >= 0 && nova_linha < L && nova_coluna >= 0 && nova_coluna < A) {
                        // Se há um navio, marca um acerto
                        if (tabuleiro[nova_linha][nova_coluna] == '3') {
                            acertou_navio = 1;
                            printf("Acertou o navio em (%d, %d)!\n", nova_linha, nova_coluna);
                        }
                        // Atualiza o tabuleiro com o efeito
                        tabuleiro[nova_linha][nova_coluna] = '5';  // Marca o efeito com '5'
                    }
                }
            }
        }
    }

    return acertou_navio;
}

int main() {
    char tabuleiro[L][A];
    int linha, coluna;

    // Inicializa o tabuleiro
    inicializar_tabuleiro(tabuleiro);

    // Pede para o usuário escolher a posição do efeito
    printf("Escolha a coordenada para aplicar o efeito cruz (A-J) (0-9): ");
    char letra;
    scanf(" %c%d", &letra, &linha);
    coluna = letra - 'A';

    // Aplica o efeito cruz
    if (aplicar_efeito_cruz(tabuleiro, linha, coluna)) {
        printf("O efeito cruz acertou um ou mais navios!\n");
    } else {
        printf("O efeito cruz não acertou nenhum navio.\n");
    }

    // Imprimir o tabuleiro atualizado
    imprimir_tabuleiro(tabuleiro);

    return 0;
}
