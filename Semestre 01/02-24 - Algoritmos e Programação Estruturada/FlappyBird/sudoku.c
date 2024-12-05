#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

typedef struct {
    int grid[SIZE][SIZE]; // Matriz 9x9 do Sudoku
} Sudoku;

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
int solveSudoku(Sudoku *sudoku) {
    int row, col;
    int foundEmpty = 0;

    // Encontra uma célula vazia
    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            if (sudoku->grid[row][col] == 0) {
                foundEmpty = 1;
                break;
            }
        }
        if (foundEmpty) break;
    }

    // Se não há células vazias, o tabuleiro está resolvido
    if (!foundEmpty) return 1;

    // Tenta preencher a célula vazia com números de 1 a 9
    int num;
	for (num = 1; num <= SIZE; num++) {
        if (isValid(sudoku, row, col, num)) {
            sudoku->grid[row][col] = num;

            // Continua tentando resolver recursivamente
            if (solveSudoku(sudoku)) return 1;

            // Se falhar, volta atrás
            sudoku->grid[row][col] = 0;
        }
    }
    return 0; // Retorna 0 se não conseguir resolver
}
void removeNumbers(Sudoku *sudoku, int holes) {
    srand(time(NULL));
    while (holes > 0) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;
        
        // Só remove se a célula não estiver vazia
        if (sudoku->grid[row][col] != 0) {
            sudoku->grid[row][col] = 0;
            holes--;
        }
    }
}
int main() {
    Sudoku sudoku = {0}; // Inicializa com zeros

    // Resolve o Sudoku para obter uma solução completa
    if (solveSudoku(&sudoku)) {
        printf("Tabuleiro completo:\n");
        printSudoku(&sudoku);

        // Cria o desafio removendo números
        removeNumbers(&sudoku, 40); // Exemplo: 40 "buracos"
        printf("\nTabuleiro para jogar:\n");
        printSudoku(&sudoku);
    } else {
        printf("Erro ao gerar tabuleiro.\n");
    }

    return 0;
}

