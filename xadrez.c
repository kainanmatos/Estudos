#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre: 5 casas para a direita (for loop)
    printf("Movimento da Torre:\n");
    for(i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (while loop)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while(i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (do-while loop)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while(i <= 8);

    return 0;
}
