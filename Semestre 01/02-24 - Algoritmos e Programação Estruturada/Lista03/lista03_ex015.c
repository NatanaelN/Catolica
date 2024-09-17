/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Faça um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15 (inclusive) e 100 (inclusive).*/
	
	int contador, i, somador; 
	for (i = 15; i <= 100; i++){
		somador += i;
		contador++;
		printf("Núm: %.3d\tSoma: %d\tContador: %.d\n", i, somador, contador);
	}
	printf("%d números considerados!", contador);
	printf("\t%d Soma Total!", somador);
	printf("\tMédia dos números: %.d", somador / contador);


	return 0;
}
