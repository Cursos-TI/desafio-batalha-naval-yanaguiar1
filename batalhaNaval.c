#include <stdio.h>

#define TABULEIRO_TAMANHO 10

int main(){
    //Matriz de 10x10 do tabuleiro
    int tabuleiro[TABULEIRO_TAMANHO][TABULEIRO_TAMANHO] = {0};

    //Posição do navio 1 (Horizontal)
    tabuleiro[1][2] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][2] = 3;

    //Posição do navio 2 (Vertical)
    tabuleiro[4][7] = 3;
    tabuleiro[4][8] = 3;
    tabuleiro[4][9] = 3;

    //Posição do navio 3 (Diagonal)
    tabuleiro[7][5] = 3;
    tabuleiro[8][4] = 3;
    tabuleiro[9][3] = 3;

    //Posicação do navio 4 (Diagonal)
    tabuleiro[5][1] = 3;
    tabuleiro[6][2] = 3;
    tabuleiro[7][3] = 3;

    printf("=== Tabuleiro ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
