#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 10

void main(void){
	setlocale(LC_ALL, "");
	/*Escreva um programa que leia 10 inteiros da entrada padr�o, armazene-os em um vetor e os escreva
	na sa�da padr�o na ordem contr�ria a de leitura; todos os acessos ao vetor devem ser feitos usando
	somente ponteiros, sem usar �ndices de vetor (vet[i], etc).*/
	int num[TAM];
	int * ptr = num;
	int i, x;
	for (i = 0; i < TAM; i++){
		printf("Digite o %d n�mero: ", i+1);
		scanf("%d", &x);
		* ptr = x;
		ptr++;
	}
	printf("Valor\tEndere�o\n");
	for (i = TAM - 1; i >= 0; i--) {
		ptr--;
		printf("%d \t%p\n", * ptr, ptr);
	}
}
