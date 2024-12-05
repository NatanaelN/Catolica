#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

typedef struct {
    int grid[SIZE][SIZE];
} Sudoku;

// Função para imprimir o tabuleiro
void printSudoku(Sudoku *sudoku) {
	int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (j % 3 == 0 && j != 0) printf(" | ");
            printf("%d ", sudoku->grid[i][j]);
        }
        printf("\n");
        if ((i + 1) % 3 == 0 && i != SIZE - 1) {
            printf("---------------------\n");
        }
    }
}

// Função para verificar se o número pode ser colocado na posição
int isValid(Sudoku *sudoku, int row, int col, int num) {
    // Checa a linha
    int i, j, x;
    for (x = 0; x < SIZE; x++) {
        if (sudoku->grid[row][x] == num) return 0;
    }

    // Checa a coluna
    for (x = 0; x < SIZE; x++) {
        if (sudoku->grid[x][col] == num) return 0;
    }

    // Checa a subgrade 3x3
    int startRow = row - row % 3, startCol = col - col % 3;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (sudoku->grid[i + startRow][j + startCol] == num) return 0;
        }
    }
    return 1; // Válido se passar por todas as verificações
}

// Função para resolver o Sudoku
int solveSudoku(Sudoku *sudoku) {
    int row, col;
    int foundEmpty = 0;

    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            if (sudoku->grid[row][col] == 0) {
                foundEmpty = 1;
                break;
            }
        }
        if (foundEmpty) break;
    }

    if (!foundEmpty) return 1;
    int num;

    for (num = 1; num <= SIZE; num++) {
        if (isValid(sudoku, row, col, num)) {
            sudoku->grid[row][col] = num;
            if (solveSudoku(sudoku)) return 1;
            sudoku->grid[row][col] = 0;
        }
    }
    return 0;
}

// Função para remover números (criar desafio)
void removeNumbers(Sudoku *sudoku, int holes) {
    srand(time(NULL));
    while (holes > 0) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;
        
        if (sudoku->grid[row][col] != 0) {
            sudoku->grid[row][col] = 0;
            holes--;
        }
    }
}

// Função para verificar se o tabuleiro está completo
int isComplete(Sudoku *sudoku) {
	int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (sudoku->grid[i][j] == 0) return 0;
        }
    }
    return 1;
}

// Função para o loop principal do jogo
void playGame(Sudoku *sudoku) {
    int row, col, num;

    while (!isComplete(sudoku)) {
        printSudoku(sudoku);
        printf("\nDigite a linha (1-9), coluna (1-9) e número (1-9) ou 0 para sair:\n");
        
        // Recebe a entrada do usuário
        printf("Linha: ");
        scanf("%d", &row);
        if (row == 0) break;
        
        printf("Coluna: ");
        scanf("%d", &col);
        if (col == 0) break;

        printf("Número: ");
        scanf("%d", &num);
        if (num == 0) break;

        // Ajusta para índices de 0 a 8
        row--; col--;

        // Verifica se a posição é válida para inserir o número
        if (sudoku->grid[row][col] == 0 && isValid(sudoku, row, col, num)) {
            sudoku->grid[row][col] = num;
        } else {
            printf("Movimento inválido! Tente novamente.\n");
        }
    }

    // Verifica se o jogador completou o tabuleiro
    if (isComplete(sudoku)) {
        printf("\nParabéns! Você completou o Sudoku!\n");
    } else {
        printf("\nJogo encerrado.\n");
    }
}

int main() {
    Sudoku sudoku = {0};

    if (solveSudoku(&sudoku)) {
        removeNumbers(&sudoku, 40);
        printf("Tabuleiro inicial:\n");
        playGame(&sudoku);
    } else {
        printf("Erro ao gerar o tabuleiro.\n");
    }

    return 0;
}

