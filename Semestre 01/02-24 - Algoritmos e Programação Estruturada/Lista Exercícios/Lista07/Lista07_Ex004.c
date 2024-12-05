//Engenharia de Software - UCB
//Prof: Jefferson Salomão
//Lista de Exercícios 07
// Created by natan on 12/10/2024.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 10

void main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    /*Crie um programa que contenha um array de float contendo 10 elementos.
	Imprima o endereço de cada posição desse array.*/
	float num_q[TAM];
	float *ptr;
	ptr = num_q;
	int i;
	printf("|\tNúmero\t|\tPonteiro\t|\t    Endereço    \t|\n");
	for (i = 0; i < TAM; i++){
		float num_aleat = (float) (1.0 + rand()) / RAND_MAX * 100;
		//printf("%.2f\n", num_aleat);
		*ptr = num_aleat;
		printf("|\t%-6.2f\t|\t%-8.2f\t|\t%-p\t|\n", num_aleat, *ptr, ptr);
		ptr++;
	}
}
