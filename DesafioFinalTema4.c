#include <stdio.h>

#define SIZE 10

void initializeBoard(int board[SIZE][SIZE]) {
    // Inicializa todo o tabuleiro com zeros
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = 0;
        }
    }

    // Define padrões com loops e intervalos compactos
    for (int i = 5; i <= 7; i++) {
        board[i][2] = 1;
        if (i >= 6) board[i][3] = 1;
    }
    for (int j = 0; j <= 4; j++) board[7][j] = 1;
    for (int j = 1; j <= 3; j++) board[6][j] = 1;
    {
        /* code */
    }
    

    for (int i = 3; i <= 7; i++) {
        if (i == 3) board[i][6] = 2;
        if (i == 4) for (int j = 5; j <= 7; j++) board[i][j] = 2;
        if (i == 5) for (int j = 4; j <= 8; j++) board[i][j] = 2;
        if (i == 6) for (int j = 5; j <= 7; j++) board[i][j] = 2;
        if (i == 7) board[i][6] = 2;
    }

    for (int i = 0; i <= 4; i++) {
        if (i == 0 || i == 1) board[i][2] = 3;
        if (i == 2) for (int j = 0; j <= 4; j++) board[i][j] = 3;
        if (i >= 3) board[i][2] = 3;
    }
}
    
void printBoard(int board[SIZE][SIZE]) {
    printf("TABULEIRO DE BATALHA NAVAL\n");
        printf("  A B C D E F G H I J\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", i);
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int board[SIZE][SIZE];
    initializeBoard(board);
    printBoard(board);

    return 0;
}
