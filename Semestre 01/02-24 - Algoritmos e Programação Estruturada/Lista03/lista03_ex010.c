/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere que o N ser� sempre maior que ZERO.*/
	
	int i, n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	for ( i = 1; i <= n; i++){
		printf("%d\n", i);
	}


	return 0;
}
