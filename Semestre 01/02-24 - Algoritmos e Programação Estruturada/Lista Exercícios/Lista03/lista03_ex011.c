/* Algoritmos e Programa��o Estruturada
1� Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exerc�cios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Modifique o exerc��cio anterior para aceitar somente valores maiores que 0 para N. Caso o valor informado
(para N) n�o seja maior que 0, dever� ser lido um novo valor para N.*/
	
	int i, n;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	while (n <= 0){
		printf("Digite um n�mero v�lido: ");
		scanf("%d", &n);
	}
	for ( i = 1; i <= n; i++){
		printf("%d\n", i);
	}


	return 0;
}
