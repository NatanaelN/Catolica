/* Algoritmos e Programa��o E
struturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Fa�aa um algoritmo para ler um vetor de 30 n�meros. 
	Ap�s isto, ler mais um n�mero qualquer, calcular e escrever quantas vezes esse n�mero aparece no vetor.*/
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
	printf("\nInsira um n�mero: ");
	scanf("%d", &id);
	for(i = 0; i < 30; i++){
		if (vet[i] == id){
			num_x++;
		}
	}
	if (num_x == 1){
		printf("\nO n�mero %d foi localizado uma �nica vez.", id);
	} else if (num_x > 1){
		printf("\nO n�mero %d foi localizado %d vezes.", id, num_x);
	} else {
		printf("\nO n�mero n�o consta na base do vetor");
	}
	

}

