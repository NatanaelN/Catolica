/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X. Armazenar em um
	vetor M o resultado de cada elemento de A multiplicado pelo valor X.
	Logo após, imprimir o vetor M.*/
	int a[10];
	int i, num, x;
	int M[10];
	
	for(i = 0; i < 10; i++){
		printf("Numero %d ", i +1);
		scanf("%d", &num);
		a[i] = num;
	}
	printf("Qual o o número multiplicador: ");
	scanf("%d", &x);
	
	for(i = 0; i < 10; i++){
		M[i] = a[i] * x;
	}
	printf("Vetor M: ");
	for(i = 0; i < 10; i++){
		printf("%d ", M[i]);
	
		}
}

