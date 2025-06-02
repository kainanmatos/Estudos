#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO][TAMANHO]; // Matriz 10x10 do tabuleiro
    int navioHorizontal[TAMANHO_NAVIO] = {3, 3, 3}; // Navio horizontal
    int navioVertical[TAMANHO_NAVIO] = {3, 3, 3};   // Navio vertical

    // Inicializa o tabuleiro com água (valor 0)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posição inicial do navio horizontal (linha 2, coluna 4)
    int linhaH = 2;
    int colunaH = 4;

    // Posiciona o navio horizontalmente no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // Posição inicial do navio vertical (linha 5, coluna 1)
    int linhaV = 5;
    int colunaV = 1;

    // Posiciona o navio verticalmente no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // Exibe o tabuleiro
    printf("Tabuleiro Batalha Naval (0 = água, 3 = navio):\n\n");

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
