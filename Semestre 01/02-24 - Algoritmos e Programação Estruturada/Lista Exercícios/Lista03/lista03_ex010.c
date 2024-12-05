/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere que o N será sempre maior que ZERO.*/
	
	int i, n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	for ( i = 1; i <= n; i++){
		printf("%d\n", i);
	}


	return 0;
}
