#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//#include <windows.h>

#include "configs.c"

#define LARGURA 20 //width
#define ALTURA 10 //height
#define PASSARO_X 5 //BIRD_X
#define MAX_PILARES 3  // MAX_PILLARS -> Número máximo de pilares
//#define DIST_MIN_BURACOS 3  // MIN_GAP_DISTANCE -> Distância mínima entre os buracos
//códigos abaixo simplesmente para implementação de cores nos pilares
//definição de cores
#define LIMPA "\x1B[0m"
#define RESET "\033[m"             
#define VERDE "\033[38;2;0;156;59m" 
#define AMARELO "\033[38;2;255;223;0m" 
#define AZUL "\033[38;2;0;39;118m"  
#define PADRAO "\033[m"

typedef struct {
    int y; // Bird's vertical position
} Passaro;

typedef struct {
    int x;        // Pillar's horizontal position
    int buracoY;     // gapY - Posição do buraco no eixo Y
    int buracoTam;  // gapTamanho -> tamanho do buraco do cano
} Pilar;

const char* getRandomColor() {
    int randomValue = rand() % 4; 
    switch (randomValue) {
        case 0: return VERDE; 
        case 1: return AMARELO;  
        case 2: return AZUL;
        case 3: return PADRAO;
        default: return PADRAO;  
    }
}

void desenharJogo(Passaro *passaro, Pilar pilares[], int pontuacao) { //DrawGame

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
				printf("<>");						// passarinho
			} else {
				int pilarDesenhado = 0;
				for (p = 0; p < MAX_PILARES; p++) {
					const char* color = getRandomColor();
					if (j == pilares[p].x && (i < pilares[p].buracoY || i >= pilares[p].buracoY + pilares[p].buracoTam)) {
						printf("%s\xBA\xBA%s", color, PADRAO); //pilar
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
    //printf("\xCD");
    for (i = 0; i < LARGURA; i++) printf("\xCD\xCD");
    printf("\xCD\xCD\n");

    printf("Score: %d\n", pontuacao);
}

int checarColisao(Passaro *passaro, Pilar pilares[]) { //CheckCollision
    if (passaro->y <= 0 || passaro->y >= ALTURA - 1) return 1; // Hits top or bottom
    int i;
    if (passaro->y <= 0 || passaro->y >= ALTURA - 1) return 1; // Acertou o chão ou teto
    for (i = 0; i < MAX_PILARES; i++) {
        if (pilares[i].x == PASSARO_X && (passaro->y < pilares[i].buracoY || passaro->y >= pilares[i].buracoY + pilares[i].buracoTam)) {
    //implementação original
    /*for (i = 0; i < MAX_PILARES; i++) {
        if (pilares[i].x == PASSARO_X && (passaro->y < pilares[i].buracoY || passaro->y >= pilares[i].buracoY + pilares[i].buracoTam)) {*/
            return 1; // Acertou qualquer pilar
        }
    }
    return 0;
}

void moverPilares(Pilar pilares[], int *pontuacao) { //movePillars
	int i;
    for (i = 0; i < MAX_PILARES; i++) {
        pilares[i].x--;

        // Verifica se o pilar saiu da tela e reinicia sua posição
        if (pilares[i].x < 0) {
            pilares[i].x = LARGURA - 1;

            // Define as posições mínimas e máximas para o buraco
            int minBuracoY = 3;  // minGapY -> Posição mínima do topo do buraco
            int maxBuracoY = ALTURA - 3 - pilares[i].buracoTam;  // Posição máxima da base do buraco
            
            // Randomiza a nova posição do buraco
            pilares[i].buracoY = rand() % (maxBuracoY - minBuracoY + 1) + minBuracoY;
            (*pontuacao)++; // Aumenta a pontuação para cada pilar que sai da tela
            
        }
    }
}

void atualizarPassaro(Passaro *passaro) { //UpdateBird
    if (_kbhit() && _getch() == ' ') { // Verifica se uma tecla foi pressionada e se é 'espaço'
        passaro->y -= 2; //  O pássaro "salta" para cima
    }
    passaro->y++; // Efeito de gravidade-> Garante que o pássaro fique dentro dos limites
    
    if (passaro->y >= ALTURA - 1) {
	   passaro->y = ALTURA - 1; // Limita na parte inferior
    }
	if (passaro->y < 0) {
	   passaro->y = 0; // Limita na parte superior
	}
}


int flappy(int a;){
    srand(time(0));
    Passaro passaro = {ALTURA / 2};
    
    //showWelcomeScreen();

    // Initialize multiple pillars
    Pilar pilares[MAX_PILARES];
    int i;
    for (i = 0; i < MAX_PILARES; i++) {
        pilares[i].x = LARGURA - 1 + (i * 6); // Set each pillar at an interval
        pilares[i].buracoTam = 2; // Fixed gap size of 2
        // Initial gap position for the pillars
        int minBuracoY = 3; // Minimum y-position for the top of the gap
        int maxBuracoY = ALTURA - 3 - pilares[i].buracoTam; // Maximum y-position for the bottom of the gap
        pilares[i].buracoY = rand() % (maxBuracoY - minBuracoY + 1) + minBuracoY;
    }
    int pontuacao = 0;

    while (1) {  // Loop infinito para simular o jogo
        atualizarPassaro(&passaro);
        //system("cls");// Simula a tela limpa (apenas para fins visuais): 	Não implementar
        moverPilares(pilares, &pontuacao);   

        if (checarColisao(&passaro, pilares)) {
            printf("Game Over! Final pontuacao: %d\n", pontuacao);
            
            //aqui devo pegar o escore para ser adicionado ao resultado da partida
            return pontuacao; // Retorna a pontuação final ao invés de apenas sair
			//break;
        }

        desenharJogo(&passaro, pilares, pontuacao);
        Sleep(150); //-> Original

        
    }

    return 0;
}

/*void main(){
	flappy();
}*/
