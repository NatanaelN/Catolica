#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h> 
#include "BEM_VINDO.c"
#include "PILARES.C"
#include "TELA_JOGO.c"
#include "COLISAO.c"
#include "DINAMICA.c"

#define LARGURA 20
#define ALTURA 10
#define PASSARO_X 5
#define Q_PILAR 3  // Numero de pilares
#define MIN_GAP_DISTANCE 3  // Distância entre os pilares

typedef struct {
    int Y; 
} PASSARO;

typedef struct {
    int X;        
    int BRECHAY;     
    int TBRECHA;  // Tamanho do espaço
} Pillar;

int main() { 
 
    srand(time(0));
    PASSARO passaro = {ALTURA / 2};

    // Show the welcome screen
    BEM_VINDO();

    // Inicializa os pilares do jogo
    Pillar pillars[Q_PILAR];
    int i;
    for (i = 0; i < Q_PILAR; i++) {
        pillars[i].X = LARGURA - 1 + (i * 6); // Intervalo entre os pilares
        pillars[i].TBRECHA = 2; // Tamanho fixo de 2 entre os pilares superior e inferior
        // Posição inicial dos pilares
        int minGapY = 3; // Posição minima para o topo do pilar 
        int maxGapY = ALTURA - 3 - pillars[i].TBRECHA; // Posição maxima inferior para o pilar 
        pillars[i].BRECHAY = rand() % (maxGapY - minGapY + 1) + minGapY;
    }

    int score = 0;

    while (1) {
        DINAMICA(&passaro);
        PILARES(pillars, &score);

        if (COLISAO(&passaro, pillars)) {
            printf("Game Over! Final Score: %d\n", score);
            break;
        }

        TELA_JOGO(&passaro, pillars, score);
        Sleep(150);
    } 
   
    return 0; 
}