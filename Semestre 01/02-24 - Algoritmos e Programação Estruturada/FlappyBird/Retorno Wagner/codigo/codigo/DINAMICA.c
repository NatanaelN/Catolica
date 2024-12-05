#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h> 
#include "main.c"

void DINAMICA(PASSARO *passaro) {
    if (_kbhit() && _getch() == ' ') {
        passaro->Y -= 2; // Comando para fazer o passaro voar
    }
    passaro->Y++; // Efeito da gravidade para o passaro cair 
    if (passaro->Y >= ALTURA - 1) passaro->Y = ALTURA - 1; // Limites de voo do passaro
    if (passaro->Y < 0) passaro->Y = 0;
}