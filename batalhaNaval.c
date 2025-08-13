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
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[9][9] = 3;

    //Posicação do navio 4 (Diagonal)
    tabuleiro[5][7] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][9] = 3;

    // For que cria a habilidade em cone
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0) {
                tabuleiro[4][2] = 1;
            }
            if (i == 1) {
                tabuleiro[5][1] = 1;
                tabuleiro[5][2] = 1;
                tabuleiro[5][3] = 1;
            }
            if (i == 2) {
                tabuleiro[6][0] = 1;
                tabuleiro[6][1] = 1;
                tabuleiro[6][2] = 1;
                tabuleiro[6][3] = 1;
                tabuleiro[6][4] = 1;
            }
        }
    }
    //For que cria a habilidade em octaedo
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0) {
                tabuleiro[1][6] = 1;
            }
            if (i == 1) {
                tabuleiro[2][5] = 1;
                tabuleiro[2][6] = 1;
                tabuleiro[2][7] = 1;
            }
            if (i == 2) {
                tabuleiro[3][6] = 1;
            }
        }
    }
    //For que cria a habilidade em cruz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0) {
                tabuleiro[7][4] = 1;
            }
            if (i == 1) {
                tabuleiro[8][2] = 1;
                tabuleiro[8][3] = 1;
                tabuleiro[8][4] = 1;
                tabuleiro[8][5] = 1;
                tabuleiro[8][6] = 1;
            }
            if (i == 2) {
                tabuleiro[9][4] = 1;
            }
        }
    }

    printf("=== Tabuleiro ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
