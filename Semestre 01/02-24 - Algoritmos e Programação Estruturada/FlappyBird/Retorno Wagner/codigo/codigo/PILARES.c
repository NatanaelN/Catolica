#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h> 
#include "main.c" 

void PILARES(Pillar pillars[], int *score) {
	int i;
    for (i = 0; i < Q_PILAR; i++) {
        pillars[i].X--;

        // Verificação se o pilar está fora da tela e reinicia a posição do pilar 
        if (pillars[i].X < 0) {
            pillars[i].X = LARGURA - 1;

            // Define a altura maxima dos pilares para poder gerar um espaço para que o passaro possa passar (EIXO Y)
            int minGapY = 3;  // Altura minima do pilar
            int maxGapY = ALTURA - 3 - pillars[i].TBRECHA;  // Altura maxima do pilar
            
            // Gerador aleatorio de posições para os pilares
            pillars[i].BRECHAY = rand() % (maxGapY - minGapY + 1) + minGapY;
            (*score)++; // Aumento do escore de acordo com cada pilar que sai da tela de jogo
        }
    }
}