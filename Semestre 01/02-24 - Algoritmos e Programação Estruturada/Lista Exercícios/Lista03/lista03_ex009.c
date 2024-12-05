/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Escreva um algoritmo para imprimir os 10 primeiros n´umeros inteiros maiores que 100.*/
	
	int i;
	for (i = 1; i <= 10; i++){
		printf("%d\n", 100 +i);
	}

	return 0;
}
