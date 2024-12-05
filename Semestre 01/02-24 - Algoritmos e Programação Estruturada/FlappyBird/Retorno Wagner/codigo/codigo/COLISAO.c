#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h> 
#include "main.c"

int COLISAO(PASSARO *passaro, Pillar pillars[]) {
    if (passaro->Y <= 0 || passaro->Y >= ALTURA - 1) return 1; // Condição para quando atigir as bordas inferior ou superior
    int i;
    for (i = 0; i < Q_PILAR; i++) {
        if (pillars[i].X == PASSARO_X && (passaro->Y < pillars[i].BRECHAY || passaro->Y >= pillars[i].BRECHAY + pillars[i].TBRECHA)) {
            return 1; // Condição para quando bater no pilar
        }
    }
    return 0;
}