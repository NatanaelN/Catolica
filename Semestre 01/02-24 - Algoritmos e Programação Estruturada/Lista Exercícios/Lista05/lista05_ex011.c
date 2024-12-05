/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 05*/

#include <stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "");
	/*Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada.
	Calcular e escrever a quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.*/
	int v1[15], v2[15];
	int i, j, v = 0;
	for(i = 0; i < 2; i++){
 		for(j = 0; j < 15; j++){
 			if (i == 0){
 				v1[j] = j;
			} else if ( i == 1){
			 	v2[j] = j;
			}
		}
	}
	for(j = 0; j < 15; j++){
		if (v1[j] == v2[j]){
			v++;
		}
	}
	if ( v > 0){
	   printf("Foram localizados %d números em posições iguais.");
	}
}

