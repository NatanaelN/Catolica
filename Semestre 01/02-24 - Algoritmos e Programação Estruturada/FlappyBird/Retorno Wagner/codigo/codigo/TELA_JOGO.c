#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h> 
#include "main.c"

void TELA_JOGO(PASSARO *passaro, Pillar pillars[], int score) {
    system("CLS");

    // Bordas
    printf("+");
    int i, j, p;
    for (i = 0; i < LARGURA; i++) printf("--");
    printf("+\n");

    // Desenho da tela de jogo
    
    for (i = 0; i < ALTURA; i++) {
        printf("|");
        for (j = 0; j < LARGURA; j++) {
            if (j == PASSARO_X && i == passaro->Y) {
                printf("<>"); // passaro
            } else {
                int pillarDrawn = 0;
                for (p = 0; p < Q_PILAR; p++) {
                    if (j == pillars[p].X && (i < pillars[p].BRECHAY || i >= pillars[p].BRECHAY + pillars[p].TBRECHA)) {
                        printf("[]"); // Pilar
                        pillarDrawn = 1;
                        break;
                    }
                }
                if (!pillarDrawn) {
                    printf("  "); // Espaço entre o pilar de cima e de baixo onde o passaro passa
                }
            }
        }
        printf("|\n");
    }

    // Borda inferior
    printf("+");
    for (i = 0; i < LARGURA; i++) printf("--");
    printf("+\n");

    printf("Score: %d\n", score);
}