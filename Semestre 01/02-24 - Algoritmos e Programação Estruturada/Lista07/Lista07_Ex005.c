//Engenharia de Software - UCB
//Prof: Jefferson Salomão
//Lista de Exercícios 07
// Created by natan on 12/10/2024.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <unistd.h>

#define TAM 3
void point(void){
	int i;
	for (i = 0; i < 3; i++){
		sleep(1);
		printf(".");
		if (i == 2){
		   printf("\n");
		}
	}
}
void main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));
    /*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
	Imprima o endereço de cada posição dessa matriz.*/
	int i, j;
	float matriz[TAM][TAM];
	float *ptr = matriz;
	
	char string2[] = "| Valor |";
	printf("%-s%-s%-s\n", string2, string2, string2);

	for (i = 0; i < TAM; i++){
		for( j = 0; j < TAM; j++){
			float aleat = (float) (1.0 + rand()) / RAND_MAX * 10.0;
			*ptr = aleat;
			printf("|%-7.2f|", *ptr);
			sleep(1);
			ptr++;
		}
		printf("\n");
	}
	printf("\nCarregando endereços");
	point();
	char string[] = "|Valor\tEndereço \t |";
	printf("%-17s%-17s%-17s\n", string, string, string);
	matriz_p(matriz);
}

void matriz_p(float *ptr2){
	int k, l;
	for(k = 0; k < TAM; k++){
		for(l = 0; l < TAM; l++){
			printf("|%-5.2f\t%-10.p |", *ptr2, ptr2);
			ptr2++;

		}
		printf("\n");
	}
}
