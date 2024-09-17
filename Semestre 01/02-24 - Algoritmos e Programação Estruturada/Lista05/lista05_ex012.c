/* Algoritmos e Programação E
struturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Façaa um algoritmo para ler um vetor de 30 números. 
	Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor.*/
	int vet[30];
	int i, num, id, num_x = 0;
	for(i = 0; i < 30; i++){
		printf("Digite o %d num do vetor: ", i + 1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(i = 0; i < 30; i++){
		printf("%d ", vet[i]);
	}
	printf("\nInsira um número: ");
	scanf("%d", &id);
	for(i = 0; i < 30; i++){
		if (vet[i] == id){
			num_x++;
		}
	}
	if (num_x == 1){
		printf("\nO número %d foi localizado uma única vez.", id);
	} else if (num_x > 1){
		printf("\nO número %d foi localizado %d vezes.", id, num_x);
	} else {
		printf("\nO número não consta na base do vetor");
	}
	

}

