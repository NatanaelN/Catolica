/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main(){
	setlocale(LC_ALL, "");
	
	/*Faça um algoritmo para ler 50 números e armazenar em um vetor VET, 
	verificar e escrever se existem números repetidos no vetor VET e em que posições se encontram.*/
	int vet[50];
	int i = 0, j, outro, x = 0;
	while ( i < 50){
		int random_number = rand() % 100;  // Gera um número entre 0 e 99
		vet[i] = random_number;
		i++;
	}
	for (i = 0; i < 50; i++){
		printf("Vetor[%2d] = %2d\n", i, vet[i]);
	}
	printf("\n");
	for (i = 0; i < 50; i++){
		outro = vet[i];
		x = 0;
		
		for(j = 0; j < 50; j++){
			if (outro == vet[j]){
				x++;
			}
		}
		if (x > 1) {
            printf("%d encontrado %d vezes no vetor.\n", outro, x);
        }
    }
}
