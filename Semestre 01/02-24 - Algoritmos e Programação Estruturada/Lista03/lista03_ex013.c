/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.*/
	int i, v;
	
	printf("\tTaboada Dotã");
	printf("\nQual número deseja verificar a taboada? ");
	scanf("%d", &v);
	
	for (i = 0; i <= 10; i++){
		printf("%d x %.2d = \t%0.3d\n", v, i, v * i);
	}

	return 0;
}
