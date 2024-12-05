/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Escreva um algoritmo que calcule e imprima a tabuada do 8 (1 a 10).*/
	int i;
	
	for ( i = 0; i <= 10; i++){
		printf("8 x %.2d = \t%0.2d\n", i, 8 * i);
	}

	return 0;
}
