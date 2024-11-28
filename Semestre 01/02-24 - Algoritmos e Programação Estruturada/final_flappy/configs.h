#ifndef CONFIGS_H
#define CONFIGS_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define LARGURAC 10  // Largura da caixa
#define TAM 50

#define LARGURA 20
#define ALTURA 10
#define PASSARO_X 5
#define MAX_PILARES 5


#define VERDE "\033[32m"
#define AMARELO "\033[33m"
#define AZUL "\033[34m"
#define PADRAO "\033[m"

#define LIMPA "\x1B[m"
#define INTENSO "\x1B[1m"
#define SUB "\x1B[4m"
#define PISCA "\x1B[5m"
#define PISCAAM "\x1B[5m\033[33m"

typedef struct {
    int y;
} Passaro;

typedef struct {
    int x;
    int buracoY;
    int buracoTam;
} Pilar;

void criacao_caixa(int tamanho);
void numerozao(void);
void centralizar_retornos(char *texto);
void centralizar_nomepadrao(char *nome, int tam, int op_grafico);
void centralizar_numpadrao(int *num, int tam, int grafico);
void centralizar_textoind(char *texto);
char *bar(int pontos);

#endif
