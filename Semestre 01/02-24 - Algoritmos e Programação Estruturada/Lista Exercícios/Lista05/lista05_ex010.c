/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Fa�a um algoritmo para ler um vetor de 20 n�meros. Ap�s isto, dever� ser lido mais um n�mero qualquer
	e verificar se esse n�mero existe no vetor ou n�o. 
	Se existir, o algoritmo deve gerar um novo vetor sem esse n�mero. (Considere que n�o haver�o n�meros repetidos no vetor).*/
	int v[20];
	int i, j, num, novo;
	for (i = 0; i< 20; i++){
		//printf("Insira novo valor: ");
		//scanf("%d", &num);
		//v[i] = num;
		v[i] =  i + 1;
	}
	printf("Primeiro Vetor.\n");
	for (i = 0; i < 20; i++){
		printf("%d ", v[i]);
	}
	printf("\nInsira novo valor para remo��o: ");
	scanf("%d", &novo);
	
	int novo_vetor[19];
	for (i = 1; i < 20; i++){
		if (v[i] == novo){
			printf("Novo vetor criado!\n");	
			for (j = 0; j < 20; j++){
				if (v[j] != novo){
					novo_vetor[j] = v[j];
				}
			}
		} else {
		  	printf("N�mero informado n�o consta na base do vetor!\n");
			break;
		}
	}
}

