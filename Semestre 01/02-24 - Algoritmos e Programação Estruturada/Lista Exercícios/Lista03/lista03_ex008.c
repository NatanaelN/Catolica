/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Escreva um algoritmo para imprimir os n´umeros de 1 (inclusive) a 10 (inclusive) em ordem decrescente.*/
	int i;
	
	for ( i = 10 ; i >= 1; i--){
		printf("%d\n", i);
	}


	return 0;
}
