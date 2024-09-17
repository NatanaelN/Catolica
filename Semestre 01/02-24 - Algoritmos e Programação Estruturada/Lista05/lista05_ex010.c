/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Faça um algoritmo para ler um vetor de 20 números. Após isto, deverá ser lido mais um número qualquer
	e verificar se esse número existe no vetor ou não. 
	Se existir, o algoritmo deve gerar um novo vetor sem esse número. (Considere que não haverão números repetidos no vetor).*/
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
	printf("\nInsira novo valor para remoção: ");
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
		  	printf("Número informado não consta na base do vetor!\n");
			break;
		}
	}
}

