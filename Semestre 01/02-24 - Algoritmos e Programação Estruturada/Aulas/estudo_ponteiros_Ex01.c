#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 10

void main(void){
	setlocale(LC_ALL, "");
	/*Escreva um programa que leia 10 inteiros da entrada padrão, armazene-os em um vetor e os escreva
	na saída padrão na ordem contrária a de leitura; todos os acessos ao vetor devem ser feitos usando
	somente ponteiros, sem usar índices de vetor (vet[i], etc).*/
	int num[TAM];
	int * ptr = num;
	int i, x;
	for (i = 0; i < TAM; i++){
		printf("Digite o %d número: ", i+1);
		scanf("%d", &x);
		* ptr = x;
		ptr++;
	}
	printf("Valor\tEndereço\n");
	for (i = TAM - 1; i >= 0; i--) {
		ptr--;
		printf("%d \t%p\n", * ptr, ptr);
	}
}
