/* Algoritmos e Programação Estruturada
1º Semestre. Aluno =  Natanael Ferreira Neves
Lista de Exercícios 03*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo
	valor, ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do
	primeiro valor lido pelo segundo valor lido. (utilizar a estrutura while).*/
	
	int v1, v2;
	float divisao;
	
	printf("Entre com o primeiro valor: ");
	scanf("%d", &v1);
	
	printf("Entre com o segundo valor: ");
	scanf("%d", &v2);
	
	if (v2 == 0){
		while ( v2 == 0 ){
			printf("Insira um novo valor para o divisor: ");
			scanf("%d", &v2);	
		}
	}
	divisao = v1 / v2;
	printf("%d / %d = %.2f.", v1, v2, divisao);

	return 0;
}
