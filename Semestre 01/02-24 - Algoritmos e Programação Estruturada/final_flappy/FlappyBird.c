#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#include "configs.h"

const char *getRandomColor() {
    int randomValue = (int) rand() % 4;
    switch (randomValue) {
        case 0: return VERDE;
        case 1: return AMARELO;
        case 2: return AZUL;
        case 3: return PADRAO;
        default: return LIMPA;
    }
}

void desenharJogo(Passaro *passaro, Pilar pilares[], int pontuacao,
                  int n_dificuldade) {
    system("CLS");
    int i, j, p;
    criacao_caixa((LARGURA * 2)+1);
    printf("\n");

    for (i = 0; i < ALTURA; i++) {
        printf("\t\t\xBA");
        for (j = 0; j < LARGURA; j++) {
            if (j == PASSARO_X && i == passaro->y) {
                printf("<>"); /*passarinho*/
            } else {
                int pilarDesenhado = 0;
                for (p = 0; p < MAX_PILARES; p++) {
                    const char *color = getRandomColor();
                    if (j == pilares[p].x && (
                            i < pilares[p].buracoY || i >= pilares[p].buracoY +
                            pilares[p].buracoTam)) {
                        if (n_dificuldade == 1) {
                            printf("%s\xBA\xBA%s", color, PADRAO);
                        } else {
                            printf("\xBA\xBA");
                        }

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

    criacao_caixa((LARGURA * 2)+1);
    printf("\n");

    printf("\t\tPontuacao: %d\n", pontuacao);
}

int checarColisao(Passaro *passaro, Pilar pilares[]) {
    int i;
    if (passaro->y <= 0 || passaro->y >= ALTURA - 1) return 1;
    /*Acertou o ch�o ou teto*/
    for (i = 0; i < MAX_PILARES; i++) {
        if (pilares[i].x == PASSARO_X && (
                passaro->y < pilares[i].buracoY || passaro->y >= pilares[i].
                buracoY + pilares[i].buracoTam)) {
            return 1; /*Acertou qualquer pilar*/
        }
    }
    return 0;
}

void moverPilares(Pilar pilares[], int *pontuacao) {
    int i;
    for (i = 0; i < MAX_PILARES; i++) {
        pilares[i].x--;

        /*Verifica se o pilar saiu da tela e reinicia sua posi��o*/
        if (pilares[i].x < 0) {
            pilares[i].x = LARGURA - 1;

            /*Define as posi��es m�nimas e m�ximas para o buraco*/
            int minBuracoY = 3; /*minGapY -> Posi��o m�nima do topo do buraco*/
            int maxBuracoY = ALTURA - 3 - pilares[i].buracoTam;
            /*Posi��o m�xima da base do buraco*/

            /*Randomiza a nova posi��o do buraco*/
            /*pilares[i].buracoY =
                    rand() % (maxBuracoY - minBuracoY + 1) + minBuracoY;*/

            if (maxBuracoY > minBuracoY) {
                pilares[i].buracoY = rand() % (maxBuracoY - minBuracoY + 1) + minBuracoY;
            } else {
                pilares[i].buracoY = minBuracoY; // Fallback seguro
            }

            (*pontuacao)++;
            /*Aumenta a pontua��o para cada pilar que sai da tela*/
        }
    }
}

void atualizarPassaro(Passaro *passaro) {
    if (_kbhit() && _getch() == ' ') {
        /*Verifica se uma tecla foi pressionada e se � 'espa�o'*/
        passaro->y -= 2;
    }
    passaro->y++;
    /*Efeito de gravidade-> Garante que o p�ssaro fique dentro dos limites*/

    if (passaro->y >= ALTURA - 1) {
        passaro->y = ALTURA - 1; /*Limita na parte inferior*/
    }
    if (passaro->y < 0) {
        passaro->y = 0; /*Limita na parte superior*/
    }
}


int flappy(int dificuldade) {
    srand(time(0));
    Passaro passaro = {ALTURA / 2};

    Pilar pilares[MAX_PILARES];
    int i;
    int espacoEntrePilares = dificuldade == 0 ? 8 : 6; // + espaçamento no fácil
    for (i = 0; i < MAX_PILARES; i++) {
        pilares[i].x = LARGURA - 1 + (i * espacoEntrePilares);

        pilares[i].buracoTam = 2;

        int minBuracoY = 3;
        int maxBuracoY = ALTURA - 3 - pilares[i].buracoTam;
        pilares[i].buracoY = rand() % (maxBuracoY - minBuracoY + 1) +
                             minBuracoY;
    }
    int pontuacao = 0;

    while (1) {
        atualizarPassaro(&passaro);
        /*system("cls");//Simula a tela limpa (apenas para fins visuais): N�o implementar*/
        moverPilares(pilares, &pontuacao);

        if (checarColisao(&passaro, pilares)) {
            printf("\t\tGame Over! Pontuacao final: %d.\n", pontuacao);
            return pontuacao;
        }

        desenharJogo(&passaro, pilares, pontuacao, dificuldade);
        Sleep(150);
    }
}
