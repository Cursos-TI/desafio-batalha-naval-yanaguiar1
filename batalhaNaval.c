#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navio horizontal (tamanho 3) a partir da posição (1, 2)
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    // Posiciona navio vertical (tamanho 3) a partir da posição (4, 5)
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;

    // Exibe o tabuleiro
    printf("=== Tabuleiro ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
