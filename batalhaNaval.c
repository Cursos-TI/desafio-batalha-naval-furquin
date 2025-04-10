#include <stdio.h>
#define NAVIO 1


int main() {
    int tabuleiro[5][5] = {0};

    tabuleiro[1][1] = NAVIO;
    tabuleiro[1][2] = NAVIO;
    tabuleiro[1][3] = NAVIO;

    tabuleiro[2][4] = NAVIO;
    tabuleiro[3][4] = NAVIO;
    tabuleiro[4][4] = NAVIO;

    printf("Coordenadas dos navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == NAVIO) {
                printf("Navio em [%d][%d]\n", i, j);
            }
        }
    }

    return 0;
}
