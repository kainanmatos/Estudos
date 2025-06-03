#include <stdio.h>

// Constantes do jogo
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

// Função para inicializar o tabuleiro com água (valor 0)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = VALOR_AGUA;
        }
    }
}

// Função para verificar se o navio pode ser colocado sem ultrapassar limites ou sobrepor outro navio
int podeColocarNavio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                     int linhaInicial, int colunaInicial, char direcao) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (direcao == 'H') { // Horizontal
            if (colunaInicial + i >= TAMANHO_TABULEIRO || tabuleiro[linhaInicial][colunaInicial + i] != VALOR_AGUA) {
                return 0; // Fora dos limites ou posição já ocupada
            }
        } else if (direcao == 'V') { // Vertical
            if (linhaInicial + i >= TAMANHO_TABULEIRO || tabuleiro[linhaInicial + i][colunaInicial] != VALOR_AGUA) {
                return 0;
            }
        }
    }
    return 1; // Posição válida
}

// Função para posicionar o navio no tabuleiro
void colocarNavio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
                  int linhaInicial, int colunaInicial, char direcao) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (direcao == 'H') {
            tabuleiro[linhaInicial][colunaInicial + i] = VALOR_NAVIO;
        } else if (direcao == 'V') {
            tabuleiro[linhaInicial + i][colunaInicial] = VALOR_NAVIO;
        }
    }
}

// Função para exibir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro Batalha Naval:\n\n");

    // Cabeçalho com índices de colunas
    printf("   ");
    for (int col = 0; col < TAMANHO_TABULEIRO; col++) {
        printf("%2d ", col);
    }
    printf("\n");

    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        printf("%2d ", linha); // Índice da linha
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            printf("%2d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Coordenadas iniciais fixas dos dois navios
    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 4;

    int linhaNavioVertical = 5;
    int colunaNavioVertical = 1;

    // Inicializa o tabuleiro com água
    inicializarTabuleiro(tabuleiro);

    // Valida e posiciona o navio horizontal
    if (podeColocarNavio(tabuleiro, linhaNavioHorizontal, colunaNavioHorizontal, 'H')) {
        colocarNavio(tabuleiro, linhaNavioHorizontal, colunaNavioHorizontal, 'H');
    } else {
        printf("Erro: não foi possível posicionar o navio horizontal.\n");
        return 1;
    }

    // Valida e posiciona o navio vertical
    if (podeColocarNavio(tabuleiro, linhaNavioVertical, colunaNavioVertical, 'V')) {
        colocarNavio(tabuleiro, linhaNavioVertical, colunaNavioVertical, 'V');
    } else {
        printf("Erro: não foi possível posicionar o navio vertical.\n");
        return 1;
    }

    // Exibe o tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}
