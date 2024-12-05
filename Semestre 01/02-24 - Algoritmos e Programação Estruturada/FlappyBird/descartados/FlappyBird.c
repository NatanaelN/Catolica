#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define LARGURA 20 
#define ALTURA 10 
#define PASSARO_X 5
#define MAX_PILARES 3  // Number of pillars
#define MIN_GAP_DISTANCE 3  // Minimum distance between gaps

typedef struct {
    int y; // Bird's vertical position
} Passaro;

typedef struct {
    int x;        // Pillar's horizontal position
    int gapY;     // Position of the gap
    int gapTamanho;  // Size of the gap
} Pilar;

void desenharJogo(Passaro *passaro, Pilar pilares[], int pontuacao) {
	system("CLS");

	// Borda superior
	printf("\xCD");
	int i, j, p;
	for (i = 0; i < LARGURA; i++) printf("\xCD\xCD");
	printf("\xCD\n");

	// Desenhar o espaC'o do jogo

	for (i = 0; i < ALTURA; i++) {
		printf("\xBA");
		for (j = 0; j < LARGURA; j++) {
			if (j == PASSARO_X && i == passaro->y) {
				printf("<>");
			} else {
				int pilarDesenhado = 0;
				for (p = 0; p < MAX_PILARES; p++) {
					if (j == pilares[p].x && (i < pilares[p].gapY || i >= pilares[p].gapY + pilares[p].gapTamanho)) {
						printf("\xBA\xBA"); //pilar
						pilarDesenhado = 1;
						break;
					}
				}
				if (!pilarDesenhado) {
					printf("  ");
				}
			}
		}
		printf("\xBA\n");
	}


    // Bottom border
    printf("\xCD");
    for (i = 0; i < LARGURA; i++) printf("\xCD\xCD");
    printf("\xCD\xCD\n");

    printf("Score: %d\n", pontuacao);
}

int checkCollision(Passaro *passaro, Pilar pilares[]) {
    if (passaro->y <= 0 || passaro->y >= ALTURA - 1) return 1; // Hits top or bottom
    int i;
    for (i = 0; i < MAX_PILARES; i++) {
        if (pilares[i].x == PASSARO_X && (passaro->y < pilares[i].gapY || passaro->y >= pilares[i].gapY + pilares[i].gapTamanho)) {
            return 1; // Hits any pillar
        }
    }
    return 0;
}

void movePillars(Pilar pilares[], int *pontuacao) {
	int i;
    for (i = 0; i < MAX_PILARES; i++) {
        pilares[i].x--;

        // Check if the pillar is off screen and reset it
        if (pilares[i].x < 0) {
            pilares[i].x = LARGURA - 1;

            // Define minimum and maximum Y positions for the gap
            int minGapY = 3;  // Minimum y-position for the top of the gap
            int maxGapY = ALTURA - 3 - pilares[i].gapTamanho;  // Maximum y-position for the bottom of the gap
            
            // Randomize new gap position
            pilares[i].gapY = rand() % (maxGapY - minGapY + 1) + minGapY;
            (*pontuacao)++; // Increase score for each pillar that goes off-screen
            
        }
    }
}

void updateBird(Passaro *passaro) {
    if (_kbhit() && _getch() == ' ') {
        passaro->y -= 2; // Jump
    }
    passaro->y++; // Gravity effect
    
    if (passaro->y >= ALTURA - 1) passaro->y = ALTURA - 1; // Prevent going out of bounds
    if (passaro->y < 0) passaro->y = 0; // Prevent going out of bounds
}


int flappy(){
    srand(time(0));
    Passaro passaro = {ALTURA / 2};
    
    //showWelcomeScreen();

    // Initialize multiple pillars
    Pilar pilares[MAX_PILARES];
    int i;
    for (i = 0; i < MAX_PILARES; i++) {
        pilares[i].x = LARGURA - 1 + (i * 6); // Set each pillar at an interval
        pilares[i].gapTamanho = 2; // Fixed gap size of 2
        // Initial gap position for the pillars
        int minGapY = 3; // Minimum y-position for the top of the gap
        int maxGapY = ALTURA - 3 - pilares[i].gapTamanho; // Maximum y-position for the bottom of the gap
        pilares[i].gapY = rand() % (maxGapY - minGapY + 1) + minGapY;
    }
    int pontuacao = 0;

    while (1) {
        updateBird(&passaro);
        movePillars(pilares, &pontuacao);

        if (checkCollision(&passaro, pilares)) {
            printf("Game Over! Final pontuacao: %d\n", pontuacao);
            
            //aqui devo pegar o escore para ser adicionado ao resultado da partida
            return pontuacao; // Retorna a pontuação final ao invés de apenas sair
			//break;
        }

        desenharJogo(&passaro, pilares, pontuacao);
        Sleep(150);
    }

    return 0;
}
