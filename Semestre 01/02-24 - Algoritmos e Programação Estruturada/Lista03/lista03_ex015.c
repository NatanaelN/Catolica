/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Fa�a um algoritmo que calcule e escreva a m�dia aritm�tica dos n�meros inteiros entre 15 (inclusive) e 100 (inclusive).*/
	
	int contador, i, somador; 
	for (i = 15; i <= 100; i++){
		somador += i;
		contador++;
		printf("N�m: %.3d\tSoma: %d\tContador: %.d\n", i, somador, contador);
	}
	printf("%d n�meros considerados!", contador);
	printf("\t%d Soma Total!", somador);
	printf("\tM�dia dos n�meros: %.d", somador / contador);


	return 0;
}
