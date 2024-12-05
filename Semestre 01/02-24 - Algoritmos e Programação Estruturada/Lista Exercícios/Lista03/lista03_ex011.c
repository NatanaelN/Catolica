/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Modifique o exerc´ýcio anterior para aceitar somente valores maiores que 0 para N. Caso o valor informado
(para N) não seja maior que 0, deverá ser lido um novo valor para N.*/
	
	int i, n;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	while (n <= 0){
		printf("Digite um número válido: ");
		scanf("%d", &n);
	}
	for ( i = 1; i <= n; i++){
		printf("%d\n", i);
	}


	return 0;
}
